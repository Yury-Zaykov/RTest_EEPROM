/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-K04
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/TaskSupport.h>
#include <ti/sysbios/family/arm/a15/TimestampProvider.h>
#include <ti/sysbios/family/arm/a8/Mmu.h>
#include <ti/sysbios/family/arm/a9/Cache.h>
#include <ti/sysbios/family/arm/a9/Timer.h>
#include <ti/sysbios/family/arm/exc/Exception.h>
#include <ti/sysbios/family/arm/gic/Hwi.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/gates/GateMutexPri.h>
#include <ti/sysbios/hal/Cache.h>
#include <ti/sysbios/hal/Core.h>
#include <ti/sysbios/hal/CoreNull.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/rts/gnu/ReentSupport.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/LoggerBuf.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#if defined(__ti__) && !defined(__clang__)
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

#if !(defined(__GNUC__))
#if !(defined(__TI_GNU_ATTRIBUTE_SUPPORT__) || defined(__IAR_SYSTEMS_ICC__)) || defined(__ARP32__)
#define __attribute__(x)
#endif
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutexPri_Object__ {
    const ti_sysbios_gates_GateMutexPri_Fxns__ *__fxns;
    volatile xdc_UInt mutexCnt;
    volatile xdc_Int ownerOrigPri;
    volatile ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_gates_GateMutexPri_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutexPri_Object__ obj;
} ti_sysbios_gates_GateMutexPri_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutexPri_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a15.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a8.Mmu INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a9.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.a9.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_a9_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_a9_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_a9_Timer_Module__ ti_sysbios_family_arm_a9_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_a9_Timer_Object__ {
    const ti_sysbios_family_arm_a9_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt32 period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UInt8 prescale;
    xdc_UArg arg;
    ti_sysbios_family_arm_gic_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_gic_Hwi_Handle hwi;
} ti_sysbios_family_arm_a9_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_a9_Timer_Object__ obj;
} ti_sysbios_family_arm_a9_Timer_Object2__;


/*
 * ======== ti.sysbios.family.arm.exc.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.gic.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_gic_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_gic_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_gic_Hwi_Module__ ti_sysbios_family_arm_gic_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_gic_Hwi_Object__ {
    const ti_sysbios_family_arm_gic_Hwi_Fxns__ *__fxns;
    ti_sysbios_family_arm_gic_Hwi_Type type;
    xdc_UInt priority;
    xdc_UArg arg;
    ti_sysbios_family_arm_gic_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_gic_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_gic_Hwi_Instance_State__hookEnv hookEnv;
    xdc_UInt triggerSensitivity;
    xdc_UInt targetProcList;
} ti_sysbios_family_arm_gic_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_gic_Hwi_Object__ obj;
} ti_sysbios_family_arm_gic_Hwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutexPri INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutexPri_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutexPri_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutexPri_Module__ ti_sysbios_gates_GateMutexPri_Module__root__V;

/* <-- ti_sysbios_gates_GateMutexPri_Object */


/*
 * ======== ti.sysbios.hal.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Core INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.CoreNull INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Core_CoreProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_gic_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_gic_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_a9_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_a9_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_Bool privileged;
    xdc_Ptr domain;
    xdc_UInt32 checkValue;
    xdc_Ptr tls;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_LoggerBuf_Object__ {
    const xdc_runtime_LoggerBuf_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle bufHeap;
    __TA_xdc_runtime_LoggerBuf_Instance_State__entryArr entryArr;
    xdc_runtime_LoggerBuf_Entry *curEntry;
    xdc_runtime_LoggerBuf_Entry *endEntry;
    xdc_runtime_LoggerBuf_Entry *readEntry;
    xdc_Bits32 serial;
    xdc_UInt16 numEntries;
    xdc_Int8 advance;
    xdc_Bool enabled;
    xdc_Bool flush;
} xdc_runtime_LoggerBuf_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Object__ obj;
} xdc_runtime_LoggerBuf_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_LoggerBuf_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_LoggerBuf_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_LoggerBuf_Module_GateProxy_Module__ xdc_runtime_LoggerBuf_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_LoggerBuf_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_LoggerBuf_Module_GateProxy_Object__ obj;
} xdc_runtime_LoggerBuf_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {NULL};

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {&xdc_runtime_ILogger_Interface__BASE__C};

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_ICore_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8026, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8028, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutexPri VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutexPri_Fxns__ ti_sysbios_gates_GateMutexPri_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutexPri_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutexPri_query__E,
    ti_sysbios_gates_GateMutexPri_enter__E,
    ti_sysbios_gates_GateMutexPri_leave__E,
    {
        ti_sysbios_gates_GateMutexPri_Object__create__S,
        ti_sysbios_gates_GateMutexPri_Object__delete__S,
        ti_sysbios_gates_GateMutexPri_Handle__label__S,
        0x8027, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.hal.CoreNull VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_hal_CoreNull_Fxns__ ti_sysbios_hal_CoreNull_Module__FXNS__C = {
    &ti_sysbios_interfaces_ICore_Interface__BASE__C, /* __base */
    &ti_sysbios_hal_CoreNull_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_hal_CoreNull_getId__E,
    ti_sysbios_hal_CoreNull_interruptCore__E,
    ti_sysbios_hal_CoreNull_lock__E,
    ti_sysbios_hal_CoreNull_unlock__E,
    ti_sysbios_hal_CoreNull_hwiDisable__E,
    ti_sysbios_hal_CoreNull_hwiEnable__E,
    ti_sysbios_hal_CoreNull_hwiRestore__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8023, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8031, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.LoggerBuf VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_LoggerBuf_Fxns__ xdc_runtime_LoggerBuf_Module__FXNS__C = {
    &xdc_runtime_IFilterLogger_Interface__BASE__C, /* __base */
    &xdc_runtime_LoggerBuf_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_LoggerBuf_enable__E,
    xdc_runtime_LoggerBuf_disable__E,
    xdc_runtime_LoggerBuf_write0__E,
    xdc_runtime_LoggerBuf_write1__E,
    xdc_runtime_LoggerBuf_write2__E,
    xdc_runtime_LoggerBuf_write4__E,
    xdc_runtime_LoggerBuf_write8__E,
    xdc_runtime_LoggerBuf_setFilterLevel__E,
    xdc_runtime_LoggerBuf_getFilterLevel__E,
    {
        xdc_runtime_LoggerBuf_Object__create__S,
        xdc_runtime_LoggerBuf_Object__delete__S,
        xdc_runtime_LoggerBuf_Handle__label__S,
        0x8009, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int f_arg0);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.a15.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a15_TimestampProvider_Module_State__ {
    xdc_UInt32 upper32Bits;
} ti_sysbios_family_arm_a15_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a15_TimestampProvider_Module_State__ ti_sysbios_family_arm_a15_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a8.Mmu DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a8_Mmu_Module_State__ {
    __TA_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf tableBuf;
} ti_sysbios_family_arm_a8_Mmu_Module_State__;

/* --> ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096] __attribute__ ((section("ti.sysbios.family.arm.a8.mmuTableSection"), aligned(16384)));
#endif

/* Module__state__V */
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a9.Cache DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a9_Cache_Module_State__ {
    xdc_Bits32 l1dInfo;
    xdc_Bits32 l1pInfo;
    xdc_Bits32 l2Info;
    xdc_SizeT l2WaySize;
    xdc_UInt l2NumWays;
    xdc_UInt l2NumSets;
    xdc_Bits32 lockRegister;
    ti_sysbios_family_arm_gic_Hwi_Handle l2CacheHwi;
    xdc_UInt pl310RTLRelease;
    xdc_Bits32 l2ErrorStatus;
    __TA_ti_sysbios_family_arm_a9_Cache_Module_State__baseAddresses baseAddresses;
} ti_sysbios_family_arm_a9_Cache_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a9_Cache_Module_State__ ti_sysbios_family_arm_a9_Cache_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.a9.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_a9_Timer_Object__ ti_sysbios_family_arm_a9_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_a9_Timer_Module_State__ {
    xdc_UInt availMask;
    ti_sysbios_family_arm_a9_Timer_Handle handle;
} ti_sysbios_family_arm_a9_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_a9_Timer_Module_State__ ti_sysbios_family_arm_a9_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.exc.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_exc_Exception_Module_State__ {
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers excStackBuffers;
    __TA_ti_sysbios_family_arm_exc_Exception_Module_State__excStack excStack;
    xdc_SizeT excStackSize;
} ti_sysbios_family_arm_exc_Exception_Module_State__;

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excActive ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excContext ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A[1];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[65536];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[65536] __attribute__ ((aligned(8)));
#endif

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T2_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[1];

/* Module__state__V */
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V;

/* --> ti_sysbios_family_arm_exc_Exception_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__A[1];


/*
 * ======== ti.sysbios.family.arm.gic.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_gic_Hwi_Object__ ti_sysbios_family_arm_gic_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_gic_Hwi_Module_State__ {
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__taskSP taskSP;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__isrStack isrStack;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack hwiStack;
    xdc_Ptr isrStackSize;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__iser iser;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__icfgr icfgr;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__itargetsr itargetsr;
    xdc_UInt spuriousInts;
    xdc_UInt lastSpuriousInt;
    xdc_UInt irp;
    xdc_Ptr isrStackBase;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable dispatchTable;
    volatile xdc_UInt curIntId;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__igroupr igroupr;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack fiqStack;
    xdc_SizeT fiqStackSize;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__intAffinity intAffinity;
    ti_sysbios_family_arm_gic_Hwi_Object__ Object_field_nonPluggedHwi;
} ti_sysbios_family_arm_gic_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_taskSP__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__taskSP ti_sysbios_family_arm_gic_Hwi_Module_State_0_taskSP__A[1];

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_isrStack__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__isrStack ti_sysbios_family_arm_gic_Hwi_Module_State_0_isrStack__A[1];

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_hwiStack__A */
__T2_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack ti_sysbios_family_arm_gic_Hwi_Module_State_0_hwiStack__A[1];

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_icfgr__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__icfgr ti_sysbios_family_arm_gic_Hwi_Module_State_0_icfgr__A[16];

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_itargetsr__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__itargetsr ti_sysbios_family_arm_gic_Hwi_Module_State_0_itargetsr__A[64];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A[256];

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_intAffinity__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__intAffinity ti_sysbios_family_arm_gic_Hwi_Module_State_0_intAffinity__A[256];

/* Module__state__V */
ti_sysbios_family_arm_gic_Hwi_Module_State__ ti_sysbios_family_arm_gic_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutexPri DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutexPri_Object__ ti_sysbios_gates_GateMutexPri_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Core DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.CoreNull DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Core_CoreProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[134217728];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[134217728] __attribute__ ((aligned(8)));
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg f_arg0);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[1];


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[16384];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[16384] __attribute__ ((section(".bss"), aligned(8)));
#endif

/* --> TaskUART */
extern xdc_Void TaskUART(xdc_UArg f_arg0,xdc_UArg f_arg1);

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[16384];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[16384] __attribute__ ((section(".bss"), aligned(8)));
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    xdc_Bool curTaskPrivileged;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_rts_gnu_ReentSupport_Module_State__ {
    xdc_Int taskHId;
    ti_sysbios_knl_Semaphore_Handle lock;
} ti_sysbios_rts_gnu_ReentSupport_Module_State__;

/* Module__state__V */
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V;


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf DECLARATIONS ========
 */

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_LoggerBuf_Module_State__ {
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} xdc_runtime_LoggerBuf_Module_State__;

/* Module__state__V */
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_LoggerBuf_Module_startup__E */
extern xdc_Int xdc_runtime_LoggerBuf_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_gic_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_gic_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_exc_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_exc_Exception_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_rts_gnu_ReentSupport_Module_startup__E */
extern xdc_Int ti_sysbios_rts_gnu_ReentSupport_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_a9_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a9_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_a8_Mmu_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a8_Mmu_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_a15_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_a15_TimestampProvider_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[13];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[13];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char* f_arg0,xdc_UInt f_arg1);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char** f_arg0,xdc_CString* f_arg1,xdc_VaList* f_arg2,xdc_runtime_System_ParseData* f_arg3);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7265];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[57];


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_family_arm_gic_Hwi_Module_State_nonPluggedHwi__O = offsetof(ti_sysbios_family_arm_gic_Hwi_Module_State__,Object_field_nonPluggedHwi);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutexPri_Instance_State_pendQ__O = offsetof(ti_sysbios_gates_GateMutexPri_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/WorkspaceRaptor/RTest_EEPROM/.CcsProjFiles/Release/configPkg/package/cfg/app_pa9fg");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7A9");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = AM437xBB");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = gnu.targets.arm.A9F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */


xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    (unsigned short)(~0U), /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    NULL,  /* msg */
    {
        0,  /* mod */
        NULL,  /* file */
        0   /* line */
    }
};

/*
 *  ======== Error_policyLog ========
 */
Void xdc_runtime_Error_policyLog__I(xdc_runtime_Types_ModuleId mod,
    CString file, Int line, CString msg, IArg arg1, IArg arg2)
{
    /*
     * Log the error, now that we've retrieved the error message.
     *
     * We call Log_put here instead of Log_write so that we can log the
     * caller's module id instead of the Error module's id.
     *
     * In logging this event, we'll use the Error module's mask and logger. We
     * don't have a way to reliably access the caller's diags mask and logger.
     * The caller isn't guaranteed to have a mask on the target, even if they
     * are performing logging.
     */
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C

    if (xdc_runtime_Diags_query(xdc_runtime_Log_L_error)) {
        xdc_runtime_Log_put8(xdc_runtime_Log_L_error, mod, (IArg) file, line,
                 (IArg) msg, arg1, arg2, 0, 0, 0);
    }
}

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
/* REQ_TAG(SYSBIOS-953) */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0);
}
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0);
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0);
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0);
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0);
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0);
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0);
}
xdc_Bool ti_sysbios_family_arm_gic_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_gic_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0);
}
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0);
}
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0);
}
xdc_Bool ti_sysbios_family_arm_a9_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_a9_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0);
}
xdc_Bool ti_sysbios_family_arm_a8_Mmu_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_a8_Mmu_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0);
}
xdc_Bool ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[12] < 0);
}


/*
 * Startup_exec__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * attribute, whole program optimizers would otherwise optimize-out this
 * function.
 */
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
/* REQ_TAG(SYSBIOS-949) */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[13];
    xdc_runtime_Startup_startModsFxn__C(state, 13);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));

extern xdc_Void AppInitFunc(void);  /* user defined reset function */
extern xdc_Void ti_sysbios_family_arm_gic_Hwi_init__E(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    AppInitFunc();
    ti_sysbios_family_arm_gic_Hwi_init__E();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
/* REQ_TAG(SYSBIOS-1072) */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt,
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;

    /*
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;

    res = 0;

    c = **pfmt;
    *pfmt = *pfmt + 1;


    if (c == '$') {
        c = **pfmt;
        *pfmt = *pfmt + 1;

        if (c == 'L') {
            xdc_runtime_Types_Label *lab = (parse->aFlag == TRUE) ?
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);

            /*
             * Call Text_putLab to write out the label, taking the precision
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field. */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'F') {
            xdc_runtime_Types_Site site;

            /* Retrieve the file name string from the argument list */
            site.file = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Retrieve the line number from the argument list. */
            site.line = (parse->aFlag == TRUE) ?
                (xdc_Int) va_arg(va, xdc_IArg) :
                (xdc_Int) va_arg(va, xdc_Int);

            /*
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;

            /*
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string length.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Update pva before passing it to doPrint. */
            *pva = va;

            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             * System_doPrint guarantees that parse->precis is positive.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, (xdc_SizeT)parse->precis,
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf != NULL) {
                if (res >= parse->precis) {
                    /* Not enough space for all characters, only
                     * (parse->precis - 1) and '\0' were printed.
                     */
                    res = parse->precis - 1;
                }
                *pbuf += res;
            }

            /* Update the temporary variable with any changes to *pva */
            va = *pva;

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }

    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag == TRUE) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining).
     */
    goto end;
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int out, const char *buffer, unsigned count);
#elif (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined))
extern int _write(int out, char *buffer, int count);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;

    while (size != 0U) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= (xdc_UInt)printCount;
        buf = buf + printCount;
    }
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */

/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_runtime_Text_RopeVisitor visFxn, xdc_Ptr visState)
{
    xdc_CString stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}

/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int stat);

extern Void ti_sysbios_family_arm_a9_Timer_startup__E(Void);

Void ti_sysbios_BIOS_startFunc__I(Void)
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    (void)xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_family_arm_a9_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}


Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    (void)ti_sysbios_knl_Task_disable();
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* force thread type to 'Main' */
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }
    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())
        == 0U) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.family.arm.gic.Hwi TEMPLATE ========
 */


extern Void _c_int00();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I();
extern Void ti_sysbios_family_arm_gic_Hwi_dispatchIRQ__I();
extern Void ti_sysbios_family_arm_gic_Hwi_dispatchFIQC__I();

const UInt32 ti_sysbios_family_arm_gic_Hwi_vectors[] __attribute__ ((section (".vecs"), aligned (0x400))) = {
    (UInt32)(0xE59FF018),       /*   ldr  pc, resetFunc         */
    (UInt32)(0xE59FF018),       /*   ldr  pc, undefInstFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, svcFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, prefetchAbortFunc */
    (UInt32)(0xE59FF018),       /*   ldr  pc, dataAbortFunc     */
    (UInt32)(0xE59FF018),       /*   ldr  pc, reservedFunc      */
    (UInt32)(0xE59FF018),       /*   ldr  pc, irqFunc           */
    (UInt32)(0xE59FF018),       /*   ldr  pc, fiqFunc           */

/* resetFunc */
    (UInt32)(&_c_int00),    /* _c_int00 */

/* undefInstFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* svcFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* prefetchAbortFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* dataAbortFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerDataAsm__I),

/* reservedFunc */
    (UInt32)(&ti_sysbios_family_arm_exc_Exception_excHandlerAsm__I),

/* irqFunc */
    (UInt32)(&ti_sysbios_family_arm_gic_Hwi_dispatchIRQ__I),

/* fiqFunc */
    (UInt32)(&ti_sysbios_family_arm_gic_Hwi_dispatchFIQC__I)
};

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);
#pragma FUNC_EXT_CALLED(aligned_alloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif


/*
 * Header is a union to make sure that the size is a power of 2.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;



/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    /* return NULL if size is 0, or alignment is not a power-of-2 */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

/*
 *  ======== aligned_alloc ========
 */
Void ATTRIBUTE *aligned_alloc(SizeT alignment, SizeT size)
{
    Void *retval;

    retval = memalign(alignment, size);

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport TEMPLATE ========
 */


#include <reent.h>
#include <sys/lock.h>

/*
 *  ======== __getreent ========
 *  Return pointer to current thread's reentrancy structure
 */
struct _reent* __getreent()
{
    if (ti_sysbios_BIOS_getThreadType() == ti_sysbios_BIOS_ThreadType_Main) {
        return _GLOBAL_REENT;
    }
    else {
        return (struct _reent *)ti_sysbios_rts_gnu_ReentSupport_getReent__I();
    }
}

/*
 *  ======== __libc_lock_init ========
 */
void __libc_lock_init(_LOCK_T *lock)
{
    ti_sysbios_knl_Semaphore_Params params;

    /* Construct a binary semaphore */
    ti_sysbios_knl_Semaphore_Params_init(&params);
    params.mode = ti_sysbios_knl_Semaphore_Mode_BINARY;
    ti_sysbios_knl_Semaphore_construct(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem)), 1, &params);
    lock->init_done = 1;
}

/*
 *  ======== __libc_lock_init_recursive ========
 */
void __libc_lock_init_recursive(_LOCK_RECURSIVE_T *lock)
{
    ti_sysbios_knl_Semaphore_Params params;

    /* Construct a binary semaphore */
    ti_sysbios_knl_Semaphore_Params_init(&params);
    params.mode = ti_sysbios_knl_Semaphore_Mode_BINARY;
    ti_sysbios_knl_Semaphore_construct(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem)), 1, &params);

    /* Initialize owner, count and init_done */
    lock->owner = NULL;
    lock->count = 0;
    lock->init_done = 1;
}

/*
 *  ======== __libc_lock_acquire ========
 */
void __libc_lock_acquire(_LOCK_T *lock)
{
    if (!(lock->init_done)) {
        ti_sysbios_knl_Semaphore_pend(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock,
        ti_sysbios_BIOS_WAIT_FOREVER);

        if (!(lock->init_done)) {
            /*
             * Execution can only reach here if lock was created using
             * __LOCK_INIT macro.
             */
            __libc_lock_init(lock);
        }

        ti_sysbios_knl_Semaphore_post(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock);
    }

    ti_sysbios_knl_Semaphore_pend(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))),
    ti_sysbios_BIOS_WAIT_FOREVER);
}

/*
 *  ======== __libc_lock_acquire_recursive ========
 */
void __libc_lock_acquire_recursive(_LOCK_RECURSIVE_T *lock)
{
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_BIOS_ThreadType curThreadType;

    if (!(lock->init_done)) {
        ti_sysbios_knl_Semaphore_pend(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock,
        ti_sysbios_BIOS_WAIT_FOREVER);

        if (!(lock->init_done)) {
            /*
             * Execution can only reach here if lock was created using
             * __LOCK_INIT_RECURSIVE macro.
             */
            __libc_lock_init_recursive(lock);
        }

        ti_sysbios_knl_Semaphore_post(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock);
    }

    /* Determine current thread type */
    curThreadType = ti_sysbios_BIOS_getThreadType();

    /* Get Handle to current Task */
    curTask = (Ptr)ti_sysbios_knl_Task_self();

    if (curThreadType == ti_sysbios_BIOS_ThreadType_Main) {
        /*
         * If thread type is Main and owner is also Main thread then
         * increment lock count and return
         */
        if (lock->owner == (Ptr)~(0)) {
            (lock->count)++;
            return;
        }
    }
    else if (lock->owner == (Ptr)curTask) {
        /*
         * If thread type not Main and owner is current task then
         * increment lock count and return
         */
        (lock->count)++;
        return;
    }

    ti_sysbios_knl_Semaphore_pend(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))),
    ti_sysbios_BIOS_WAIT_FOREVER);

    if (curThreadType == ti_sysbios_BIOS_ThreadType_Main) {
        lock->owner = (Ptr)~(0);
    }
    else {
        lock->owner = curTask;
    }

    (lock->count)++;
}

/*
 *  ======== __libc_lock_release ========
 */
void __libc_lock_release(_LOCK_T *lock)
{
    ti_sysbios_knl_Semaphore_post(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))));
}

/*
 *  ======== __libc_lock_release_recursive ========
 */
void __libc_lock_release_recursive(_LOCK_RECURSIVE_T *lock)
{
    if (--(lock->count) == 0) {
        lock->owner = NULL;
        ti_sysbios_knl_Semaphore_post(ti_sysbios_knl_Semaphore_handle(
        (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))));
    }
}

/*
 *  ======== __libc_lock_try_acquire ========
 */
int __libc_lock_try_acquire(_LOCK_T *lock)
{
    Bool pendStatus;

    if (!(lock->init_done)) {
        ti_sysbios_knl_Semaphore_pend(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock,
        ti_sysbios_BIOS_WAIT_FOREVER);

        if (!(lock->init_done)) {
            /*
             * Execution can only reach here if lock was created using
             * __LOCK_INIT macro.
             */
            __libc_lock_init(lock);
        }

        ti_sysbios_knl_Semaphore_post(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock);
    }

    pendStatus = ti_sysbios_knl_Semaphore_pend(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))),
    ti_sysbios_BIOS_NO_WAIT);

    if (pendStatus) {
        return (0);
    }

    return (-1);
}

/*
 *  ======== __libc_lock_try_acquire_recursive ========
 */
int __libc_lock_try_acquire_recursive(_LOCK_RECURSIVE_T *lock)
{
    Bool pendStatus;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_BIOS_ThreadType curThreadType;

    if (!(lock->init_done)) {
        ti_sysbios_knl_Semaphore_pend(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock,
        ti_sysbios_BIOS_WAIT_FOREVER);

        if (!(lock->init_done)) {
            /*
             * Execution can only reach here if lock was created using
             * __LOCK_INIT_RECURSIVE macro.
             */
            __libc_lock_init_recursive(lock);
        }

        ti_sysbios_knl_Semaphore_post(
        ti_sysbios_rts_gnu_ReentSupport_Module__state__V.lock);
    }

    /* Determine current thread type */
    curThreadType = ti_sysbios_BIOS_getThreadType();

    /* Get Handle to current Task */
    curTask = (Ptr)ti_sysbios_knl_Task_self();

    if (curThreadType == ti_sysbios_BIOS_ThreadType_Main) {
        /*
         * If thread type is Main and owner is also Main thread then
         * increment lock count and return
         */
        if (lock->owner == (Ptr)~(0)) {
            (lock->count)++;
            return (0);
        }
    }
    else if (lock->owner == (Ptr)curTask) {
        /*
         * If thread type not Main and owner is current task then
         * increment lock count and return
         */
        (lock->count)++;
        return (0);
    }

    pendStatus = ti_sysbios_knl_Semaphore_pend(ti_sysbios_knl_Semaphore_handle(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem))),
    ti_sysbios_BIOS_NO_WAIT);

    if (pendStatus) {
        if (curThreadType == ti_sysbios_BIOS_ThreadType_Main) {
            lock->owner = (Ptr)~(0);
        }
        else {
            lock->owner = curTask;
        }

        (lock->count)++;
        return (0);
    }

    return (-1);
}

/*
 *  ======== __libc_lock_close ========
 */
void __libc_lock_close(_LOCK_T *lock)
{
    /* Destruct semaphore */
    ti_sysbios_knl_Semaphore_destruct(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem)));
    lock->init_done = 0;
}

/*
 *  ======== __libc_lock_close_recursive ========
 */
void __libc_lock_close_recursive(_LOCK_RECURSIVE_T *lock)
{
    /* Destruct semaphore */
    ti_sysbios_knl_Semaphore_destruct(
    (ti_sysbios_knl_Semaphore_Struct *)(&(lock->sem)));
    lock->init_done = 0;
    lock->owner = NULL;
    lock->count = 0;
}

/*
 * ======== ti.sysbios.family.arm.a8.Mmu TEMPLATE ========
 */



#include <ti/sysbios/family/arm/a8/Mmu.h>

#if defined(__GNUC__) && !defined(__ti__)
Void __attribute__((naked)) ti_sysbios_family_arm_a8_Mmu_initTableBuf__I(UInt32 *mmuTableBuf)
{
          __asm__ __volatile__ (
              "movw r1, #0x403 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x4030 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x405 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x4050 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x44e \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x44e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x480 \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x4800 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x481 \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x4810 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x482 \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x4820 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x483 \n\t"
              "movw r2, #0xe12 \n\t"
              "movt r2, #0x4830 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x800 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8000 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x801 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8010 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x802 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8020 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x803 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8030 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x804 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8040 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x805 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8050 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x806 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8060 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x807 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8070 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x808 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8080 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x809 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8090 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x80f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x80f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x810 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8100 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x811 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8110 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x812 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8120 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x813 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8130 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x814 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8140 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x815 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8150 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x816 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8160 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x817 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8170 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x818 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8180 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x819 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8190 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x81f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x81f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x820 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8200 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x821 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8210 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x822 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8220 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x823 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8230 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x824 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8240 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x825 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8250 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x826 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8260 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x827 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8270 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x828 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8280 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x829 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8290 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x82f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x82f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x830 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8300 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x831 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8310 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x832 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8320 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x833 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8330 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x834 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8340 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x835 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8350 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x836 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8360 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x837 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8370 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x838 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8380 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x839 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8390 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x83f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x83f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x840 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8400 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x841 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8410 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x842 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8420 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x843 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8430 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x844 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8440 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x845 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8450 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x846 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8460 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x847 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8470 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x848 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8480 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x849 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8490 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x84f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x84f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x850 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8500 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x851 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8510 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x852 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8520 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x853 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8530 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x854 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8540 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x855 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8550 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x856 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8560 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x857 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8570 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x858 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8580 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x859 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8590 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x85f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x85f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x860 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8600 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x861 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8610 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x862 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8620 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x863 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8630 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x864 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8640 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x865 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8650 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x866 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8660 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x867 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8670 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x868 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8680 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x869 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8690 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x86f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x86f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x870 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8700 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x871 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8710 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x872 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8720 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x873 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8730 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x874 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8740 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x875 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8750 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x876 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8760 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x877 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8770 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x878 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8780 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x879 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8790 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x87f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x87f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x880 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8800 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x881 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8810 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x882 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8820 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x883 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8830 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x884 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8840 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x885 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8850 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x886 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8860 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x887 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8870 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x888 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8880 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x889 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8890 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x88f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x88f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x890 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8900 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x891 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8910 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x892 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8920 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x893 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8930 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x894 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8940 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x895 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8950 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x896 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8960 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x897 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8970 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x898 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8980 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x899 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8990 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x89f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x89f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8a9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8a90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8aa \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8aa0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ab \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ab0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ac \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ac0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ad \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ad0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ae \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ae0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8af \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8af0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8b9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8b90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ba \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ba0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8bb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8bb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8bc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8bc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8bd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8bd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8be \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8be0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8bf \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8bf0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8c9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8c90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ca \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ca0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8cb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8cb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8cc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8cc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8cd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8cd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ce \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ce0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8cf \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8cf0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8d9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8d90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8da \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8da0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8db \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8db0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8dc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8dc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8dd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8dd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8de \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8de0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8df \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8df0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8e9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8e90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ea \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ea0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8eb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8eb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ec \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ec0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ed \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ed0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ee \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ee0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ef \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ef0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8f9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8f90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fa \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fa0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8fe \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8fe0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x8ff \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x8ff0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x900 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9000 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x901 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9010 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x902 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9020 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x903 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9030 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x904 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9040 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x905 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9050 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x906 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9060 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x907 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9070 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x908 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9080 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x909 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9090 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x90a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x90a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x90b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x90b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x90c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x90c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x90d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x90d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x90e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x90e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x90f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x90f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x910 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9100 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x911 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9110 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x912 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9120 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x913 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9130 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x914 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9140 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x915 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9150 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x916 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9160 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x917 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9170 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x918 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9180 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x919 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9190 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x91a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x91a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x91b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x91b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x91c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x91c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x91d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x91d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x91e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x91e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x91f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x91f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x920 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9200 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x921 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9210 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x922 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9220 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x923 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9230 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x924 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9240 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x925 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9250 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x926 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9260 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x927 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9270 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x928 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9280 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x929 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9290 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x92a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x92a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x92b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x92b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x92c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x92c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x92d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x92d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x92e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x92e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x92f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x92f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x930 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9300 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x931 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9310 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x932 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9320 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x933 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9330 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x934 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9340 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x935 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9350 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x936 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9360 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x937 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9370 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x938 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9380 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x939 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9390 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x93a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x93a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x93b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x93b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x93c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x93c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x93d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x93d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x93e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x93e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x93f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x93f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x940 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9400 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x941 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9410 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x942 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9420 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x943 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9430 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x944 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9440 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x945 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9450 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x946 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9460 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x947 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9470 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x948 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9480 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x949 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9490 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x94a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x94a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x94b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x94b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x94c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x94c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x94d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x94d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x94e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x94e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x94f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x94f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x950 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9500 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x951 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9510 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x952 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9520 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x953 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9530 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x954 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9540 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x955 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9550 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x956 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9560 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x957 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9570 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x958 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9580 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x959 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9590 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x95a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x95a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x95b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x95b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x95c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x95c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x95d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x95d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x95e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x95e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x95f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x95f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x960 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9600 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x961 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9610 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x962 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9620 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x963 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9630 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x964 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9640 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x965 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9650 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x966 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9660 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x967 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9670 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x968 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9680 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x969 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9690 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x96a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x96a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x96b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x96b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x96c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x96c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x96d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x96d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x96e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x96e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x96f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x96f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x970 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9700 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x971 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9710 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x972 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9720 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x973 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9730 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x974 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9740 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x975 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9750 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x976 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9760 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x977 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9770 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x978 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9780 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x979 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9790 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x97a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x97a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x97b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x97b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x97c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x97c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x97d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x97d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x97e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x97e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x97f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x97f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x980 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9800 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x981 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9810 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x982 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9820 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x983 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9830 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x984 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9840 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x985 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9850 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x986 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9860 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x987 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9870 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x988 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9880 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x989 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9890 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x98a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x98a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x98b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x98b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x98c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x98c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x98d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x98d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x98e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x98e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x98f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x98f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x990 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9900 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x991 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9910 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x992 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9920 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x993 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9930 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x994 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9940 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x995 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9950 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x996 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9960 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x997 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9970 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x998 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9980 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x999 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9990 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x99a \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x99a0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x99b \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x99b0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x99c \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x99c0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x99d \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x99d0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x99e \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x99e0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x99f \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x99f0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9a9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9a90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9aa \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9aa0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ab \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ab0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ac \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ac0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ad \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ad0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ae \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ae0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9af \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9af0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9b9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9b90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ba \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ba0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9bb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9bb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9bc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9bc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9bd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9bd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9be \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9be0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9bf \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9bf0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9c9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9c90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ca \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ca0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9cb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9cb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9cc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9cc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9cd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9cd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ce \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ce0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9cf \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9cf0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9d9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9d90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9da \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9da0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9db \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9db0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9dc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9dc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9dd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9dd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9de \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9de0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9df \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9df0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9e9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9e90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ea \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ea0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9eb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9eb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ec \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ec0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ed \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ed0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ee \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ee0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ef \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ef0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f0 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f00 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f1 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f10 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f2 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f20 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f3 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f30 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f4 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f40 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f5 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f50 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f6 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f60 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f7 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f70 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f8 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f80 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9f9 \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9f90 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9fa \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9fa0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9fb \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9fb0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9fc \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9fc0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9fd \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9fd0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9fe \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9fe0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ (
              "movw r1, #0x9ff \n\t"
              "movw r2, #0x1e0e \n\t"
              "movt r2, #0x9ff0 \n\t"
              "str  r2, [r0, r1, lsl #2] \n\t"
                               );
          __asm__ __volatile__ ("bx lr");
}
#elif defined(__ti__)
Void ti_sysbios_family_arm_a8_Mmu_initTableBuf__I(UInt32 *mmuTableBuf)
{
          mmuTableBuf[1027] = 0x40301e0e;
          mmuTableBuf[1029] = 0x40501e0e;
          mmuTableBuf[1102] = 0x44e00e12;
          mmuTableBuf[1152] = 0x48000e12;
          mmuTableBuf[1153] = 0x48100e12;
          mmuTableBuf[1154] = 0x48200e12;
          mmuTableBuf[1155] = 0x48300e12;
          mmuTableBuf[2048] = 0x80001e0e;
          mmuTableBuf[2049] = 0x80101e0e;
          mmuTableBuf[2050] = 0x80201e0e;
          mmuTableBuf[2051] = 0x80301e0e;
          mmuTableBuf[2052] = 0x80401e0e;
          mmuTableBuf[2053] = 0x80501e0e;
          mmuTableBuf[2054] = 0x80601e0e;
          mmuTableBuf[2055] = 0x80701e0e;
          mmuTableBuf[2056] = 0x80801e0e;
          mmuTableBuf[2057] = 0x80901e0e;
          mmuTableBuf[2058] = 0x80a01e0e;
          mmuTableBuf[2059] = 0x80b01e0e;
          mmuTableBuf[2060] = 0x80c01e0e;
          mmuTableBuf[2061] = 0x80d01e0e;
          mmuTableBuf[2062] = 0x80e01e0e;
          mmuTableBuf[2063] = 0x80f01e0e;
          mmuTableBuf[2064] = 0x81001e0e;
          mmuTableBuf[2065] = 0x81101e0e;
          mmuTableBuf[2066] = 0x81201e0e;
          mmuTableBuf[2067] = 0x81301e0e;
          mmuTableBuf[2068] = 0x81401e0e;
          mmuTableBuf[2069] = 0x81501e0e;
          mmuTableBuf[2070] = 0x81601e0e;
          mmuTableBuf[2071] = 0x81701e0e;
          mmuTableBuf[2072] = 0x81801e0e;
          mmuTableBuf[2073] = 0x81901e0e;
          mmuTableBuf[2074] = 0x81a01e0e;
          mmuTableBuf[2075] = 0x81b01e0e;
          mmuTableBuf[2076] = 0x81c01e0e;
          mmuTableBuf[2077] = 0x81d01e0e;
          mmuTableBuf[2078] = 0x81e01e0e;
          mmuTableBuf[2079] = 0x81f01e0e;
          mmuTableBuf[2080] = 0x82001e0e;
          mmuTableBuf[2081] = 0x82101e0e;
          mmuTableBuf[2082] = 0x82201e0e;
          mmuTableBuf[2083] = 0x82301e0e;
          mmuTableBuf[2084] = 0x82401e0e;
          mmuTableBuf[2085] = 0x82501e0e;
          mmuTableBuf[2086] = 0x82601e0e;
          mmuTableBuf[2087] = 0x82701e0e;
          mmuTableBuf[2088] = 0x82801e0e;
          mmuTableBuf[2089] = 0x82901e0e;
          mmuTableBuf[2090] = 0x82a01e0e;
          mmuTableBuf[2091] = 0x82b01e0e;
          mmuTableBuf[2092] = 0x82c01e0e;
          mmuTableBuf[2093] = 0x82d01e0e;
          mmuTableBuf[2094] = 0x82e01e0e;
          mmuTableBuf[2095] = 0x82f01e0e;
          mmuTableBuf[2096] = 0x83001e0e;
          mmuTableBuf[2097] = 0x83101e0e;
          mmuTableBuf[2098] = 0x83201e0e;
          mmuTableBuf[2099] = 0x83301e0e;
          mmuTableBuf[2100] = 0x83401e0e;
          mmuTableBuf[2101] = 0x83501e0e;
          mmuTableBuf[2102] = 0x83601e0e;
          mmuTableBuf[2103] = 0x83701e0e;
          mmuTableBuf[2104] = 0x83801e0e;
          mmuTableBuf[2105] = 0x83901e0e;
          mmuTableBuf[2106] = 0x83a01e0e;
          mmuTableBuf[2107] = 0x83b01e0e;
          mmuTableBuf[2108] = 0x83c01e0e;
          mmuTableBuf[2109] = 0x83d01e0e;
          mmuTableBuf[2110] = 0x83e01e0e;
          mmuTableBuf[2111] = 0x83f01e0e;
          mmuTableBuf[2112] = 0x84001e0e;
          mmuTableBuf[2113] = 0x84101e0e;
          mmuTableBuf[2114] = 0x84201e0e;
          mmuTableBuf[2115] = 0x84301e0e;
          mmuTableBuf[2116] = 0x84401e0e;
          mmuTableBuf[2117] = 0x84501e0e;
          mmuTableBuf[2118] = 0x84601e0e;
          mmuTableBuf[2119] = 0x84701e0e;
          mmuTableBuf[2120] = 0x84801e0e;
          mmuTableBuf[2121] = 0x84901e0e;
          mmuTableBuf[2122] = 0x84a01e0e;
          mmuTableBuf[2123] = 0x84b01e0e;
          mmuTableBuf[2124] = 0x84c01e0e;
          mmuTableBuf[2125] = 0x84d01e0e;
          mmuTableBuf[2126] = 0x84e01e0e;
          mmuTableBuf[2127] = 0x84f01e0e;
          mmuTableBuf[2128] = 0x85001e0e;
          mmuTableBuf[2129] = 0x85101e0e;
          mmuTableBuf[2130] = 0x85201e0e;
          mmuTableBuf[2131] = 0x85301e0e;
          mmuTableBuf[2132] = 0x85401e0e;
          mmuTableBuf[2133] = 0x85501e0e;
          mmuTableBuf[2134] = 0x85601e0e;
          mmuTableBuf[2135] = 0x85701e0e;
          mmuTableBuf[2136] = 0x85801e0e;
          mmuTableBuf[2137] = 0x85901e0e;
          mmuTableBuf[2138] = 0x85a01e0e;
          mmuTableBuf[2139] = 0x85b01e0e;
          mmuTableBuf[2140] = 0x85c01e0e;
          mmuTableBuf[2141] = 0x85d01e0e;
          mmuTableBuf[2142] = 0x85e01e0e;
          mmuTableBuf[2143] = 0x85f01e0e;
          mmuTableBuf[2144] = 0x86001e0e;
          mmuTableBuf[2145] = 0x86101e0e;
          mmuTableBuf[2146] = 0x86201e0e;
          mmuTableBuf[2147] = 0x86301e0e;
          mmuTableBuf[2148] = 0x86401e0e;
          mmuTableBuf[2149] = 0x86501e0e;
          mmuTableBuf[2150] = 0x86601e0e;
          mmuTableBuf[2151] = 0x86701e0e;
          mmuTableBuf[2152] = 0x86801e0e;
          mmuTableBuf[2153] = 0x86901e0e;
          mmuTableBuf[2154] = 0x86a01e0e;
          mmuTableBuf[2155] = 0x86b01e0e;
          mmuTableBuf[2156] = 0x86c01e0e;
          mmuTableBuf[2157] = 0x86d01e0e;
          mmuTableBuf[2158] = 0x86e01e0e;
          mmuTableBuf[2159] = 0x86f01e0e;
          mmuTableBuf[2160] = 0x87001e0e;
          mmuTableBuf[2161] = 0x87101e0e;
          mmuTableBuf[2162] = 0x87201e0e;
          mmuTableBuf[2163] = 0x87301e0e;
          mmuTableBuf[2164] = 0x87401e0e;
          mmuTableBuf[2165] = 0x87501e0e;
          mmuTableBuf[2166] = 0x87601e0e;
          mmuTableBuf[2167] = 0x87701e0e;
          mmuTableBuf[2168] = 0x87801e0e;
          mmuTableBuf[2169] = 0x87901e0e;
          mmuTableBuf[2170] = 0x87a01e0e;
          mmuTableBuf[2171] = 0x87b01e0e;
          mmuTableBuf[2172] = 0x87c01e0e;
          mmuTableBuf[2173] = 0x87d01e0e;
          mmuTableBuf[2174] = 0x87e01e0e;
          mmuTableBuf[2175] = 0x87f01e0e;
          mmuTableBuf[2176] = 0x88001e0e;
          mmuTableBuf[2177] = 0x88101e0e;
          mmuTableBuf[2178] = 0x88201e0e;
          mmuTableBuf[2179] = 0x88301e0e;
          mmuTableBuf[2180] = 0x88401e0e;
          mmuTableBuf[2181] = 0x88501e0e;
          mmuTableBuf[2182] = 0x88601e0e;
          mmuTableBuf[2183] = 0x88701e0e;
          mmuTableBuf[2184] = 0x88801e0e;
          mmuTableBuf[2185] = 0x88901e0e;
          mmuTableBuf[2186] = 0x88a01e0e;
          mmuTableBuf[2187] = 0x88b01e0e;
          mmuTableBuf[2188] = 0x88c01e0e;
          mmuTableBuf[2189] = 0x88d01e0e;
          mmuTableBuf[2190] = 0x88e01e0e;
          mmuTableBuf[2191] = 0x88f01e0e;
          mmuTableBuf[2192] = 0x89001e0e;
          mmuTableBuf[2193] = 0x89101e0e;
          mmuTableBuf[2194] = 0x89201e0e;
          mmuTableBuf[2195] = 0x89301e0e;
          mmuTableBuf[2196] = 0x89401e0e;
          mmuTableBuf[2197] = 0x89501e0e;
          mmuTableBuf[2198] = 0x89601e0e;
          mmuTableBuf[2199] = 0x89701e0e;
          mmuTableBuf[2200] = 0x89801e0e;
          mmuTableBuf[2201] = 0x89901e0e;
          mmuTableBuf[2202] = 0x89a01e0e;
          mmuTableBuf[2203] = 0x89b01e0e;
          mmuTableBuf[2204] = 0x89c01e0e;
          mmuTableBuf[2205] = 0x89d01e0e;
          mmuTableBuf[2206] = 0x89e01e0e;
          mmuTableBuf[2207] = 0x89f01e0e;
          mmuTableBuf[2208] = 0x8a001e0e;
          mmuTableBuf[2209] = 0x8a101e0e;
          mmuTableBuf[2210] = 0x8a201e0e;
          mmuTableBuf[2211] = 0x8a301e0e;
          mmuTableBuf[2212] = 0x8a401e0e;
          mmuTableBuf[2213] = 0x8a501e0e;
          mmuTableBuf[2214] = 0x8a601e0e;
          mmuTableBuf[2215] = 0x8a701e0e;
          mmuTableBuf[2216] = 0x8a801e0e;
          mmuTableBuf[2217] = 0x8a901e0e;
          mmuTableBuf[2218] = 0x8aa01e0e;
          mmuTableBuf[2219] = 0x8ab01e0e;
          mmuTableBuf[2220] = 0x8ac01e0e;
          mmuTableBuf[2221] = 0x8ad01e0e;
          mmuTableBuf[2222] = 0x8ae01e0e;
          mmuTableBuf[2223] = 0x8af01e0e;
          mmuTableBuf[2224] = 0x8b001e0e;
          mmuTableBuf[2225] = 0x8b101e0e;
          mmuTableBuf[2226] = 0x8b201e0e;
          mmuTableBuf[2227] = 0x8b301e0e;
          mmuTableBuf[2228] = 0x8b401e0e;
          mmuTableBuf[2229] = 0x8b501e0e;
          mmuTableBuf[2230] = 0x8b601e0e;
          mmuTableBuf[2231] = 0x8b701e0e;
          mmuTableBuf[2232] = 0x8b801e0e;
          mmuTableBuf[2233] = 0x8b901e0e;
          mmuTableBuf[2234] = 0x8ba01e0e;
          mmuTableBuf[2235] = 0x8bb01e0e;
          mmuTableBuf[2236] = 0x8bc01e0e;
          mmuTableBuf[2237] = 0x8bd01e0e;
          mmuTableBuf[2238] = 0x8be01e0e;
          mmuTableBuf[2239] = 0x8bf01e0e;
          mmuTableBuf[2240] = 0x8c001e0e;
          mmuTableBuf[2241] = 0x8c101e0e;
          mmuTableBuf[2242] = 0x8c201e0e;
          mmuTableBuf[2243] = 0x8c301e0e;
          mmuTableBuf[2244] = 0x8c401e0e;
          mmuTableBuf[2245] = 0x8c501e0e;
          mmuTableBuf[2246] = 0x8c601e0e;
          mmuTableBuf[2247] = 0x8c701e0e;
          mmuTableBuf[2248] = 0x8c801e0e;
          mmuTableBuf[2249] = 0x8c901e0e;
          mmuTableBuf[2250] = 0x8ca01e0e;
          mmuTableBuf[2251] = 0x8cb01e0e;
          mmuTableBuf[2252] = 0x8cc01e0e;
          mmuTableBuf[2253] = 0x8cd01e0e;
          mmuTableBuf[2254] = 0x8ce01e0e;
          mmuTableBuf[2255] = 0x8cf01e0e;
          mmuTableBuf[2256] = 0x8d001e0e;
          mmuTableBuf[2257] = 0x8d101e0e;
          mmuTableBuf[2258] = 0x8d201e0e;
          mmuTableBuf[2259] = 0x8d301e0e;
          mmuTableBuf[2260] = 0x8d401e0e;
          mmuTableBuf[2261] = 0x8d501e0e;
          mmuTableBuf[2262] = 0x8d601e0e;
          mmuTableBuf[2263] = 0x8d701e0e;
          mmuTableBuf[2264] = 0x8d801e0e;
          mmuTableBuf[2265] = 0x8d901e0e;
          mmuTableBuf[2266] = 0x8da01e0e;
          mmuTableBuf[2267] = 0x8db01e0e;
          mmuTableBuf[2268] = 0x8dc01e0e;
          mmuTableBuf[2269] = 0x8dd01e0e;
          mmuTableBuf[2270] = 0x8de01e0e;
          mmuTableBuf[2271] = 0x8df01e0e;
          mmuTableBuf[2272] = 0x8e001e0e;
          mmuTableBuf[2273] = 0x8e101e0e;
          mmuTableBuf[2274] = 0x8e201e0e;
          mmuTableBuf[2275] = 0x8e301e0e;
          mmuTableBuf[2276] = 0x8e401e0e;
          mmuTableBuf[2277] = 0x8e501e0e;
          mmuTableBuf[2278] = 0x8e601e0e;
          mmuTableBuf[2279] = 0x8e701e0e;
          mmuTableBuf[2280] = 0x8e801e0e;
          mmuTableBuf[2281] = 0x8e901e0e;
          mmuTableBuf[2282] = 0x8ea01e0e;
          mmuTableBuf[2283] = 0x8eb01e0e;
          mmuTableBuf[2284] = 0x8ec01e0e;
          mmuTableBuf[2285] = 0x8ed01e0e;
          mmuTableBuf[2286] = 0x8ee01e0e;
          mmuTableBuf[2287] = 0x8ef01e0e;
          mmuTableBuf[2288] = 0x8f001e0e;
          mmuTableBuf[2289] = 0x8f101e0e;
          mmuTableBuf[2290] = 0x8f201e0e;
          mmuTableBuf[2291] = 0x8f301e0e;
          mmuTableBuf[2292] = 0x8f401e0e;
          mmuTableBuf[2293] = 0x8f501e0e;
          mmuTableBuf[2294] = 0x8f601e0e;
          mmuTableBuf[2295] = 0x8f701e0e;
          mmuTableBuf[2296] = 0x8f801e0e;
          mmuTableBuf[2297] = 0x8f901e0e;
          mmuTableBuf[2298] = 0x8fa01e0e;
          mmuTableBuf[2299] = 0x8fb01e0e;
          mmuTableBuf[2300] = 0x8fc01e0e;
          mmuTableBuf[2301] = 0x8fd01e0e;
          mmuTableBuf[2302] = 0x8fe01e0e;
          mmuTableBuf[2303] = 0x8ff01e0e;
          mmuTableBuf[2304] = 0x90001e0e;
          mmuTableBuf[2305] = 0x90101e0e;
          mmuTableBuf[2306] = 0x90201e0e;
          mmuTableBuf[2307] = 0x90301e0e;
          mmuTableBuf[2308] = 0x90401e0e;
          mmuTableBuf[2309] = 0x90501e0e;
          mmuTableBuf[2310] = 0x90601e0e;
          mmuTableBuf[2311] = 0x90701e0e;
          mmuTableBuf[2312] = 0x90801e0e;
          mmuTableBuf[2313] = 0x90901e0e;
          mmuTableBuf[2314] = 0x90a01e0e;
          mmuTableBuf[2315] = 0x90b01e0e;
          mmuTableBuf[2316] = 0x90c01e0e;
          mmuTableBuf[2317] = 0x90d01e0e;
          mmuTableBuf[2318] = 0x90e01e0e;
          mmuTableBuf[2319] = 0x90f01e0e;
          mmuTableBuf[2320] = 0x91001e0e;
          mmuTableBuf[2321] = 0x91101e0e;
          mmuTableBuf[2322] = 0x91201e0e;
          mmuTableBuf[2323] = 0x91301e0e;
          mmuTableBuf[2324] = 0x91401e0e;
          mmuTableBuf[2325] = 0x91501e0e;
          mmuTableBuf[2326] = 0x91601e0e;
          mmuTableBuf[2327] = 0x91701e0e;
          mmuTableBuf[2328] = 0x91801e0e;
          mmuTableBuf[2329] = 0x91901e0e;
          mmuTableBuf[2330] = 0x91a01e0e;
          mmuTableBuf[2331] = 0x91b01e0e;
          mmuTableBuf[2332] = 0x91c01e0e;
          mmuTableBuf[2333] = 0x91d01e0e;
          mmuTableBuf[2334] = 0x91e01e0e;
          mmuTableBuf[2335] = 0x91f01e0e;
          mmuTableBuf[2336] = 0x92001e0e;
          mmuTableBuf[2337] = 0x92101e0e;
          mmuTableBuf[2338] = 0x92201e0e;
          mmuTableBuf[2339] = 0x92301e0e;
          mmuTableBuf[2340] = 0x92401e0e;
          mmuTableBuf[2341] = 0x92501e0e;
          mmuTableBuf[2342] = 0x92601e0e;
          mmuTableBuf[2343] = 0x92701e0e;
          mmuTableBuf[2344] = 0x92801e0e;
          mmuTableBuf[2345] = 0x92901e0e;
          mmuTableBuf[2346] = 0x92a01e0e;
          mmuTableBuf[2347] = 0x92b01e0e;
          mmuTableBuf[2348] = 0x92c01e0e;
          mmuTableBuf[2349] = 0x92d01e0e;
          mmuTableBuf[2350] = 0x92e01e0e;
          mmuTableBuf[2351] = 0x92f01e0e;
          mmuTableBuf[2352] = 0x93001e0e;
          mmuTableBuf[2353] = 0x93101e0e;
          mmuTableBuf[2354] = 0x93201e0e;
          mmuTableBuf[2355] = 0x93301e0e;
          mmuTableBuf[2356] = 0x93401e0e;
          mmuTableBuf[2357] = 0x93501e0e;
          mmuTableBuf[2358] = 0x93601e0e;
          mmuTableBuf[2359] = 0x93701e0e;
          mmuTableBuf[2360] = 0x93801e0e;
          mmuTableBuf[2361] = 0x93901e0e;
          mmuTableBuf[2362] = 0x93a01e0e;
          mmuTableBuf[2363] = 0x93b01e0e;
          mmuTableBuf[2364] = 0x93c01e0e;
          mmuTableBuf[2365] = 0x93d01e0e;
          mmuTableBuf[2366] = 0x93e01e0e;
          mmuTableBuf[2367] = 0x93f01e0e;
          mmuTableBuf[2368] = 0x94001e0e;
          mmuTableBuf[2369] = 0x94101e0e;
          mmuTableBuf[2370] = 0x94201e0e;
          mmuTableBuf[2371] = 0x94301e0e;
          mmuTableBuf[2372] = 0x94401e0e;
          mmuTableBuf[2373] = 0x94501e0e;
          mmuTableBuf[2374] = 0x94601e0e;
          mmuTableBuf[2375] = 0x94701e0e;
          mmuTableBuf[2376] = 0x94801e0e;
          mmuTableBuf[2377] = 0x94901e0e;
          mmuTableBuf[2378] = 0x94a01e0e;
          mmuTableBuf[2379] = 0x94b01e0e;
          mmuTableBuf[2380] = 0x94c01e0e;
          mmuTableBuf[2381] = 0x94d01e0e;
          mmuTableBuf[2382] = 0x94e01e0e;
          mmuTableBuf[2383] = 0x94f01e0e;
          mmuTableBuf[2384] = 0x95001e0e;
          mmuTableBuf[2385] = 0x95101e0e;
          mmuTableBuf[2386] = 0x95201e0e;
          mmuTableBuf[2387] = 0x95301e0e;
          mmuTableBuf[2388] = 0x95401e0e;
          mmuTableBuf[2389] = 0x95501e0e;
          mmuTableBuf[2390] = 0x95601e0e;
          mmuTableBuf[2391] = 0x95701e0e;
          mmuTableBuf[2392] = 0x95801e0e;
          mmuTableBuf[2393] = 0x95901e0e;
          mmuTableBuf[2394] = 0x95a01e0e;
          mmuTableBuf[2395] = 0x95b01e0e;
          mmuTableBuf[2396] = 0x95c01e0e;
          mmuTableBuf[2397] = 0x95d01e0e;
          mmuTableBuf[2398] = 0x95e01e0e;
          mmuTableBuf[2399] = 0x95f01e0e;
          mmuTableBuf[2400] = 0x96001e0e;
          mmuTableBuf[2401] = 0x96101e0e;
          mmuTableBuf[2402] = 0x96201e0e;
          mmuTableBuf[2403] = 0x96301e0e;
          mmuTableBuf[2404] = 0x96401e0e;
          mmuTableBuf[2405] = 0x96501e0e;
          mmuTableBuf[2406] = 0x96601e0e;
          mmuTableBuf[2407] = 0x96701e0e;
          mmuTableBuf[2408] = 0x96801e0e;
          mmuTableBuf[2409] = 0x96901e0e;
          mmuTableBuf[2410] = 0x96a01e0e;
          mmuTableBuf[2411] = 0x96b01e0e;
          mmuTableBuf[2412] = 0x96c01e0e;
          mmuTableBuf[2413] = 0x96d01e0e;
          mmuTableBuf[2414] = 0x96e01e0e;
          mmuTableBuf[2415] = 0x96f01e0e;
          mmuTableBuf[2416] = 0x97001e0e;
          mmuTableBuf[2417] = 0x97101e0e;
          mmuTableBuf[2418] = 0x97201e0e;
          mmuTableBuf[2419] = 0x97301e0e;
          mmuTableBuf[2420] = 0x97401e0e;
          mmuTableBuf[2421] = 0x97501e0e;
          mmuTableBuf[2422] = 0x97601e0e;
          mmuTableBuf[2423] = 0x97701e0e;
          mmuTableBuf[2424] = 0x97801e0e;
          mmuTableBuf[2425] = 0x97901e0e;
          mmuTableBuf[2426] = 0x97a01e0e;
          mmuTableBuf[2427] = 0x97b01e0e;
          mmuTableBuf[2428] = 0x97c01e0e;
          mmuTableBuf[2429] = 0x97d01e0e;
          mmuTableBuf[2430] = 0x97e01e0e;
          mmuTableBuf[2431] = 0x97f01e0e;
          mmuTableBuf[2432] = 0x98001e0e;
          mmuTableBuf[2433] = 0x98101e0e;
          mmuTableBuf[2434] = 0x98201e0e;
          mmuTableBuf[2435] = 0x98301e0e;
          mmuTableBuf[2436] = 0x98401e0e;
          mmuTableBuf[2437] = 0x98501e0e;
          mmuTableBuf[2438] = 0x98601e0e;
          mmuTableBuf[2439] = 0x98701e0e;
          mmuTableBuf[2440] = 0x98801e0e;
          mmuTableBuf[2441] = 0x98901e0e;
          mmuTableBuf[2442] = 0x98a01e0e;
          mmuTableBuf[2443] = 0x98b01e0e;
          mmuTableBuf[2444] = 0x98c01e0e;
          mmuTableBuf[2445] = 0x98d01e0e;
          mmuTableBuf[2446] = 0x98e01e0e;
          mmuTableBuf[2447] = 0x98f01e0e;
          mmuTableBuf[2448] = 0x99001e0e;
          mmuTableBuf[2449] = 0x99101e0e;
          mmuTableBuf[2450] = 0x99201e0e;
          mmuTableBuf[2451] = 0x99301e0e;
          mmuTableBuf[2452] = 0x99401e0e;
          mmuTableBuf[2453] = 0x99501e0e;
          mmuTableBuf[2454] = 0x99601e0e;
          mmuTableBuf[2455] = 0x99701e0e;
          mmuTableBuf[2456] = 0x99801e0e;
          mmuTableBuf[2457] = 0x99901e0e;
          mmuTableBuf[2458] = 0x99a01e0e;
          mmuTableBuf[2459] = 0x99b01e0e;
          mmuTableBuf[2460] = 0x99c01e0e;
          mmuTableBuf[2461] = 0x99d01e0e;
          mmuTableBuf[2462] = 0x99e01e0e;
          mmuTableBuf[2463] = 0x99f01e0e;
          mmuTableBuf[2464] = 0x9a001e0e;
          mmuTableBuf[2465] = 0x9a101e0e;
          mmuTableBuf[2466] = 0x9a201e0e;
          mmuTableBuf[2467] = 0x9a301e0e;
          mmuTableBuf[2468] = 0x9a401e0e;
          mmuTableBuf[2469] = 0x9a501e0e;
          mmuTableBuf[2470] = 0x9a601e0e;
          mmuTableBuf[2471] = 0x9a701e0e;
          mmuTableBuf[2472] = 0x9a801e0e;
          mmuTableBuf[2473] = 0x9a901e0e;
          mmuTableBuf[2474] = 0x9aa01e0e;
          mmuTableBuf[2475] = 0x9ab01e0e;
          mmuTableBuf[2476] = 0x9ac01e0e;
          mmuTableBuf[2477] = 0x9ad01e0e;
          mmuTableBuf[2478] = 0x9ae01e0e;
          mmuTableBuf[2479] = 0x9af01e0e;
          mmuTableBuf[2480] = 0x9b001e0e;
          mmuTableBuf[2481] = 0x9b101e0e;
          mmuTableBuf[2482] = 0x9b201e0e;
          mmuTableBuf[2483] = 0x9b301e0e;
          mmuTableBuf[2484] = 0x9b401e0e;
          mmuTableBuf[2485] = 0x9b501e0e;
          mmuTableBuf[2486] = 0x9b601e0e;
          mmuTableBuf[2487] = 0x9b701e0e;
          mmuTableBuf[2488] = 0x9b801e0e;
          mmuTableBuf[2489] = 0x9b901e0e;
          mmuTableBuf[2490] = 0x9ba01e0e;
          mmuTableBuf[2491] = 0x9bb01e0e;
          mmuTableBuf[2492] = 0x9bc01e0e;
          mmuTableBuf[2493] = 0x9bd01e0e;
          mmuTableBuf[2494] = 0x9be01e0e;
          mmuTableBuf[2495] = 0x9bf01e0e;
          mmuTableBuf[2496] = 0x9c001e0e;
          mmuTableBuf[2497] = 0x9c101e0e;
          mmuTableBuf[2498] = 0x9c201e0e;
          mmuTableBuf[2499] = 0x9c301e0e;
          mmuTableBuf[2500] = 0x9c401e0e;
          mmuTableBuf[2501] = 0x9c501e0e;
          mmuTableBuf[2502] = 0x9c601e0e;
          mmuTableBuf[2503] = 0x9c701e0e;
          mmuTableBuf[2504] = 0x9c801e0e;
          mmuTableBuf[2505] = 0x9c901e0e;
          mmuTableBuf[2506] = 0x9ca01e0e;
          mmuTableBuf[2507] = 0x9cb01e0e;
          mmuTableBuf[2508] = 0x9cc01e0e;
          mmuTableBuf[2509] = 0x9cd01e0e;
          mmuTableBuf[2510] = 0x9ce01e0e;
          mmuTableBuf[2511] = 0x9cf01e0e;
          mmuTableBuf[2512] = 0x9d001e0e;
          mmuTableBuf[2513] = 0x9d101e0e;
          mmuTableBuf[2514] = 0x9d201e0e;
          mmuTableBuf[2515] = 0x9d301e0e;
          mmuTableBuf[2516] = 0x9d401e0e;
          mmuTableBuf[2517] = 0x9d501e0e;
          mmuTableBuf[2518] = 0x9d601e0e;
          mmuTableBuf[2519] = 0x9d701e0e;
          mmuTableBuf[2520] = 0x9d801e0e;
          mmuTableBuf[2521] = 0x9d901e0e;
          mmuTableBuf[2522] = 0x9da01e0e;
          mmuTableBuf[2523] = 0x9db01e0e;
          mmuTableBuf[2524] = 0x9dc01e0e;
          mmuTableBuf[2525] = 0x9dd01e0e;
          mmuTableBuf[2526] = 0x9de01e0e;
          mmuTableBuf[2527] = 0x9df01e0e;
          mmuTableBuf[2528] = 0x9e001e0e;
          mmuTableBuf[2529] = 0x9e101e0e;
          mmuTableBuf[2530] = 0x9e201e0e;
          mmuTableBuf[2531] = 0x9e301e0e;
          mmuTableBuf[2532] = 0x9e401e0e;
          mmuTableBuf[2533] = 0x9e501e0e;
          mmuTableBuf[2534] = 0x9e601e0e;
          mmuTableBuf[2535] = 0x9e701e0e;
          mmuTableBuf[2536] = 0x9e801e0e;
          mmuTableBuf[2537] = 0x9e901e0e;
          mmuTableBuf[2538] = 0x9ea01e0e;
          mmuTableBuf[2539] = 0x9eb01e0e;
          mmuTableBuf[2540] = 0x9ec01e0e;
          mmuTableBuf[2541] = 0x9ed01e0e;
          mmuTableBuf[2542] = 0x9ee01e0e;
          mmuTableBuf[2543] = 0x9ef01e0e;
          mmuTableBuf[2544] = 0x9f001e0e;
          mmuTableBuf[2545] = 0x9f101e0e;
          mmuTableBuf[2546] = 0x9f201e0e;
          mmuTableBuf[2547] = 0x9f301e0e;
          mmuTableBuf[2548] = 0x9f401e0e;
          mmuTableBuf[2549] = 0x9f501e0e;
          mmuTableBuf[2550] = 0x9f601e0e;
          mmuTableBuf[2551] = 0x9f701e0e;
          mmuTableBuf[2552] = 0x9f801e0e;
          mmuTableBuf[2553] = 0x9f901e0e;
          mmuTableBuf[2554] = 0x9fa01e0e;
          mmuTableBuf[2555] = 0x9fb01e0e;
          mmuTableBuf[2556] = 0x9fc01e0e;
          mmuTableBuf[2557] = 0x9fd01e0e;
          mmuTableBuf[2558] = 0x9fe01e0e;
          mmuTableBuf[2559] = 0x9ff01e0e;
}
#endif

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x3b9aca00U,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0U,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutexPri_Object__table__V[0],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((const CT__ti_sysbios_BIOS_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((const CT__ti_sysbios_BIOS_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((const CT__ti_sysbios_BIOS_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8016U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((const CT__ti_sysbios_BIOS_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = NULL;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* mpeEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0U,  /* hi */
    (xdc_Bits32)0x3b9aca00U,  /* lo */
};

/* runtimeCreatesEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* defaultKernelHeapInstance__C */
__FAR__ const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C = 0;

/* kernelHeapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C = (xdc_SizeT)0x1000;

/* kernelHeapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C = ".kernel_heap";

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x8000000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((const CT__ti_sysbios_BIOS_installedErrorHook)(xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__id ti_sysbios_family_arm_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8014U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_IntrinsicsSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__count ti_sysbios_family_arm_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_IntrinsicsSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_IntrinsicsSupport_Object__table ti_sysbios_family_arm_IntrinsicsSupport_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.arm.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask ti_sysbios_family_arm_TaskSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj ti_sysbios_family_arm_TaskSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms ti_sysbios_family_arm_TaskSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__id ti_sysbios_family_arm_TaskSupport_Module__id__C = (xdc_Bits16)0x8015U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_TaskSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj ti_sysbios_family_arm_TaskSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_TaskSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__count ti_sysbios_family_arm_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__heap ti_sysbios_family_arm_TaskSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__sizeof ti_sysbios_family_arm_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_Object__table ti_sysbios_family_arm_TaskSupport_Object__table__C = NULL;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_defaultStackSize ti_sysbios_family_arm_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_arm_TaskSupport_stackAlignment ti_sysbios_family_arm_TaskSupport_stackAlignment__C = (xdc_UInt)0x8U;


/*
 * ======== ti.sysbios.family.arm.a15.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_a15_TimestampProvider_Module_State__ ti_sysbios_family_arm_a15_TimestampProvider_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_a15_TimestampProvider_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_a15_TimestampProvider_Module_State__ ti_sysbios_family_arm_a15_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a15_TimestampProvider_Module__state__V")));
#endif
ti_sysbios_family_arm_a15_TimestampProvider_Module_State__ ti_sysbios_family_arm_a15_TimestampProvider_Module__state__V = {
    (xdc_UInt32)0x0U,  /* upper32Bits */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__gateObj ti_sysbios_family_arm_a15_TimestampProvider_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_a15_TimestampProvider_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__id ti_sysbios_family_arm_a15_TimestampProvider_Module__id__C = (xdc_Bits16)0x8038U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_a15_TimestampProvider_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Object__count ti_sysbios_family_arm_a15_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Object__heap ti_sysbios_family_arm_a15_TimestampProvider_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Object__sizeof ti_sysbios_family_arm_a15_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a15_TimestampProvider_Object__table ti_sysbios_family_arm_a15_TimestampProvider_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.arm.a8.Mmu INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A */
__T1_ti_sysbios_family_arm_a8_Mmu_Module_State__tableBuf ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A[4096];

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_a8_Mmu_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a8_Mmu_Module__state__V")));
#endif
ti_sysbios_family_arm_a8_Mmu_Module_State__ ti_sysbios_family_arm_a8_Mmu_Module__state__V = {
    ((void*)ti_sysbios_family_arm_a8_Mmu_Module_State_0_tableBuf__A),  /* tableBuf */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled ti_sysbios_family_arm_a8_Mmu_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded ti_sysbios_family_arm_a8_Mmu_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsMask ti_sysbios_family_arm_a8_Mmu_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__gateObj ti_sysbios_family_arm_a8_Mmu_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__gatePrms ti_sysbios_family_arm_a8_Mmu_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__id ti_sysbios_family_arm_a8_Mmu_Module__id__C = (xdc_Bits16)0x8036U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined ti_sysbios_family_arm_a8_Mmu_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerObj ti_sysbios_family_arm_a8_Mmu_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8 ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_a8_Mmu_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__count ti_sysbios_family_arm_a8_Mmu_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__heap ti_sysbios_family_arm_a8_Mmu_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__sizeof ti_sysbios_family_arm_a8_Mmu_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_Object__table ti_sysbios_family_arm_a8_Mmu_Object__table__C = NULL;

/* A_nullPointer__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_A_nullPointer ti_sysbios_family_arm_a8_Mmu_A_nullPointer__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_unknownDescType__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_A_unknownDescType ti_sysbios_family_arm_a8_Mmu_A_unknownDescType__C = (((xdc_runtime_Assert_Id)4211) << 16 | 16);

/* defaultAttrs__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_defaultAttrs ti_sysbios_family_arm_a8_Mmu_defaultAttrs__C = {
    ti_sysbios_family_arm_a8_Mmu_FirstLevelDesc_SECTION,  /* type */
    0,  /* bufferable */
    0,  /* cacheable */
    0,  /* shareable */
    0,  /* noexecute */
    (xdc_UInt8)0x1U,  /* imp */
    (xdc_UInt8)0x0U,  /* domain */
    (xdc_UInt8)0x3U,  /* accPerm */
    (xdc_UInt8)0x1U,  /* tex */
    0,  /* notGlobal */
};

/* enableMMU__C */
__FAR__ const CT__ti_sysbios_family_arm_a8_Mmu_enableMMU ti_sysbios_family_arm_a8_Mmu_enableMMU__C = 1;


/*
 * ======== ti.sysbios.family.arm.a9.Cache INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_a9_Cache_Module_State__ ti_sysbios_family_arm_a9_Cache_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_a9_Cache_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_a9_Cache_Module_State__ ti_sysbios_family_arm_a9_Cache_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a9_Cache_Module__state__V")));
#endif
ti_sysbios_family_arm_a9_Cache_Module_State__ ti_sysbios_family_arm_a9_Cache_Module__state__V = {
    (xdc_Bits32)0x0U,  /* l1dInfo */
    (xdc_Bits32)0x0U,  /* l1pInfo */
    (xdc_Bits32)0x0U,  /* l2Info */
    (xdc_SizeT)0x0,  /* l2WaySize */
    (xdc_UInt)0x0U,  /* l2NumWays */
    (xdc_UInt)0x0U,  /* l2NumSets */
    (xdc_Bits32)0x0U,  /* lockRegister */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Object__table__V[0],  /* l2CacheHwi */
    (xdc_UInt)0x0U,  /* pl310RTLRelease */
    (xdc_Bits32)0x0U,  /* l2ErrorStatus */
    {
        ((xdc_Ptr)(0x0)),  /* [0] */
        ((xdc_Ptr)(0x0)),  /* [1] */
        ((xdc_Ptr)(0x0)),  /* [2] */
        ((xdc_Ptr)(0x0)),  /* [3] */
        ((xdc_Ptr)(0x0)),  /* [4] */
        ((xdc_Ptr)(0x0)),  /* [5] */
        ((xdc_Ptr)(0x0)),  /* [6] */
        ((xdc_Ptr)(0x0)),  /* [7] */
        ((xdc_Ptr)(0x0)),  /* [8] */
        ((xdc_Ptr)(0x0)),  /* [9] */
        ((xdc_Ptr)(0x0)),  /* [10] */
        ((xdc_Ptr)(0x0)),  /* [11] */
        ((xdc_Ptr)(0x0)),  /* [12] */
        ((xdc_Ptr)(0x0)),  /* [13] */
        ((xdc_Ptr)(0x0)),  /* [14] */
        ((xdc_Ptr)(0x0)),  /* [15] */
    },  /* baseAddresses */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__diagsEnabled ti_sysbios_family_arm_a9_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__diagsIncluded ti_sysbios_family_arm_a9_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__diagsMask ti_sysbios_family_arm_a9_Cache_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__gateObj ti_sysbios_family_arm_a9_Cache_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__gatePrms ti_sysbios_family_arm_a9_Cache_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__id ti_sysbios_family_arm_a9_Cache_Module__id__C = (xdc_Bits16)0x8033U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerDefined ti_sysbios_family_arm_a9_Cache_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerObj ti_sysbios_family_arm_a9_Cache_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn0 ti_sysbios_family_arm_a9_Cache_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn1 ti_sysbios_family_arm_a9_Cache_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn2 ti_sysbios_family_arm_a9_Cache_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn4 ti_sysbios_family_arm_a9_Cache_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn8 ti_sysbios_family_arm_a9_Cache_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_a9_Cache_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Object__count ti_sysbios_family_arm_a9_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Object__heap ti_sysbios_family_arm_a9_Cache_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Object__sizeof ti_sysbios_family_arm_a9_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_Object__table ti_sysbios_family_arm_a9_Cache_Object__table__C = NULL;

/* enableCache__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_enableCache ti_sysbios_family_arm_a9_Cache_enableCache__C = 1;

/* A_badBlockLength__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_A_badBlockLength ti_sysbios_family_arm_a9_Cache_A_badBlockLength__C = (((xdc_runtime_Assert_Id)3607) << 16 | 16);

/* A_blockCrossesPage__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_A_blockCrossesPage ti_sysbios_family_arm_a9_Cache_A_blockCrossesPage__C = (((xdc_runtime_Assert_Id)3673) << 16 | 16);

/* A_badInvCallWithL2En__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_A_badInvCallWithL2En ti_sysbios_family_arm_a9_Cache_A_badInvCallWithL2En__C = (((xdc_runtime_Assert_Id)3736) << 16 | 16);

/* A_noNonSecureInterruptAccess__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_A_noNonSecureInterruptAccess ti_sysbios_family_arm_a9_Cache_A_noNonSecureInterruptAccess__C = (((xdc_runtime_Assert_Id)3810) << 16 | 16);

/* A_noNonSecureLockdown__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_A_noNonSecureLockdown ti_sysbios_family_arm_a9_Cache_A_noNonSecureLockdown__C = (((xdc_runtime_Assert_Id)3886) << 16 | 16);

/* A_invalidL2CounterId__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_A_invalidL2CounterId ti_sysbios_family_arm_a9_Cache_A_invalidL2CounterId__C = (((xdc_runtime_Assert_Id)3945) << 16 | 16);

/* A_badL2CacheOperation__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_A_badL2CacheOperation ti_sysbios_family_arm_a9_Cache_A_badL2CacheOperation__C = (((xdc_runtime_Assert_Id)4009) << 16 | 16);

/* A_l1PrefetchApiNotSupported__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_A_l1PrefetchApiNotSupported ti_sysbios_family_arm_a9_Cache_A_l1PrefetchApiNotSupported__C = (((xdc_runtime_Assert_Id)4096) << 16 | 16);

/* unlockL2Cache__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_unlockL2Cache ti_sysbios_family_arm_a9_Cache_unlockL2Cache__C = 1;

/* branchPredictionEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_branchPredictionEnabled ti_sysbios_family_arm_a9_Cache_branchPredictionEnabled__C = 1;

/* configureL2Sram__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_configureL2Sram ti_sysbios_family_arm_a9_Cache_configureL2Sram__C = 0;

/* controlModuleReg__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_controlModuleReg ti_sysbios_family_arm_a9_Cache_controlModuleReg__C = ((const CT__ti_sysbios_family_arm_a9_Cache_controlModuleReg)(0x44e10000));

/* enableL2Interrupt__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_enableL2Interrupt ti_sysbios_family_arm_a9_Cache_enableL2Interrupt__C = 1;

/* l2DataPrefetchEnable__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2DataPrefetchEnable ti_sysbios_family_arm_a9_Cache_l2DataPrefetchEnable__C = 1;

/* l2InstructionPrefetchEnable__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2InstructionPrefetchEnable ti_sysbios_family_arm_a9_Cache_l2InstructionPrefetchEnable__C = 1;

/* l2PrefetchDropEnable__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2PrefetchDropEnable ti_sysbios_family_arm_a9_Cache_l2PrefetchDropEnable__C = 0;

/* l2DoubleLinefillEnable__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2DoubleLinefillEnable ti_sysbios_family_arm_a9_Cache_l2DoubleLinefillEnable__C = 1;

/* l2WrapDoubleLinefillEnable__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2WrapDoubleLinefillEnable ti_sysbios_family_arm_a9_Cache_l2WrapDoubleLinefillEnable__C = 0;

/* l2IncrDoubleLinefillEnable__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2IncrDoubleLinefillEnable ti_sysbios_family_arm_a9_Cache_l2IncrDoubleLinefillEnable__C = 0;

/* l2PrefetchOffset__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2PrefetchOffset ti_sysbios_family_arm_a9_Cache_l2PrefetchOffset__C = (xdc_UInt8)0x0U;

/* l2InterruptFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2InterruptFunc ti_sysbios_family_arm_a9_Cache_l2InterruptFunc__C = ((const CT__ti_sysbios_family_arm_a9_Cache_l2InterruptFunc)NULL);

/* l2InterruptMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_l2InterruptMask ti_sysbios_family_arm_a9_Cache_l2InterruptMask__C = (xdc_UInt32)0x1ffU;

/* isOMAP4__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Cache_isOMAP4 ti_sysbios_family_arm_a9_Cache_isOMAP4__C = 0;


/*
 * ======== ti.sysbios.family.arm.a9.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_a9_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_a9_Timer_Params ti_sysbios_family_arm_a9_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_a9_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_a9_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0U,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x0U,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_gic_Hwi_Params*)NULL),  /* hwiParams */
    (xdc_UInt8)0x0U,  /* prescale */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_a9_Timer_Module__ ti_sysbios_family_arm_a9_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_a9_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_a9_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_a9_Timer_Object__ ti_sysbios_family_arm_a9_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt32)0x3e8U,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x1dU,  /* intNum */
        (xdc_UInt8)0x0U,  /* prescale */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0U,  /* hi */
            (xdc_Bits32)0x0U,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Object__table__V[1],  /* hwi */
    },
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_a9_Timer_Module_State__ ti_sysbios_family_arm_a9_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_a9_Timer_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_a9_Timer_Module_State__ ti_sysbios_family_arm_a9_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_a9_Timer_Module__state__V")));
#endif
ti_sysbios_family_arm_a9_Timer_Module_State__ ti_sysbios_family_arm_a9_Timer_Module__state__V = {
    (xdc_UInt)0x0U,  /* availMask */
    (ti_sysbios_family_arm_a9_Timer_Handle)&ti_sysbios_family_arm_a9_Timer_Object__table__V[0],  /* handle */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__diagsEnabled ti_sysbios_family_arm_a9_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__diagsIncluded ti_sysbios_family_arm_a9_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__diagsMask ti_sysbios_family_arm_a9_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__gateObj ti_sysbios_family_arm_a9_Timer_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__gatePrms ti_sysbios_family_arm_a9_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__id ti_sysbios_family_arm_a9_Timer_Module__id__C = (xdc_Bits16)0x8034U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerDefined ti_sysbios_family_arm_a9_Timer_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerObj ti_sysbios_family_arm_a9_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn0 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn1 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn2 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn4 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn8 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_a9_Timer_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Object__count ti_sysbios_family_arm_a9_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Object__heap ti_sysbios_family_arm_a9_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Object__sizeof ti_sysbios_family_arm_a9_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_a9_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_Object__table ti_sysbios_family_arm_a9_Timer_Object__table__C = ti_sysbios_family_arm_a9_Timer_Object__table__V;

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_E_invalidTimer ti_sysbios_family_arm_a9_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)5488) << 16 | 0U);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_E_notAvailable ti_sysbios_family_arm_a9_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)5524) << 16 | 0U);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_E_cannotSupport ti_sysbios_family_arm_a9_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)5563) << 16 | 0U);

/* intNumDef__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_intNumDef ti_sysbios_family_arm_a9_Timer_intNumDef__C = (xdc_UInt)0x1dU;

/* anyMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_anyMask ti_sysbios_family_arm_a9_Timer_anyMask__C = (xdc_UInt)0x1U;

/* availMask__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_availMask ti_sysbios_family_arm_a9_Timer_availMask__C = (xdc_UInt)0x1U;

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_family_arm_a9_Timer_startupNeeded ti_sysbios_family_arm_a9_Timer_startupNeeded__C = 1;


/*
 * ======== ti.sysbios.family.arm.exc.Exception INITIALIZERS ========
 */

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excActive ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excContext ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_exc_Exception_ExcContext*)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStackBuffers ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A[1] = {
    ((xdc_Ptr)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A */
__T1_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A[65536];

/* --> ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A */
__T2_ti_sysbios_family_arm_exc_Exception_Module_State__excStack ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A[1] = {
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack_0__A),  /* [0] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_exc_Exception_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_exc_Exception_Module__state__V")));
#endif
ti_sysbios_family_arm_exc_Exception_Module_State__ ti_sysbios_family_arm_exc_Exception_Module__state__V = {
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStackBuffers__A),  /* excStackBuffers */
    ((void*)ti_sysbios_family_arm_exc_Exception_Module_State_0_excStack__A),  /* excStack */
    (xdc_SizeT)0x10000,  /* excStackSize */
};

/* --> ti_sysbios_family_arm_exc_Exception_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__A[1] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_exc_Exception_ExcContext* f_arg0))NULL),  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled ti_sysbios_family_arm_exc_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded ti_sysbios_family_arm_exc_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask ti_sysbios_family_arm_exc_Exception_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj ti_sysbios_family_arm_exc_Exception_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms ti_sysbios_family_arm_exc_Exception_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__id ti_sysbios_family_arm_exc_Exception_Module__id__C = (xdc_Bits16)0x802cU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerDefined ti_sysbios_family_arm_exc_Exception_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj ti_sysbios_family_arm_exc_Exception_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8 ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_exc_Exception_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__count ti_sysbios_family_arm_exc_Exception_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__heap ti_sysbios_family_arm_exc_Exception_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__sizeof ti_sysbios_family_arm_exc_Exception_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_Object__table ti_sysbios_family_arm_exc_Exception_Object__table__C = NULL;

/* E_swi__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_swi ti_sysbios_family_arm_exc_Exception_E_swi__C = (((xdc_runtime_Error_Id)5197) << 16 | 0U);

/* E_prefetchAbort__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_prefetchAbort ti_sysbios_family_arm_exc_Exception_E_prefetchAbort__C = (((xdc_runtime_Error_Id)5230) << 16 | 0U);

/* E_dataAbort__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_dataAbort ti_sysbios_family_arm_exc_Exception_E_dataAbort__C = (((xdc_runtime_Error_Id)5273) << 16 | 0U);

/* E_undefinedInstruction__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction ti_sysbios_family_arm_exc_Exception_E_undefinedInstruction__C = (((xdc_runtime_Error_Id)5312) << 16 | 0U);

/* enableDecode__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_enableDecode ti_sysbios_family_arm_exc_Exception_enableDecode__C = 1;

/* excHookFunc__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excHookFunc ti_sysbios_family_arm_exc_Exception_excHookFunc__C = ((const CT__ti_sysbios_family_arm_exc_Exception_excHookFunc)NULL);

/* excHookFuncs__C */
__FAR__ const CT__ti_sysbios_family_arm_exc_Exception_excHookFuncs ti_sysbios_family_arm_exc_Exception_excHookFuncs__C = ((const CT__ti_sysbios_family_arm_exc_Exception_excHookFuncs)ti_sysbios_family_arm_exc_Exception_excHookFuncs__A);


/*
 * ======== ti.sysbios.family.arm.gic.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_gic_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_arm_gic_Hwi_Params ti_sysbios_family_arm_gic_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_gic_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_gic_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    ti_sysbios_family_arm_gic_Hwi_Type_IRQ,  /* type */
    (xdc_UInt)(-0x0 - 1),  /* triggerSensitivity */
    (xdc_UInt)0x0U,  /* targetProcList */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_gic_Hwi_Module__ ti_sysbios_family_arm_gic_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_gic_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_gic_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_gic_Hwi_Object__ ti_sysbios_family_arm_gic_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ti_sysbios_family_arm_gic_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0xe0U,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_a9_Cache_l2InterruptHandler__I)),  /* fxn */
        ((xdc_UArg)NULL),  /* irp */
        ((void*)0),  /* hookEnv */
        (xdc_UInt)(-0x0 - 1),  /* triggerSensitivity */
        (xdc_UInt)0x1U,  /* targetProcList */
    },
    {/* instance#1 */
        0,
        ti_sysbios_family_arm_gic_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0xe0U,  /* priority */
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_a9_Timer_Handle)&ti_sysbios_family_arm_a9_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_a9_Timer_stub__E)),  /* fxn */
        ((xdc_UArg)NULL),  /* irp */
        ((void*)0),  /* hookEnv */
        (xdc_UInt)(-0x0 - 1),  /* triggerSensitivity */
        (xdc_UInt)0x1U,  /* targetProcList */
    },
};

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_taskSP__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__taskSP ti_sysbios_family_arm_gic_Hwi_Module_State_0_taskSP__A[1] = {
    ((xdc_Char*)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_isrStack__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__isrStack ti_sysbios_family_arm_gic_Hwi_Module_State_0_isrStack__A[1] = {
    ((xdc_Char*)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_hwiStack__A */
__T2_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack ti_sysbios_family_arm_gic_Hwi_Module_State_0_hwiStack__A[1] = {
    ((void*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_icfgr__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__icfgr ti_sysbios_family_arm_gic_Hwi_Module_State_0_icfgr__A[16] = {
    (xdc_UInt32)0xaaaaaaaaU,  /* [0] */
    (xdc_UInt32)0x7dc00000U,  /* [1] */
    (xdc_UInt32)0x55555555U,  /* [2] */
    (xdc_UInt32)0x55555555U,  /* [3] */
    (xdc_UInt32)0x55555555U,  /* [4] */
    (xdc_UInt32)0x55555555U,  /* [5] */
    (xdc_UInt32)0x55555555U,  /* [6] */
    (xdc_UInt32)0x55555555U,  /* [7] */
    (xdc_UInt32)0x55555555U,  /* [8] */
    (xdc_UInt32)0x55555555U,  /* [9] */
    (xdc_UInt32)0x55555555U,  /* [10] */
    (xdc_UInt32)0x55555555U,  /* [11] */
    (xdc_UInt32)0x55555555U,  /* [12] */
    (xdc_UInt32)0x55555555U,  /* [13] */
    (xdc_UInt32)0x55555555U,  /* [14] */
    (xdc_UInt32)0x55555555U,  /* [15] */
};

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_itargetsr__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__itargetsr ti_sysbios_family_arm_gic_Hwi_Module_State_0_itargetsr__A[64] = {
    (xdc_UInt32)0x1010101U,  /* [0] */
    (xdc_UInt32)0x1010101U,  /* [1] */
    (xdc_UInt32)0x1010101U,  /* [2] */
    (xdc_UInt32)0x1010101U,  /* [3] */
    (xdc_UInt32)0x1010101U,  /* [4] */
    (xdc_UInt32)0x1010101U,  /* [5] */
    (xdc_UInt32)0x1010101U,  /* [6] */
    (xdc_UInt32)0x1010101U,  /* [7] */
    (xdc_UInt32)0x1010101U,  /* [8] */
    (xdc_UInt32)0x1010101U,  /* [9] */
    (xdc_UInt32)0x1010101U,  /* [10] */
    (xdc_UInt32)0x1010101U,  /* [11] */
    (xdc_UInt32)0x1010101U,  /* [12] */
    (xdc_UInt32)0x1010101U,  /* [13] */
    (xdc_UInt32)0x1010101U,  /* [14] */
    (xdc_UInt32)0x1010101U,  /* [15] */
    (xdc_UInt32)0x1010101U,  /* [16] */
    (xdc_UInt32)0x1010101U,  /* [17] */
    (xdc_UInt32)0x1010101U,  /* [18] */
    (xdc_UInt32)0x1010101U,  /* [19] */
    (xdc_UInt32)0x1010101U,  /* [20] */
    (xdc_UInt32)0x1010101U,  /* [21] */
    (xdc_UInt32)0x1010101U,  /* [22] */
    (xdc_UInt32)0x1010101U,  /* [23] */
    (xdc_UInt32)0x1010101U,  /* [24] */
    (xdc_UInt32)0x1010101U,  /* [25] */
    (xdc_UInt32)0x1010101U,  /* [26] */
    (xdc_UInt32)0x1010101U,  /* [27] */
    (xdc_UInt32)0x1010101U,  /* [28] */
    (xdc_UInt32)0x1010101U,  /* [29] */
    (xdc_UInt32)0x1010101U,  /* [30] */
    (xdc_UInt32)0x1010101U,  /* [31] */
    (xdc_UInt32)0x1010101U,  /* [32] */
    (xdc_UInt32)0x1010101U,  /* [33] */
    (xdc_UInt32)0x1010101U,  /* [34] */
    (xdc_UInt32)0x1010101U,  /* [35] */
    (xdc_UInt32)0x1010101U,  /* [36] */
    (xdc_UInt32)0x1010101U,  /* [37] */
    (xdc_UInt32)0x1010101U,  /* [38] */
    (xdc_UInt32)0x1010101U,  /* [39] */
    (xdc_UInt32)0x1010101U,  /* [40] */
    (xdc_UInt32)0x1010101U,  /* [41] */
    (xdc_UInt32)0x1010101U,  /* [42] */
    (xdc_UInt32)0x1010101U,  /* [43] */
    (xdc_UInt32)0x1010101U,  /* [44] */
    (xdc_UInt32)0x1010101U,  /* [45] */
    (xdc_UInt32)0x1010101U,  /* [46] */
    (xdc_UInt32)0x1010101U,  /* [47] */
    (xdc_UInt32)0x1010101U,  /* [48] */
    (xdc_UInt32)0x1010101U,  /* [49] */
    (xdc_UInt32)0x1010101U,  /* [50] */
    (xdc_UInt32)0x1010101U,  /* [51] */
    (xdc_UInt32)0x1010101U,  /* [52] */
    (xdc_UInt32)0x1010101U,  /* [53] */
    (xdc_UInt32)0x1010101U,  /* [54] */
    (xdc_UInt32)0x1010101U,  /* [55] */
    (xdc_UInt32)0x1010101U,  /* [56] */
    (xdc_UInt32)0x1010101U,  /* [57] */
    (xdc_UInt32)0x1010101U,  /* [58] */
    (xdc_UInt32)0x1010101U,  /* [59] */
    (xdc_UInt32)0x1010101U,  /* [60] */
    (xdc_UInt32)0x1010101U,  /* [61] */
    (xdc_UInt32)0x1010101U,  /* [62] */
    (xdc_UInt32)0x1010101U,  /* [63] */
};

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A[256] = {
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [0] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [1] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [2] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [3] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [4] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [5] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [6] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [7] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [8] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [9] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [10] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [11] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [12] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [13] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [14] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [15] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [16] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [17] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [18] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [19] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [20] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [21] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [22] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [23] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [24] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [25] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [26] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [27] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [28] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Object__table__V[1],  /* [29] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [30] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [31] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Object__table__V[0],  /* [32] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [33] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [34] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [35] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [36] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [37] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [38] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [39] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [40] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [41] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [42] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [43] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [44] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [45] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [46] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [47] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [48] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [49] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [50] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [51] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [52] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [53] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [54] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [55] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [56] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [57] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [58] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [59] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [60] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [61] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [62] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [63] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [64] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [65] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [66] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [67] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [68] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [69] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [70] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [71] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [72] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [73] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [74] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [75] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [76] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [77] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [78] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [79] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [80] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [81] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [82] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [83] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [84] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [85] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [86] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [87] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [88] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [89] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [90] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [91] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [92] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [93] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [94] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [95] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [96] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [97] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [98] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [99] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [100] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [101] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [102] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [103] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [104] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [105] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [106] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [107] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [108] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [109] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [110] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [111] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [112] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [113] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [114] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [115] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [116] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [117] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [118] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [119] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [120] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [121] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [122] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [123] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [124] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [125] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [126] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [127] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [128] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [129] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [130] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [131] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [132] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [133] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [134] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [135] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [136] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [137] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [138] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [139] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [140] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [141] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [142] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [143] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [144] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [145] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [146] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [147] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [148] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [149] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [150] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [151] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [152] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [153] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [154] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [155] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [156] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [157] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [158] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [159] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [160] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [161] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [162] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [163] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [164] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [165] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [166] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [167] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [168] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [169] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [170] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [171] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [172] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [173] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [174] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [175] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [176] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [177] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [178] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [179] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [180] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [181] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [182] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [183] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [184] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [185] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [186] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [187] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [188] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [189] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [190] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [191] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [192] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [193] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [194] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [195] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [196] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [197] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [198] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [199] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [200] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [201] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [202] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [203] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [204] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [205] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [206] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [207] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [208] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [209] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [210] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [211] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [212] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [213] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [214] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [215] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [216] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [217] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [218] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [219] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [220] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [221] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [222] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [223] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [224] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [225] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [226] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [227] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [228] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [229] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [230] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [231] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [232] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [233] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [234] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [235] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [236] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [237] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [238] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [239] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [240] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [241] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [242] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [243] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [244] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [245] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [246] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [247] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [248] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [249] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [250] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [251] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [252] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [253] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [254] */
    (ti_sysbios_family_arm_gic_Hwi_Handle)&ti_sysbios_family_arm_gic_Hwi_Module__state__V.Object_field_nonPluggedHwi,  /* [255] */
};

/* --> ti_sysbios_family_arm_gic_Hwi_Module_State_0_intAffinity__A */
__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__intAffinity ti_sysbios_family_arm_gic_Hwi_Module_State_0_intAffinity__A[256] = {
    (xdc_UInt8)0x0U,  /* [0] */
    (xdc_UInt8)0x0U,  /* [1] */
    (xdc_UInt8)0x0U,  /* [2] */
    (xdc_UInt8)0x0U,  /* [3] */
    (xdc_UInt8)0x0U,  /* [4] */
    (xdc_UInt8)0x0U,  /* [5] */
    (xdc_UInt8)0x0U,  /* [6] */
    (xdc_UInt8)0x0U,  /* [7] */
    (xdc_UInt8)0x0U,  /* [8] */
    (xdc_UInt8)0x0U,  /* [9] */
    (xdc_UInt8)0x0U,  /* [10] */
    (xdc_UInt8)0x0U,  /* [11] */
    (xdc_UInt8)0x0U,  /* [12] */
    (xdc_UInt8)0x0U,  /* [13] */
    (xdc_UInt8)0x0U,  /* [14] */
    (xdc_UInt8)0x0U,  /* [15] */
    (xdc_UInt8)0x0U,  /* [16] */
    (xdc_UInt8)0x0U,  /* [17] */
    (xdc_UInt8)0x0U,  /* [18] */
    (xdc_UInt8)0x0U,  /* [19] */
    (xdc_UInt8)0x0U,  /* [20] */
    (xdc_UInt8)0x0U,  /* [21] */
    (xdc_UInt8)0x0U,  /* [22] */
    (xdc_UInt8)0x0U,  /* [23] */
    (xdc_UInt8)0x0U,  /* [24] */
    (xdc_UInt8)0x0U,  /* [25] */
    (xdc_UInt8)0x0U,  /* [26] */
    (xdc_UInt8)0x0U,  /* [27] */
    (xdc_UInt8)0x0U,  /* [28] */
    (xdc_UInt8)0x0U,  /* [29] */
    (xdc_UInt8)0x0U,  /* [30] */
    (xdc_UInt8)0x0U,  /* [31] */
    (xdc_UInt8)0x0U,  /* [32] */
    (xdc_UInt8)0x0U,  /* [33] */
    (xdc_UInt8)0x0U,  /* [34] */
    (xdc_UInt8)0x0U,  /* [35] */
    (xdc_UInt8)0x0U,  /* [36] */
    (xdc_UInt8)0x0U,  /* [37] */
    (xdc_UInt8)0x0U,  /* [38] */
    (xdc_UInt8)0x0U,  /* [39] */
    (xdc_UInt8)0x0U,  /* [40] */
    (xdc_UInt8)0x0U,  /* [41] */
    (xdc_UInt8)0x0U,  /* [42] */
    (xdc_UInt8)0x0U,  /* [43] */
    (xdc_UInt8)0x0U,  /* [44] */
    (xdc_UInt8)0x0U,  /* [45] */
    (xdc_UInt8)0x0U,  /* [46] */
    (xdc_UInt8)0x0U,  /* [47] */
    (xdc_UInt8)0x0U,  /* [48] */
    (xdc_UInt8)0x0U,  /* [49] */
    (xdc_UInt8)0x0U,  /* [50] */
    (xdc_UInt8)0x0U,  /* [51] */
    (xdc_UInt8)0x0U,  /* [52] */
    (xdc_UInt8)0x0U,  /* [53] */
    (xdc_UInt8)0x0U,  /* [54] */
    (xdc_UInt8)0x0U,  /* [55] */
    (xdc_UInt8)0x0U,  /* [56] */
    (xdc_UInt8)0x0U,  /* [57] */
    (xdc_UInt8)0x0U,  /* [58] */
    (xdc_UInt8)0x0U,  /* [59] */
    (xdc_UInt8)0x0U,  /* [60] */
    (xdc_UInt8)0x0U,  /* [61] */
    (xdc_UInt8)0x0U,  /* [62] */
    (xdc_UInt8)0x0U,  /* [63] */
    (xdc_UInt8)0x0U,  /* [64] */
    (xdc_UInt8)0x0U,  /* [65] */
    (xdc_UInt8)0x0U,  /* [66] */
    (xdc_UInt8)0x0U,  /* [67] */
    (xdc_UInt8)0x0U,  /* [68] */
    (xdc_UInt8)0x0U,  /* [69] */
    (xdc_UInt8)0x0U,  /* [70] */
    (xdc_UInt8)0x0U,  /* [71] */
    (xdc_UInt8)0x0U,  /* [72] */
    (xdc_UInt8)0x0U,  /* [73] */
    (xdc_UInt8)0x0U,  /* [74] */
    (xdc_UInt8)0x0U,  /* [75] */
    (xdc_UInt8)0x0U,  /* [76] */
    (xdc_UInt8)0x0U,  /* [77] */
    (xdc_UInt8)0x0U,  /* [78] */
    (xdc_UInt8)0x0U,  /* [79] */
    (xdc_UInt8)0x0U,  /* [80] */
    (xdc_UInt8)0x0U,  /* [81] */
    (xdc_UInt8)0x0U,  /* [82] */
    (xdc_UInt8)0x0U,  /* [83] */
    (xdc_UInt8)0x0U,  /* [84] */
    (xdc_UInt8)0x0U,  /* [85] */
    (xdc_UInt8)0x0U,  /* [86] */
    (xdc_UInt8)0x0U,  /* [87] */
    (xdc_UInt8)0x0U,  /* [88] */
    (xdc_UInt8)0x0U,  /* [89] */
    (xdc_UInt8)0x0U,  /* [90] */
    (xdc_UInt8)0x0U,  /* [91] */
    (xdc_UInt8)0x0U,  /* [92] */
    (xdc_UInt8)0x0U,  /* [93] */
    (xdc_UInt8)0x0U,  /* [94] */
    (xdc_UInt8)0x0U,  /* [95] */
    (xdc_UInt8)0x0U,  /* [96] */
    (xdc_UInt8)0x0U,  /* [97] */
    (xdc_UInt8)0x0U,  /* [98] */
    (xdc_UInt8)0x0U,  /* [99] */
    (xdc_UInt8)0x0U,  /* [100] */
    (xdc_UInt8)0x0U,  /* [101] */
    (xdc_UInt8)0x0U,  /* [102] */
    (xdc_UInt8)0x0U,  /* [103] */
    (xdc_UInt8)0x0U,  /* [104] */
    (xdc_UInt8)0x0U,  /* [105] */
    (xdc_UInt8)0x0U,  /* [106] */
    (xdc_UInt8)0x0U,  /* [107] */
    (xdc_UInt8)0x0U,  /* [108] */
    (xdc_UInt8)0x0U,  /* [109] */
    (xdc_UInt8)0x0U,  /* [110] */
    (xdc_UInt8)0x0U,  /* [111] */
    (xdc_UInt8)0x0U,  /* [112] */
    (xdc_UInt8)0x0U,  /* [113] */
    (xdc_UInt8)0x0U,  /* [114] */
    (xdc_UInt8)0x0U,  /* [115] */
    (xdc_UInt8)0x0U,  /* [116] */
    (xdc_UInt8)0x0U,  /* [117] */
    (xdc_UInt8)0x0U,  /* [118] */
    (xdc_UInt8)0x0U,  /* [119] */
    (xdc_UInt8)0x0U,  /* [120] */
    (xdc_UInt8)0x0U,  /* [121] */
    (xdc_UInt8)0x0U,  /* [122] */
    (xdc_UInt8)0x0U,  /* [123] */
    (xdc_UInt8)0x0U,  /* [124] */
    (xdc_UInt8)0x0U,  /* [125] */
    (xdc_UInt8)0x0U,  /* [126] */
    (xdc_UInt8)0x0U,  /* [127] */
    (xdc_UInt8)0x0U,  /* [128] */
    (xdc_UInt8)0x0U,  /* [129] */
    (xdc_UInt8)0x0U,  /* [130] */
    (xdc_UInt8)0x0U,  /* [131] */
    (xdc_UInt8)0x0U,  /* [132] */
    (xdc_UInt8)0x0U,  /* [133] */
    (xdc_UInt8)0x0U,  /* [134] */
    (xdc_UInt8)0x0U,  /* [135] */
    (xdc_UInt8)0x0U,  /* [136] */
    (xdc_UInt8)0x0U,  /* [137] */
    (xdc_UInt8)0x0U,  /* [138] */
    (xdc_UInt8)0x0U,  /* [139] */
    (xdc_UInt8)0x0U,  /* [140] */
    (xdc_UInt8)0x0U,  /* [141] */
    (xdc_UInt8)0x0U,  /* [142] */
    (xdc_UInt8)0x0U,  /* [143] */
    (xdc_UInt8)0x0U,  /* [144] */
    (xdc_UInt8)0x0U,  /* [145] */
    (xdc_UInt8)0x0U,  /* [146] */
    (xdc_UInt8)0x0U,  /* [147] */
    (xdc_UInt8)0x0U,  /* [148] */
    (xdc_UInt8)0x0U,  /* [149] */
    (xdc_UInt8)0x0U,  /* [150] */
    (xdc_UInt8)0x0U,  /* [151] */
    (xdc_UInt8)0x0U,  /* [152] */
    (xdc_UInt8)0x0U,  /* [153] */
    (xdc_UInt8)0x0U,  /* [154] */
    (xdc_UInt8)0x0U,  /* [155] */
    (xdc_UInt8)0x0U,  /* [156] */
    (xdc_UInt8)0x0U,  /* [157] */
    (xdc_UInt8)0x0U,  /* [158] */
    (xdc_UInt8)0x0U,  /* [159] */
    (xdc_UInt8)0x0U,  /* [160] */
    (xdc_UInt8)0x0U,  /* [161] */
    (xdc_UInt8)0x0U,  /* [162] */
    (xdc_UInt8)0x0U,  /* [163] */
    (xdc_UInt8)0x0U,  /* [164] */
    (xdc_UInt8)0x0U,  /* [165] */
    (xdc_UInt8)0x0U,  /* [166] */
    (xdc_UInt8)0x0U,  /* [167] */
    (xdc_UInt8)0x0U,  /* [168] */
    (xdc_UInt8)0x0U,  /* [169] */
    (xdc_UInt8)0x0U,  /* [170] */
    (xdc_UInt8)0x0U,  /* [171] */
    (xdc_UInt8)0x0U,  /* [172] */
    (xdc_UInt8)0x0U,  /* [173] */
    (xdc_UInt8)0x0U,  /* [174] */
    (xdc_UInt8)0x0U,  /* [175] */
    (xdc_UInt8)0x0U,  /* [176] */
    (xdc_UInt8)0x0U,  /* [177] */
    (xdc_UInt8)0x0U,  /* [178] */
    (xdc_UInt8)0x0U,  /* [179] */
    (xdc_UInt8)0x0U,  /* [180] */
    (xdc_UInt8)0x0U,  /* [181] */
    (xdc_UInt8)0x0U,  /* [182] */
    (xdc_UInt8)0x0U,  /* [183] */
    (xdc_UInt8)0x0U,  /* [184] */
    (xdc_UInt8)0x0U,  /* [185] */
    (xdc_UInt8)0x0U,  /* [186] */
    (xdc_UInt8)0x0U,  /* [187] */
    (xdc_UInt8)0x0U,  /* [188] */
    (xdc_UInt8)0x0U,  /* [189] */
    (xdc_UInt8)0x0U,  /* [190] */
    (xdc_UInt8)0x0U,  /* [191] */
    (xdc_UInt8)0x0U,  /* [192] */
    (xdc_UInt8)0x0U,  /* [193] */
    (xdc_UInt8)0x0U,  /* [194] */
    (xdc_UInt8)0x0U,  /* [195] */
    (xdc_UInt8)0x0U,  /* [196] */
    (xdc_UInt8)0x0U,  /* [197] */
    (xdc_UInt8)0x0U,  /* [198] */
    (xdc_UInt8)0x0U,  /* [199] */
    (xdc_UInt8)0x0U,  /* [200] */
    (xdc_UInt8)0x0U,  /* [201] */
    (xdc_UInt8)0x0U,  /* [202] */
    (xdc_UInt8)0x0U,  /* [203] */
    (xdc_UInt8)0x0U,  /* [204] */
    (xdc_UInt8)0x0U,  /* [205] */
    (xdc_UInt8)0x0U,  /* [206] */
    (xdc_UInt8)0x0U,  /* [207] */
    (xdc_UInt8)0x0U,  /* [208] */
    (xdc_UInt8)0x0U,  /* [209] */
    (xdc_UInt8)0x0U,  /* [210] */
    (xdc_UInt8)0x0U,  /* [211] */
    (xdc_UInt8)0x0U,  /* [212] */
    (xdc_UInt8)0x0U,  /* [213] */
    (xdc_UInt8)0x0U,  /* [214] */
    (xdc_UInt8)0x0U,  /* [215] */
    (xdc_UInt8)0x0U,  /* [216] */
    (xdc_UInt8)0x0U,  /* [217] */
    (xdc_UInt8)0x0U,  /* [218] */
    (xdc_UInt8)0x0U,  /* [219] */
    (xdc_UInt8)0x0U,  /* [220] */
    (xdc_UInt8)0x0U,  /* [221] */
    (xdc_UInt8)0x0U,  /* [222] */
    (xdc_UInt8)0x0U,  /* [223] */
    (xdc_UInt8)0x0U,  /* [224] */
    (xdc_UInt8)0x0U,  /* [225] */
    (xdc_UInt8)0x0U,  /* [226] */
    (xdc_UInt8)0x0U,  /* [227] */
    (xdc_UInt8)0x0U,  /* [228] */
    (xdc_UInt8)0x0U,  /* [229] */
    (xdc_UInt8)0x0U,  /* [230] */
    (xdc_UInt8)0x0U,  /* [231] */
    (xdc_UInt8)0x0U,  /* [232] */
    (xdc_UInt8)0x0U,  /* [233] */
    (xdc_UInt8)0x0U,  /* [234] */
    (xdc_UInt8)0x0U,  /* [235] */
    (xdc_UInt8)0x0U,  /* [236] */
    (xdc_UInt8)0x0U,  /* [237] */
    (xdc_UInt8)0x0U,  /* [238] */
    (xdc_UInt8)0x0U,  /* [239] */
    (xdc_UInt8)0x0U,  /* [240] */
    (xdc_UInt8)0x0U,  /* [241] */
    (xdc_UInt8)0x0U,  /* [242] */
    (xdc_UInt8)0x0U,  /* [243] */
    (xdc_UInt8)0x0U,  /* [244] */
    (xdc_UInt8)0x0U,  /* [245] */
    (xdc_UInt8)0x0U,  /* [246] */
    (xdc_UInt8)0x0U,  /* [247] */
    (xdc_UInt8)0x0U,  /* [248] */
    (xdc_UInt8)0x0U,  /* [249] */
    (xdc_UInt8)0x0U,  /* [250] */
    (xdc_UInt8)0x0U,  /* [251] */
    (xdc_UInt8)0x0U,  /* [252] */
    (xdc_UInt8)0x0U,  /* [253] */
    (xdc_UInt8)0x0U,  /* [254] */
    (xdc_UInt8)0x0U,  /* [255] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_gic_Hwi_Module_State__ ti_sysbios_family_arm_gic_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_gic_Hwi_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_gic_Hwi_Module_State__ ti_sysbios_family_arm_gic_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_gic_Hwi_Module__state__V")));
#endif
ti_sysbios_family_arm_gic_Hwi_Module_State__ ti_sysbios_family_arm_gic_Hwi_Module__state__V = {
    ((void*)ti_sysbios_family_arm_gic_Hwi_Module_State_0_taskSP__A),  /* taskSP */
    ((void*)ti_sysbios_family_arm_gic_Hwi_Module_State_0_isrStack__A),  /* isrStack */
    ((void*)ti_sysbios_family_arm_gic_Hwi_Module_State_0_hwiStack__A),  /* hwiStack */
    ((xdc_Ptr)(0x10000)),  /* isrStackSize */
    {
        (xdc_UInt32)0x20010000U,  /* [0] */
        (xdc_UInt32)0x1U,  /* [1] */
        (xdc_UInt32)0x0U,  /* [2] */
        (xdc_UInt32)0x0U,  /* [3] */
        (xdc_UInt32)0x0U,  /* [4] */
        (xdc_UInt32)0x0U,  /* [5] */
        (xdc_UInt32)0x0U,  /* [6] */
        (xdc_UInt32)0x0U,  /* [7] */
        (xdc_UInt32)0x0U,  /* [8] */
        (xdc_UInt32)0x0U,  /* [9] */
        (xdc_UInt32)0x0U,  /* [10] */
        (xdc_UInt32)0x0U,  /* [11] */
        (xdc_UInt32)0x0U,  /* [12] */
        (xdc_UInt32)0x0U,  /* [13] */
        (xdc_UInt32)0x0U,  /* [14] */
        (xdc_UInt32)0x0U,  /* [15] */
        (xdc_UInt32)0x0U,  /* [16] */
        (xdc_UInt32)0x0U,  /* [17] */
        (xdc_UInt32)0x0U,  /* [18] */
        (xdc_UInt32)0x0U,  /* [19] */
        (xdc_UInt32)0x0U,  /* [20] */
        (xdc_UInt32)0x0U,  /* [21] */
        (xdc_UInt32)0x0U,  /* [22] */
        (xdc_UInt32)0x0U,  /* [23] */
        (xdc_UInt32)0x0U,  /* [24] */
        (xdc_UInt32)0x0U,  /* [25] */
        (xdc_UInt32)0x0U,  /* [26] */
        (xdc_UInt32)0x0U,  /* [27] */
        (xdc_UInt32)0x0U,  /* [28] */
        (xdc_UInt32)0x0U,  /* [29] */
        (xdc_UInt32)0x0U,  /* [30] */
        (xdc_UInt32)0x0U,  /* [31] */
    },  /* iser */
    ((void*)ti_sysbios_family_arm_gic_Hwi_Module_State_0_icfgr__A),  /* icfgr */
    ((void*)ti_sysbios_family_arm_gic_Hwi_Module_State_0_itargetsr__A),  /* itargetsr */
    (xdc_UInt)0x0U,  /* spuriousInts */
    (xdc_UInt)0x0U,  /* lastSpuriousInt */
    (xdc_UInt)0x0U,  /* irp */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((void*)ti_sysbios_family_arm_gic_Hwi_Module_State_0_dispatchTable__A),  /* dispatchTable */
    (xdc_UInt)(-0x0 - 1),  /* curIntId */
    ((void*)0),  /* igroupr */
    ((void*)0),  /* fiqStack */
    (xdc_SizeT)0x0,  /* fiqStackSize */
    ((void*)ti_sysbios_family_arm_gic_Hwi_Module_State_0_intAffinity__A),  /* intAffinity */
    {
        0,
        ti_sysbios_family_arm_gic_Hwi_Type_IRQ,  /* type */
        (xdc_UInt)0xe0U,  /* priority */
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_gic_Hwi_nonPluggedHwiHandler__I)),  /* fxn */
        ((xdc_UArg)NULL),  /* irp */
        ((void*)0),  /* hookEnv */
        (xdc_UInt)(-0x0 - 1),  /* triggerSensitivity */
        (xdc_UInt)0x1U,  /* targetProcList */
    },  /* Object_field_nonPluggedHwi */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsMask ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__gateObj ti_sysbios_family_arm_gic_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__gatePrms ti_sysbios_family_arm_gic_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__id ti_sysbios_family_arm_gic_Hwi_Module__id__C = (xdc_Bits16)0x802aU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerObj ti_sysbios_family_arm_gic_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__count ti_sysbios_family_arm_gic_Hwi_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__heap ti_sysbios_family_arm_gic_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__sizeof ti_sysbios_family_arm_gic_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_gic_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__table ti_sysbios_family_arm_gic_Hwi_Object__table__C = ti_sysbios_family_arm_gic_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* enableSecureMode__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_enableSecureMode ti_sysbios_family_arm_gic_Hwi_enableSecureMode__C = 0;

/* NUM_INTERRUPTS__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS__C = (xdc_UInt)0x100U;

/* NUM_PRIORITY_BITS__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS__C = (xdc_UInt)0x4U;

/* MIN_INT_PRIORITY__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY__C = (xdc_UInt)0xf0U;

/* DEFAULT_INT_PRIORITY__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY__C = (xdc_UInt)0xe0U;

/* BPR__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_BPR ti_sysbios_family_arm_gic_Hwi_BPR__C = (xdc_UInt)0x3U;

/* ABPR__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_ABPR ti_sysbios_family_arm_gic_Hwi_ABPR__C = (xdc_UInt)0x4U;

/* enableAsidTagging__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_enableAsidTagging ti_sysbios_family_arm_gic_Hwi_enableAsidTagging__C = 0;

/* initGicd__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_initGicd ti_sysbios_family_arm_gic_Hwi_initGicd__C = 1;

/* A_badSGIIntNum__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_A_badSGIIntNum ti_sysbios_family_arm_gic_Hwi_A_badSGIIntNum__C = (((xdc_runtime_Assert_Id)2554) << 16 | 16);

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)5023) << 16 | 0U);

/* E_handleNotFound__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_handleNotFound ti_sysbios_family_arm_gic_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)5073) << 16 | 0U);

/* E_undefined__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_undefined ti_sysbios_family_arm_gic_Hwi_E_undefined__C = (((xdc_runtime_Error_Id)5118) << 16 | 0U);

/* E_badIntNum__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_badIntNum ti_sysbios_family_arm_gic_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)5157) << 16 | 0U);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_LM_begin ti_sysbios_family_arm_gic_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)6742) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_LD_end ti_sysbios_family_arm_gic_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6812) << 16 | 512);

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_swiDisable ti_sysbios_family_arm_gic_Hwi_swiDisable__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_swiDisable)(ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi)(ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_taskDisable ti_sysbios_family_arm_gic_Hwi_taskDisable__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi__C = ((const CT__ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi)(ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_hooks ti_sysbios_family_arm_gic_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateHwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8026U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1U,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1U,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutex_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8028U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2355) << 16 | 16);


/*
 * ======== ti.sysbios.gates.GateMutexPri INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutexPri_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutexPri_Params ti_sysbios_gates_GateMutexPri_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutexPri_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutexPri_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutexPri_Module__ ti_sysbios_gates_GateMutexPri_Module__root__V = {
    {&ti_sysbios_gates_GateMutexPri_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutexPri_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutexPri_Object__ ti_sysbios_gates_GateMutexPri_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutexPri_Module__FXNS__C,
        (xdc_UInt)0x1U,  /* mutexCnt */
        (xdc_Int)0x0,  /* ownerOrigPri */
        0,  /* owner */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutexPri_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutexPri_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__diagsEnabled ti_sysbios_gates_GateMutexPri_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__diagsIncluded ti_sysbios_gates_GateMutexPri_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__diagsMask ti_sysbios_gates_GateMutexPri_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__gateObj ti_sysbios_gates_GateMutexPri_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__gatePrms ti_sysbios_gates_GateMutexPri_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__id ti_sysbios_gates_GateMutexPri_Module__id__C = (xdc_Bits16)0x8027U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerDefined ti_sysbios_gates_GateMutexPri_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerObj ti_sysbios_gates_GateMutexPri_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn0 ti_sysbios_gates_GateMutexPri_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn1 ti_sysbios_gates_GateMutexPri_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn2 ti_sysbios_gates_GateMutexPri_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn4 ti_sysbios_gates_GateMutexPri_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn8 ti_sysbios_gates_GateMutexPri_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Object__count ti_sysbios_gates_GateMutexPri_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Object__heap ti_sysbios_gates_GateMutexPri_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Object__sizeof ti_sysbios_gates_GateMutexPri_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutexPri_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_Object__table ti_sysbios_gates_GateMutexPri_Object__table__C = ti_sysbios_gates_GateMutexPri_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_A_badContext ti_sysbios_gates_GateMutexPri_A_badContext__C = (((xdc_runtime_Assert_Id)2183) << 16 | 16);

/* A_enterTaskDisabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutexPri_A_enterTaskDisabled ti_sysbios_gates_GateMutexPri_A_enterTaskDisabled__C = (((xdc_runtime_Assert_Id)2256) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsEnabled ti_sysbios_hal_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsIncluded ti_sysbios_hal_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__diagsMask ti_sysbios_hal_Cache_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Cache_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gateObj ti_sysbios_hal_Cache_Module__gateObj__C = ((const CT__ti_sysbios_hal_Cache_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__gatePrms ti_sysbios_hal_Cache_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Cache_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__id ti_sysbios_hal_Cache_Module__id__C = (xdc_Bits16)0x8021U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerDefined ti_sysbios_hal_Cache_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerObj ti_sysbios_hal_Cache_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Cache_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn0 ti_sysbios_hal_Cache_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Cache_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn1 ti_sysbios_hal_Cache_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Cache_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn2 ti_sysbios_hal_Cache_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Cache_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn4 ti_sysbios_hal_Cache_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Cache_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Module__loggerFxn8 ti_sysbios_hal_Cache_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Cache_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__count ti_sysbios_hal_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__heap ti_sysbios_hal_Cache_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__sizeof ti_sysbios_hal_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Cache_Object__table ti_sysbios_hal_Cache_Object__table__C = NULL;

/* enableCache__C */
__FAR__ const CT__ti_sysbios_hal_Cache_enableCache ti_sysbios_hal_Cache_enableCache__C = 1;


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsEnabled ti_sysbios_hal_Core_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsIncluded ti_sysbios_hal_Core_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__diagsMask ti_sysbios_hal_Core_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__gateObj ti_sysbios_hal_Core_Module__gateObj__C = ((const CT__ti_sysbios_hal_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__gatePrms ti_sysbios_hal_Core_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Core_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__id ti_sysbios_hal_Core_Module__id__C = (xdc_Bits16)0x8022U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerDefined ti_sysbios_hal_Core_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerObj ti_sysbios_hal_Core_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Core_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn0 ti_sysbios_hal_Core_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn1 ti_sysbios_hal_Core_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn2 ti_sysbios_hal_Core_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn4 ti_sysbios_hal_Core_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Core_Module__loggerFxn8 ti_sysbios_hal_Core_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Core_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Core_Object__count ti_sysbios_hal_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Core_Object__heap ti_sysbios_hal_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Core_Object__sizeof ti_sysbios_hal_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Core_Object__table ti_sysbios_hal_Core_Object__table__C = NULL;

/* numCores__C */
__FAR__ const CT__ti_sysbios_hal_Core_numCores ti_sysbios_hal_Core_numCores__C = (xdc_UInt)0x1U;


/*
 * ======== ti.sysbios.hal.CoreNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsEnabled ti_sysbios_hal_CoreNull_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsIncluded ti_sysbios_hal_CoreNull_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__diagsMask ti_sysbios_hal_CoreNull_Module__diagsMask__C = ((const CT__ti_sysbios_hal_CoreNull_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__gateObj ti_sysbios_hal_CoreNull_Module__gateObj__C = ((const CT__ti_sysbios_hal_CoreNull_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__gatePrms ti_sysbios_hal_CoreNull_Module__gatePrms__C = ((const CT__ti_sysbios_hal_CoreNull_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__id ti_sysbios_hal_CoreNull_Module__id__C = (xdc_Bits16)0x8023U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerDefined ti_sysbios_hal_CoreNull_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerObj ti_sysbios_hal_CoreNull_Module__loggerObj__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn0 ti_sysbios_hal_CoreNull_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn1 ti_sysbios_hal_CoreNull_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn2 ti_sysbios_hal_CoreNull_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn4 ti_sysbios_hal_CoreNull_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn8 ti_sysbios_hal_CoreNull_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_CoreNull_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__count ti_sysbios_hal_CoreNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__heap ti_sysbios_hal_CoreNull_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__sizeof ti_sysbios_hal_CoreNull_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_Object__table ti_sysbios_hal_CoreNull_Object__table__C = NULL;

/* numCores__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_numCores ti_sysbios_hal_CoreNull_numCores__C = (xdc_UInt)0x1U;

/* id__C */
__FAR__ const CT__ti_sysbios_hal_CoreNull_id ti_sysbios_hal_CoreNull_id__C = (xdc_UInt)0x0U;


/*
 * ======== ti.sysbios.hal.Core_CoreProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8024U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = NULL;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4986) << 16 | 0U);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[134217728];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)NULL),  /* next */
            ((xdc_UArg)(0x8000000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8031U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3264) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3300) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3345) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)5452) << 16 | 0U);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3236) << 16 | 16);

/* primaryHeapBaseAddr__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)NULL);

/* primaryHeapEndAddr__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)NULL);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0U,  /* period */
    ((xdc_UArg)NULL),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0xfbaU,  /* timeout */
        (xdc_UInt32)0xfbaU,  /* currTimeout */
        (xdc_UInt32)4026.53184,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_a15_TimestampProvider_autoRefreshFxn__I)),  /* fxn */
        ((xdc_UArg)NULL),  /* arg */
    },
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0U,  /* ticks */
    (xdc_UInt)0x0U,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_a9_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1U,  /* numTickSkip */
    (xdc_UInt32)0x1U,  /* nextScheduledTick */
    (xdc_UInt32)0x0U,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Clock_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((const CT__ti_sysbios_knl_Clock_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Clock_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8018U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = ti_sysbios_knl_Clock_Object__table__V;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5797) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5819) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5837) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)615) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)696) << 16 | 16);

/* serviceMargin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0U;

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8U;

/* doTickFunc__C */
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((const CT__ti_sysbios_knl_Clock_doTickFunc)(ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Event_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((const CT__ti_sysbios_knl_Event_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Event_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x801bU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = NULL;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5869) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5923) << 16 | 768);

/* A_nullEventMasks__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)766) << 16 | 16);

/* A_nullEventId__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)813) << 16 | 16);

/* A_eventInUse__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)852) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)895) << 16 | 16);

/* A_pendTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)958) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_knl_Task_deleteTerminatedTasksFunc__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0U,  /* [0] */
    (xdc_UInt)0x0U,  /* [1] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Idle_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((const CT__ti_sysbios_knl_Idle_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Idle_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8019U;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = NULL;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList const  *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList const  *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801aU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Queue_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((const CT__ti_sysbios_knl_Queue_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Queue_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801cU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1U,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[1] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1U,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
        (xdc_UInt16)0x1U,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Semaphore_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801dU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)6004) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)6034) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1106) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1161) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)895) << 16 | 16);

/* A_overflow__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1226) << 16 | 16);

/* A_pendTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1280) << 16 | 16);

/* E_objectNotInKernelSpace__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4568) << 16 | 0U);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((const CT__ti_sysbios_knl_Semaphore_eventPost)NULL);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((const CT__ti_sysbios_knl_Semaphore_eventSync)NULL);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0U,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xfU,  /* priority */
        (xdc_UInt)0x8000U,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0U,  /* initTrigger */
        (xdc_UInt)0x0U,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0U,  /* curSet */
    (xdc_UInt)0x0U,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((const CT__ti_sysbios_knl_Swi_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Swi_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x801eU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)6077) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)6124) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)6142) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1374) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1431) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10U;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((const CT__ti_sysbios_knl_Swi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((const CT__ti_sysbios_knl_Swi_taskRestore)(ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0U;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)NULL),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)NULL),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0U,  /* affinity */
    1,  /* privileged */
    ((xdc_Ptr)NULL),  /* domain */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[16384];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[16384];

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x5,  /* priority */
        (xdc_UInt)0x20U,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x4000,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(TaskUART)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0U,  /* curCoreId */
        (xdc_UInt)0x0U,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)NULL),  /* domain */
        (xdc_UInt32)0x0U,  /* checkValue */
        ((xdc_Ptr)NULL),  /* tls */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1U,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x4000,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0U,  /* curCoreId */
        (xdc_UInt)0x0U,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)NULL),  /* domain */
        (xdc_UInt32)0x0U,  /* checkValue */
        ((xdc_Ptr)NULL),  /* tls */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1],  /* [0] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0U,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x2U,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    1,  /* curTaskPrivileged */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_rts_gnu_ReentSupport_taskRegHook__I)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0,xdc_runtime_Error_Block* f_arg1))NULL),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))NULL),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0,ti_sysbios_knl_Task_Handle f_arg1))NULL),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))NULL),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))(ti_sysbios_rts_gnu_ReentSupport_taskDeleteHook__I)),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Task_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((const CT__ti_sysbios_knl_Task_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Task_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x801fU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)6182) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)6250) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)6295) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)6336) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)6368) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)6416) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)6472) << 16 | 512);

/* LM_setAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)6503) << 16 | 768);

/* LM_schedule__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)6586) << 16 | 1024);

/* LM_noWork__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6672) << 16 | 1024);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4647) << 16 | 0U);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4690) << 16 | 0U);

/* E_deleteNotAllowed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4741) << 16 | 0U);

/* E_moduleStateCheckFailed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4772) << 16 | 0U);

/* E_objectCheckFailed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4845) << 16 | 0U);

/* E_objectNotInKernelSpace__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4912) << 16 | 0U);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1480) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1549) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1603) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1657) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1720) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1770) << 16 | 16);

/* A_badAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1805) << 16 | 16);

/* A_sleepTaskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1838) << 16 | 16);

/* A_invalidCoreId__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1922) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10U;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x4000;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((const CT__ti_sysbios_knl_Task_allBlockedFunc)NULL);

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 1;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks const  *)ti_sysbios_knl_Task_hooks__A)};

/* moduleStateCheckFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckFxn)(ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)(ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckFxn)(ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckValueFxn)(ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0U;

/* startupHookFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((const CT__ti_sysbios_knl_Task_startupHookFunc)NULL);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V __attribute__ ((section(".data:ti_sysbios_rts_gnu_ReentSupport_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V __attribute__ ((section(".data_ti_sysbios_rts_gnu_ReentSupport_Module__state__V")));
#endif
ti_sysbios_rts_gnu_ReentSupport_Module_State__ ti_sysbios_rts_gnu_ReentSupport_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    (ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0],  /* lock */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled ti_sysbios_rts_gnu_ReentSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded ti_sysbios_rts_gnu_ReentSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj ti_sysbios_rts_gnu_ReentSupport_Module__gateObj__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__id ti_sysbios_rts_gnu_ReentSupport_Module__id__C = (xdc_Bits16)0x802fU;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined ti_sysbios_rts_gnu_ReentSupport_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8 ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_rts_gnu_ReentSupport_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__count ti_sysbios_rts_gnu_ReentSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__heap ti_sysbios_rts_gnu_ReentSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__sizeof ti_sysbios_rts_gnu_ReentSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_Object__table ti_sysbios_rts_gnu_ReentSupport_Object__table__C = NULL;

/* enableReentSupport__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_enableReentSupport ti_sysbios_rts_gnu_ReentSupport_enableReentSupport__C = 1;

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_rts_gnu_ReentSupport_A_badThreadType ti_sysbios_rts_gnu_ReentSupport_A_badThreadType__C = (((xdc_runtime_Assert_Id)2598) << 16 | 16);


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((const CT__xdc_runtime_Assert_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((const CT__xdc_runtime_Assert_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((const CT__xdc_runtime_Assert_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((const CT__xdc_runtime_Assert_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = NULL;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)4328) << 16 | 0U);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((const CT__xdc_runtime_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((const CT__xdc_runtime_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((const CT__xdc_runtime_Core_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((const CT__xdc_runtime_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((const CT__xdc_runtime_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((const CT__xdc_runtime_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((const CT__xdc_runtime_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((const CT__xdc_runtime_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((const CT__xdc_runtime_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = NULL;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((const CT__xdc_runtime_Defaults_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((const CT__xdc_runtime_Defaults_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((const CT__xdc_runtime_Defaults_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((const CT__xdc_runtime_Defaults_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((const CT__xdc_runtime_Diags_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((const CT__xdc_runtime_Diags_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((const CT__xdc_runtime_Diags_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((const CT__xdc_runtime_Diags_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = NULL;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((const CT__xdc_runtime_Diags_dictBase)NULL);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0U,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((const CT__xdc_runtime_Error_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((const CT__xdc_runtime_Error_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((const CT__xdc_runtime_Error_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((const CT__xdc_runtime_Error_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((const CT__xdc_runtime_Error_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((const CT__xdc_runtime_Error_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((const CT__xdc_runtime_Error_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((const CT__xdc_runtime_Error_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((const CT__xdc_runtime_Error_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = NULL;

/* policyFxn__C */
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((const CT__xdc_runtime_Error_policyFxn)(xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)4350) << 16 | 0U);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)4354) << 16 | 0U);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)4388) << 16 | 0U);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((const CT__xdc_runtime_Error_raiseHook)(ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10U;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((const CT__xdc_runtime_Gate_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((const CT__xdc_runtime_Gate_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((const CT__xdc_runtime_Gate_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((const CT__xdc_runtime_Gate_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((const CT__xdc_runtime_Log_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((const CT__xdc_runtime_Log_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((const CT__xdc_runtime_Log_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((const CT__xdc_runtime_Log_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((const CT__xdc_runtime_Log_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((const CT__xdc_runtime_Log_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((const CT__xdc_runtime_Log_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((const CT__xdc_runtime_Log_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((const CT__xdc_runtime_Log_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = NULL;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5621) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5645) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5666) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5685) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5702) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5716) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5732) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5739) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5750) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5760) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5779) << 16 | 32768);


/*
 * ======== xdc.runtime.LoggerBuf INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const xdc_runtime_LoggerBuf_Params xdc_runtime_LoggerBuf_Object__PARAMS__C = {
    sizeof (xdc_runtime_LoggerBuf_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_LoggerBuf_Object__PARAMS__C.__iprms, /* instance */
    (xdc_UInt)0x40U,  /* numEntries */
    xdc_runtime_LoggerBuf_BufType_CIRCULAR,  /* bufType */
    0,  /* exitFlush */
    0,  /* bufHeap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A */
__T1_xdc_runtime_LoggerBuf_Instance_State__entryArr xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[16];

/* Module__root__V */
xdc_runtime_LoggerBuf_Module__ xdc_runtime_LoggerBuf_Module__root__V = {
    {&xdc_runtime_LoggerBuf_Module__root__V.link,  /* link.next */
    &xdc_runtime_LoggerBuf_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_LoggerBuf_Object__ xdc_runtime_LoggerBuf_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_LoggerBuf_Module__FXNS__C,
        0,  /* bufHeap */
        ((void*)xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A),  /* entryArr */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* curEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[15])),  /* endEntry */
        ((xdc_runtime_LoggerBuf_Entry*)(&xdc_runtime_LoggerBuf_Instance_State_0_entryArr__A[0])),  /* readEntry */
        (xdc_Bits32)0x1U,  /* serial */
        (xdc_UInt16)0x10U,  /* numEntries */
        (xdc_Int8)0x0,  /* advance */
        0,  /* enabled */
        0,  /* flush */
    },
};

/* Module__state__V */
#ifdef __ti__
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data:xdc_runtime_LoggerBuf_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V __attribute__ ((section(".data_xdc_runtime_LoggerBuf_Module__state__V")));
#endif
xdc_runtime_LoggerBuf_Module_State__ xdc_runtime_LoggerBuf_Module__state__V = {
    (xdc_Bits16)0x0U,  /* level1 */
    (xdc_Bits16)0x0U,  /* level2 */
    (xdc_Bits16)0x0U,  /* level3 */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C = ((const CT__xdc_runtime_LoggerBuf_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C = ((const CT__xdc_runtime_LoggerBuf_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C = ((const CT__xdc_runtime_LoggerBuf_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C = (xdc_Bits16)0x8009U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C = ((const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C = sizeof(xdc_runtime_LoggerBuf_Object__);

/* Object__table__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C = xdc_runtime_LoggerBuf_Object__table__V;

/* filterByLevel__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C = 0;

/* E_badLevel__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C = (((xdc_runtime_Error_Id)4396) << 16 | 0U);

/* enableFlush__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C = 0;

/* statusLogger__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C = 0;

/* level1Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C = (xdc_Bits16)0x0U;

/* level2Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C = (xdc_Bits16)0x0U;

/* level3Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C = (xdc_Bits16)0x0U;

/* level4Mask__C */
__FAR__ const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C = (xdc_Bits16)0xff87U;


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x4090U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x4090U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((const CT__xdc_runtime_Main_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((const CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((const CT__xdc_runtime_Main_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x800aU;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((const CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((const CT__xdc_runtime_Main_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((const CT__xdc_runtime_Main_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((const CT__xdc_runtime_Main_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((const CT__xdc_runtime_Main_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((const CT__xdc_runtime_Main_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((const CT__xdc_runtime_Memory_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((const CT__xdc_runtime_Memory_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((const CT__xdc_runtime_Memory_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800bU;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((const CT__xdc_runtime_Memory_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = NULL;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)NULL),  /* listHead */
    (xdc_Bits16)0x7fffU,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((const CT__xdc_runtime_Registry_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((const CT__xdc_runtime_Registry_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((const CT__xdc_runtime_Registry_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800cU;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((const CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&xdc_runtime_LoggerBuf_Object__table__V[0]));

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn0)(xdc_runtime_LoggerBuf_write0));

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn1)(xdc_runtime_LoggerBuf_write1));

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn2)(xdc_runtime_LoggerBuf_write2));

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn4)(xdc_runtime_LoggerBuf_write4));

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn8)(xdc_runtime_LoggerBuf_write8));

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)NULL),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_a9_Cache_startup__I)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_initStack)),  /* [2] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[13] = {
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_LoggerBuf_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_System_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_SysMin_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Clock_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_gic_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_exc_Exception_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_rts_gnu_ReentSupport_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_a9_Timer_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_a8_Mmu_Module_startup__E)),  /* [11] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_a15_TimestampProvider_Module_startup__E)),  /* [12] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[13] = {
    1,  /* [0] */
    1,  /* [1] */
    1,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    1,  /* [12] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((const CT__xdc_runtime_Startup_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((const CT__xdc_runtime_Startup_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((const CT__xdc_runtime_Startup_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800dU;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((const CT__xdc_runtime_Startup_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = NULL;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns const  *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((const CT__xdc_runtime_Startup_startModsFxn)(xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((const CT__xdc_runtime_Startup_execImpl)(xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((const CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((const CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
#ifdef __ti__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0U,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((const CT__xdc_runtime_SysMin_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((const CT__xdc_runtime_SysMin_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((const CT__xdc_runtime_SysMin_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800fU;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((const CT__xdc_runtime_SysMin_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = NULL;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((const CT__xdc_runtime_SysMin_outputFxn)NULL);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((const CT__xdc_runtime_SysMin_outputFunc)(xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4] = {
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [1] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [2] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [3] */
};

/* Module__state__V */
#ifdef __ti__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((const CT__xdc_runtime_System_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((const CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((const CT__xdc_runtime_System_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800eU;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((const CT__xdc_runtime_System_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((const CT__xdc_runtime_System_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((const CT__xdc_runtime_System_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((const CT__xdc_runtime_System_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((const CT__xdc_runtime_System_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((const CT__xdc_runtime_System_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = NULL;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x4;

/* abortFxn__C */
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((const CT__xdc_runtime_System_abortFxn)(xdc_runtime_System_abortStd__E));

/* exitFxn__C */
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((const CT__xdc_runtime_System_exitFxn)(xdc_runtime_System_exitStd__E));

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((const CT__xdc_runtime_System_extendFxn)(xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7265] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6e,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x6c,  /* [404] */
    (xdc_Char)0x6c,  /* [405] */
    (xdc_Char)0x50,  /* [406] */
    (xdc_Char)0x6f,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x6e,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x72,  /* [412] */
    (xdc_Char)0x3a,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x50,  /* [415] */
    (xdc_Char)0x6f,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x74,  /* [419] */
    (xdc_Char)0x65,  /* [420] */
    (xdc_Char)0x72,  /* [421] */
    (xdc_Char)0x20,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x73,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x6e,  /* [426] */
    (xdc_Char)0x75,  /* [427] */
    (xdc_Char)0x6c,  /* [428] */
    (xdc_Char)0x6c,  /* [429] */
    (xdc_Char)0x0,  /* [430] */
    (xdc_Char)0x41,  /* [431] */
    (xdc_Char)0x5f,  /* [432] */
    (xdc_Char)0x69,  /* [433] */
    (xdc_Char)0x6e,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x61,  /* [436] */
    (xdc_Char)0x6c,  /* [437] */
    (xdc_Char)0x69,  /* [438] */
    (xdc_Char)0x64,  /* [439] */
    (xdc_Char)0x52,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x67,  /* [442] */
    (xdc_Char)0x69,  /* [443] */
    (xdc_Char)0x6f,  /* [444] */
    (xdc_Char)0x6e,  /* [445] */
    (xdc_Char)0x49,  /* [446] */
    (xdc_Char)0x64,  /* [447] */
    (xdc_Char)0x3a,  /* [448] */
    (xdc_Char)0x20,  /* [449] */
    (xdc_Char)0x4d,  /* [450] */
    (xdc_Char)0x50,  /* [451] */
    (xdc_Char)0x55,  /* [452] */
    (xdc_Char)0x20,  /* [453] */
    (xdc_Char)0x52,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x67,  /* [456] */
    (xdc_Char)0x69,  /* [457] */
    (xdc_Char)0x6f,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x6e,  /* [461] */
    (xdc_Char)0x75,  /* [462] */
    (xdc_Char)0x6d,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x72,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x70,  /* [468] */
    (xdc_Char)0x61,  /* [469] */
    (xdc_Char)0x73,  /* [470] */
    (xdc_Char)0x73,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x64,  /* [473] */
    (xdc_Char)0x20,  /* [474] */
    (xdc_Char)0x69,  /* [475] */
    (xdc_Char)0x73,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x6e,  /* [479] */
    (xdc_Char)0x76,  /* [480] */
    (xdc_Char)0x61,  /* [481] */
    (xdc_Char)0x6c,  /* [482] */
    (xdc_Char)0x69,  /* [483] */
    (xdc_Char)0x64,  /* [484] */
    (xdc_Char)0x2e,  /* [485] */
    (xdc_Char)0x0,  /* [486] */
    (xdc_Char)0x41,  /* [487] */
    (xdc_Char)0x5f,  /* [488] */
    (xdc_Char)0x75,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x61,  /* [491] */
    (xdc_Char)0x6c,  /* [492] */
    (xdc_Char)0x69,  /* [493] */
    (xdc_Char)0x67,  /* [494] */
    (xdc_Char)0x6e,  /* [495] */
    (xdc_Char)0x65,  /* [496] */
    (xdc_Char)0x64,  /* [497] */
    (xdc_Char)0x42,  /* [498] */
    (xdc_Char)0x61,  /* [499] */
    (xdc_Char)0x73,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x41,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x64,  /* [504] */
    (xdc_Char)0x72,  /* [505] */
    (xdc_Char)0x3a,  /* [506] */
    (xdc_Char)0x20,  /* [507] */
    (xdc_Char)0x4d,  /* [508] */
    (xdc_Char)0x50,  /* [509] */
    (xdc_Char)0x55,  /* [510] */
    (xdc_Char)0x20,  /* [511] */
    (xdc_Char)0x72,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x67,  /* [514] */
    (xdc_Char)0x69,  /* [515] */
    (xdc_Char)0x6f,  /* [516] */
    (xdc_Char)0x6e,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x62,  /* [519] */
    (xdc_Char)0x61,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x65,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x61,  /* [524] */
    (xdc_Char)0x64,  /* [525] */
    (xdc_Char)0x64,  /* [526] */
    (xdc_Char)0x72,  /* [527] */
    (xdc_Char)0x65,  /* [528] */
    (xdc_Char)0x73,  /* [529] */
    (xdc_Char)0x73,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x6f,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x20,  /* [535] */
    (xdc_Char)0x61,  /* [536] */
    (xdc_Char)0x6c,  /* [537] */
    (xdc_Char)0x69,  /* [538] */
    (xdc_Char)0x67,  /* [539] */
    (xdc_Char)0x6e,  /* [540] */
    (xdc_Char)0x65,  /* [541] */
    (xdc_Char)0x64,  /* [542] */
    (xdc_Char)0x20,  /* [543] */
    (xdc_Char)0x74,  /* [544] */
    (xdc_Char)0x6f,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x73,  /* [547] */
    (xdc_Char)0x69,  /* [548] */
    (xdc_Char)0x7a,  /* [549] */
    (xdc_Char)0x65,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x72,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x73,  /* [557] */
    (xdc_Char)0x65,  /* [558] */
    (xdc_Char)0x72,  /* [559] */
    (xdc_Char)0x76,  /* [560] */
    (xdc_Char)0x65,  /* [561] */
    (xdc_Char)0x64,  /* [562] */
    (xdc_Char)0x41,  /* [563] */
    (xdc_Char)0x74,  /* [564] */
    (xdc_Char)0x74,  /* [565] */
    (xdc_Char)0x72,  /* [566] */
    (xdc_Char)0x73,  /* [567] */
    (xdc_Char)0x3a,  /* [568] */
    (xdc_Char)0x20,  /* [569] */
    (xdc_Char)0x4d,  /* [570] */
    (xdc_Char)0x50,  /* [571] */
    (xdc_Char)0x55,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x72,  /* [574] */
    (xdc_Char)0x65,  /* [575] */
    (xdc_Char)0x67,  /* [576] */
    (xdc_Char)0x69,  /* [577] */
    (xdc_Char)0x6f,  /* [578] */
    (xdc_Char)0x6e,  /* [579] */
    (xdc_Char)0x20,  /* [580] */
    (xdc_Char)0x61,  /* [581] */
    (xdc_Char)0x74,  /* [582] */
    (xdc_Char)0x74,  /* [583] */
    (xdc_Char)0x72,  /* [584] */
    (xdc_Char)0x69,  /* [585] */
    (xdc_Char)0x62,  /* [586] */
    (xdc_Char)0x75,  /* [587] */
    (xdc_Char)0x74,  /* [588] */
    (xdc_Char)0x65,  /* [589] */
    (xdc_Char)0x73,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x73,  /* [592] */
    (xdc_Char)0x65,  /* [593] */
    (xdc_Char)0x74,  /* [594] */
    (xdc_Char)0x20,  /* [595] */
    (xdc_Char)0x74,  /* [596] */
    (xdc_Char)0x6f,  /* [597] */
    (xdc_Char)0x20,  /* [598] */
    (xdc_Char)0x72,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x73,  /* [601] */
    (xdc_Char)0x65,  /* [602] */
    (xdc_Char)0x72,  /* [603] */
    (xdc_Char)0x76,  /* [604] */
    (xdc_Char)0x65,  /* [605] */
    (xdc_Char)0x64,  /* [606] */
    (xdc_Char)0x20,  /* [607] */
    (xdc_Char)0x76,  /* [608] */
    (xdc_Char)0x61,  /* [609] */
    (xdc_Char)0x6c,  /* [610] */
    (xdc_Char)0x75,  /* [611] */
    (xdc_Char)0x65,  /* [612] */
    (xdc_Char)0x2e,  /* [613] */
    (xdc_Char)0x0,  /* [614] */
    (xdc_Char)0x41,  /* [615] */
    (xdc_Char)0x5f,  /* [616] */
    (xdc_Char)0x63,  /* [617] */
    (xdc_Char)0x6c,  /* [618] */
    (xdc_Char)0x6f,  /* [619] */
    (xdc_Char)0x63,  /* [620] */
    (xdc_Char)0x6b,  /* [621] */
    (xdc_Char)0x44,  /* [622] */
    (xdc_Char)0x69,  /* [623] */
    (xdc_Char)0x73,  /* [624] */
    (xdc_Char)0x61,  /* [625] */
    (xdc_Char)0x62,  /* [626] */
    (xdc_Char)0x6c,  /* [627] */
    (xdc_Char)0x65,  /* [628] */
    (xdc_Char)0x64,  /* [629] */
    (xdc_Char)0x3a,  /* [630] */
    (xdc_Char)0x20,  /* [631] */
    (xdc_Char)0x43,  /* [632] */
    (xdc_Char)0x61,  /* [633] */
    (xdc_Char)0x6e,  /* [634] */
    (xdc_Char)0x6e,  /* [635] */
    (xdc_Char)0x6f,  /* [636] */
    (xdc_Char)0x74,  /* [637] */
    (xdc_Char)0x20,  /* [638] */
    (xdc_Char)0x63,  /* [639] */
    (xdc_Char)0x72,  /* [640] */
    (xdc_Char)0x65,  /* [641] */
    (xdc_Char)0x61,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x65,  /* [644] */
    (xdc_Char)0x20,  /* [645] */
    (xdc_Char)0x61,  /* [646] */
    (xdc_Char)0x20,  /* [647] */
    (xdc_Char)0x63,  /* [648] */
    (xdc_Char)0x6c,  /* [649] */
    (xdc_Char)0x6f,  /* [650] */
    (xdc_Char)0x63,  /* [651] */
    (xdc_Char)0x6b,  /* [652] */
    (xdc_Char)0x20,  /* [653] */
    (xdc_Char)0x69,  /* [654] */
    (xdc_Char)0x6e,  /* [655] */
    (xdc_Char)0x73,  /* [656] */
    (xdc_Char)0x74,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x63,  /* [660] */
    (xdc_Char)0x65,  /* [661] */
    (xdc_Char)0x20,  /* [662] */
    (xdc_Char)0x77,  /* [663] */
    (xdc_Char)0x68,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x6e,  /* [666] */
    (xdc_Char)0x20,  /* [667] */
    (xdc_Char)0x42,  /* [668] */
    (xdc_Char)0x49,  /* [669] */
    (xdc_Char)0x4f,  /* [670] */
    (xdc_Char)0x53,  /* [671] */
    (xdc_Char)0x2e,  /* [672] */
    (xdc_Char)0x63,  /* [673] */
    (xdc_Char)0x6c,  /* [674] */
    (xdc_Char)0x6f,  /* [675] */
    (xdc_Char)0x63,  /* [676] */
    (xdc_Char)0x6b,  /* [677] */
    (xdc_Char)0x45,  /* [678] */
    (xdc_Char)0x6e,  /* [679] */
    (xdc_Char)0x61,  /* [680] */
    (xdc_Char)0x62,  /* [681] */
    (xdc_Char)0x6c,  /* [682] */
    (xdc_Char)0x65,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x20,  /* [685] */
    (xdc_Char)0x69,  /* [686] */
    (xdc_Char)0x73,  /* [687] */
    (xdc_Char)0x20,  /* [688] */
    (xdc_Char)0x66,  /* [689] */
    (xdc_Char)0x61,  /* [690] */
    (xdc_Char)0x6c,  /* [691] */
    (xdc_Char)0x73,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x2e,  /* [694] */
    (xdc_Char)0x0,  /* [695] */
    (xdc_Char)0x41,  /* [696] */
    (xdc_Char)0x5f,  /* [697] */
    (xdc_Char)0x62,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x64,  /* [700] */
    (xdc_Char)0x54,  /* [701] */
    (xdc_Char)0x68,  /* [702] */
    (xdc_Char)0x72,  /* [703] */
    (xdc_Char)0x65,  /* [704] */
    (xdc_Char)0x61,  /* [705] */
    (xdc_Char)0x64,  /* [706] */
    (xdc_Char)0x54,  /* [707] */
    (xdc_Char)0x79,  /* [708] */
    (xdc_Char)0x70,  /* [709] */
    (xdc_Char)0x65,  /* [710] */
    (xdc_Char)0x3a,  /* [711] */
    (xdc_Char)0x20,  /* [712] */
    (xdc_Char)0x43,  /* [713] */
    (xdc_Char)0x61,  /* [714] */
    (xdc_Char)0x6e,  /* [715] */
    (xdc_Char)0x6e,  /* [716] */
    (xdc_Char)0x6f,  /* [717] */
    (xdc_Char)0x74,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x63,  /* [720] */
    (xdc_Char)0x72,  /* [721] */
    (xdc_Char)0x65,  /* [722] */
    (xdc_Char)0x61,  /* [723] */
    (xdc_Char)0x74,  /* [724] */
    (xdc_Char)0x65,  /* [725] */
    (xdc_Char)0x2f,  /* [726] */
    (xdc_Char)0x64,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x6c,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x74,  /* [731] */
    (xdc_Char)0x65,  /* [732] */
    (xdc_Char)0x20,  /* [733] */
    (xdc_Char)0x61,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x43,  /* [736] */
    (xdc_Char)0x6c,  /* [737] */
    (xdc_Char)0x6f,  /* [738] */
    (xdc_Char)0x63,  /* [739] */
    (xdc_Char)0x6b,  /* [740] */
    (xdc_Char)0x20,  /* [741] */
    (xdc_Char)0x66,  /* [742] */
    (xdc_Char)0x72,  /* [743] */
    (xdc_Char)0x6f,  /* [744] */
    (xdc_Char)0x6d,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x48,  /* [747] */
    (xdc_Char)0x77,  /* [748] */
    (xdc_Char)0x69,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x6f,  /* [751] */
    (xdc_Char)0x72,  /* [752] */
    (xdc_Char)0x20,  /* [753] */
    (xdc_Char)0x53,  /* [754] */
    (xdc_Char)0x77,  /* [755] */
    (xdc_Char)0x69,  /* [756] */
    (xdc_Char)0x20,  /* [757] */
    (xdc_Char)0x74,  /* [758] */
    (xdc_Char)0x68,  /* [759] */
    (xdc_Char)0x72,  /* [760] */
    (xdc_Char)0x65,  /* [761] */
    (xdc_Char)0x61,  /* [762] */
    (xdc_Char)0x64,  /* [763] */
    (xdc_Char)0x2e,  /* [764] */
    (xdc_Char)0x0,  /* [765] */
    (xdc_Char)0x41,  /* [766] */
    (xdc_Char)0x5f,  /* [767] */
    (xdc_Char)0x6e,  /* [768] */
    (xdc_Char)0x75,  /* [769] */
    (xdc_Char)0x6c,  /* [770] */
    (xdc_Char)0x6c,  /* [771] */
    (xdc_Char)0x45,  /* [772] */
    (xdc_Char)0x76,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6e,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x4d,  /* [777] */
    (xdc_Char)0x61,  /* [778] */
    (xdc_Char)0x73,  /* [779] */
    (xdc_Char)0x6b,  /* [780] */
    (xdc_Char)0x73,  /* [781] */
    (xdc_Char)0x3a,  /* [782] */
    (xdc_Char)0x20,  /* [783] */
    (xdc_Char)0x6f,  /* [784] */
    (xdc_Char)0x72,  /* [785] */
    (xdc_Char)0x4d,  /* [786] */
    (xdc_Char)0x61,  /* [787] */
    (xdc_Char)0x73,  /* [788] */
    (xdc_Char)0x6b,  /* [789] */
    (xdc_Char)0x20,  /* [790] */
    (xdc_Char)0x61,  /* [791] */
    (xdc_Char)0x6e,  /* [792] */
    (xdc_Char)0x64,  /* [793] */
    (xdc_Char)0x20,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x6e,  /* [796] */
    (xdc_Char)0x64,  /* [797] */
    (xdc_Char)0x4d,  /* [798] */
    (xdc_Char)0x61,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x6b,  /* [801] */
    (xdc_Char)0x20,  /* [802] */
    (xdc_Char)0x61,  /* [803] */
    (xdc_Char)0x72,  /* [804] */
    (xdc_Char)0x65,  /* [805] */
    (xdc_Char)0x20,  /* [806] */
    (xdc_Char)0x6e,  /* [807] */
    (xdc_Char)0x75,  /* [808] */
    (xdc_Char)0x6c,  /* [809] */
    (xdc_Char)0x6c,  /* [810] */
    (xdc_Char)0x2e,  /* [811] */
    (xdc_Char)0x0,  /* [812] */
    (xdc_Char)0x41,  /* [813] */
    (xdc_Char)0x5f,  /* [814] */
    (xdc_Char)0x6e,  /* [815] */
    (xdc_Char)0x75,  /* [816] */
    (xdc_Char)0x6c,  /* [817] */
    (xdc_Char)0x6c,  /* [818] */
    (xdc_Char)0x45,  /* [819] */
    (xdc_Char)0x76,  /* [820] */
    (xdc_Char)0x65,  /* [821] */
    (xdc_Char)0x6e,  /* [822] */
    (xdc_Char)0x74,  /* [823] */
    (xdc_Char)0x49,  /* [824] */
    (xdc_Char)0x64,  /* [825] */
    (xdc_Char)0x3a,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x70,  /* [828] */
    (xdc_Char)0x6f,  /* [829] */
    (xdc_Char)0x73,  /* [830] */
    (xdc_Char)0x74,  /* [831] */
    (xdc_Char)0x65,  /* [832] */
    (xdc_Char)0x64,  /* [833] */
    (xdc_Char)0x20,  /* [834] */
    (xdc_Char)0x65,  /* [835] */
    (xdc_Char)0x76,  /* [836] */
    (xdc_Char)0x65,  /* [837] */
    (xdc_Char)0x6e,  /* [838] */
    (xdc_Char)0x74,  /* [839] */
    (xdc_Char)0x49,  /* [840] */
    (xdc_Char)0x64,  /* [841] */
    (xdc_Char)0x20,  /* [842] */
    (xdc_Char)0x69,  /* [843] */
    (xdc_Char)0x73,  /* [844] */
    (xdc_Char)0x20,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x75,  /* [847] */
    (xdc_Char)0x6c,  /* [848] */
    (xdc_Char)0x6c,  /* [849] */
    (xdc_Char)0x2e,  /* [850] */
    (xdc_Char)0x0,  /* [851] */
    (xdc_Char)0x41,  /* [852] */
    (xdc_Char)0x5f,  /* [853] */
    (xdc_Char)0x65,  /* [854] */
    (xdc_Char)0x76,  /* [855] */
    (xdc_Char)0x65,  /* [856] */
    (xdc_Char)0x6e,  /* [857] */
    (xdc_Char)0x74,  /* [858] */
    (xdc_Char)0x49,  /* [859] */
    (xdc_Char)0x6e,  /* [860] */
    (xdc_Char)0x55,  /* [861] */
    (xdc_Char)0x73,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x3a,  /* [864] */
    (xdc_Char)0x20,  /* [865] */
    (xdc_Char)0x45,  /* [866] */
    (xdc_Char)0x76,  /* [867] */
    (xdc_Char)0x65,  /* [868] */
    (xdc_Char)0x6e,  /* [869] */
    (xdc_Char)0x74,  /* [870] */
    (xdc_Char)0x20,  /* [871] */
    (xdc_Char)0x6f,  /* [872] */
    (xdc_Char)0x62,  /* [873] */
    (xdc_Char)0x6a,  /* [874] */
    (xdc_Char)0x65,  /* [875] */
    (xdc_Char)0x63,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x6c,  /* [880] */
    (xdc_Char)0x72,  /* [881] */
    (xdc_Char)0x65,  /* [882] */
    (xdc_Char)0x61,  /* [883] */
    (xdc_Char)0x64,  /* [884] */
    (xdc_Char)0x79,  /* [885] */
    (xdc_Char)0x20,  /* [886] */
    (xdc_Char)0x69,  /* [887] */
    (xdc_Char)0x6e,  /* [888] */
    (xdc_Char)0x20,  /* [889] */
    (xdc_Char)0x75,  /* [890] */
    (xdc_Char)0x73,  /* [891] */
    (xdc_Char)0x65,  /* [892] */
    (xdc_Char)0x2e,  /* [893] */
    (xdc_Char)0x0,  /* [894] */
    (xdc_Char)0x41,  /* [895] */
    (xdc_Char)0x5f,  /* [896] */
    (xdc_Char)0x62,  /* [897] */
    (xdc_Char)0x61,  /* [898] */
    (xdc_Char)0x64,  /* [899] */
    (xdc_Char)0x43,  /* [900] */
    (xdc_Char)0x6f,  /* [901] */
    (xdc_Char)0x6e,  /* [902] */
    (xdc_Char)0x74,  /* [903] */
    (xdc_Char)0x65,  /* [904] */
    (xdc_Char)0x78,  /* [905] */
    (xdc_Char)0x74,  /* [906] */
    (xdc_Char)0x3a,  /* [907] */
    (xdc_Char)0x20,  /* [908] */
    (xdc_Char)0x62,  /* [909] */
    (xdc_Char)0x61,  /* [910] */
    (xdc_Char)0x64,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x63,  /* [913] */
    (xdc_Char)0x61,  /* [914] */
    (xdc_Char)0x6c,  /* [915] */
    (xdc_Char)0x6c,  /* [916] */
    (xdc_Char)0x69,  /* [917] */
    (xdc_Char)0x6e,  /* [918] */
    (xdc_Char)0x67,  /* [919] */
    (xdc_Char)0x20,  /* [920] */
    (xdc_Char)0x63,  /* [921] */
    (xdc_Char)0x6f,  /* [922] */
    (xdc_Char)0x6e,  /* [923] */
    (xdc_Char)0x74,  /* [924] */
    (xdc_Char)0x65,  /* [925] */
    (xdc_Char)0x78,  /* [926] */
    (xdc_Char)0x74,  /* [927] */
    (xdc_Char)0x2e,  /* [928] */
    (xdc_Char)0x20,  /* [929] */
    (xdc_Char)0x4d,  /* [930] */
    (xdc_Char)0x75,  /* [931] */
    (xdc_Char)0x73,  /* [932] */
    (xdc_Char)0x74,  /* [933] */
    (xdc_Char)0x20,  /* [934] */
    (xdc_Char)0x62,  /* [935] */
    (xdc_Char)0x65,  /* [936] */
    (xdc_Char)0x20,  /* [937] */
    (xdc_Char)0x63,  /* [938] */
    (xdc_Char)0x61,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x6c,  /* [941] */
    (xdc_Char)0x65,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x20,  /* [944] */
    (xdc_Char)0x66,  /* [945] */
    (xdc_Char)0x72,  /* [946] */
    (xdc_Char)0x6f,  /* [947] */
    (xdc_Char)0x6d,  /* [948] */
    (xdc_Char)0x20,  /* [949] */
    (xdc_Char)0x61,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x54,  /* [952] */
    (xdc_Char)0x61,  /* [953] */
    (xdc_Char)0x73,  /* [954] */
    (xdc_Char)0x6b,  /* [955] */
    (xdc_Char)0x2e,  /* [956] */
    (xdc_Char)0x0,  /* [957] */
    (xdc_Char)0x41,  /* [958] */
    (xdc_Char)0x5f,  /* [959] */
    (xdc_Char)0x70,  /* [960] */
    (xdc_Char)0x65,  /* [961] */
    (xdc_Char)0x6e,  /* [962] */
    (xdc_Char)0x64,  /* [963] */
    (xdc_Char)0x54,  /* [964] */
    (xdc_Char)0x61,  /* [965] */
    (xdc_Char)0x73,  /* [966] */
    (xdc_Char)0x6b,  /* [967] */
    (xdc_Char)0x44,  /* [968] */
    (xdc_Char)0x69,  /* [969] */
    (xdc_Char)0x73,  /* [970] */
    (xdc_Char)0x61,  /* [971] */
    (xdc_Char)0x62,  /* [972] */
    (xdc_Char)0x6c,  /* [973] */
    (xdc_Char)0x65,  /* [974] */
    (xdc_Char)0x64,  /* [975] */
    (xdc_Char)0x3a,  /* [976] */
    (xdc_Char)0x20,  /* [977] */
    (xdc_Char)0x43,  /* [978] */
    (xdc_Char)0x61,  /* [979] */
    (xdc_Char)0x6e,  /* [980] */
    (xdc_Char)0x6e,  /* [981] */
    (xdc_Char)0x6f,  /* [982] */
    (xdc_Char)0x74,  /* [983] */
    (xdc_Char)0x20,  /* [984] */
    (xdc_Char)0x63,  /* [985] */
    (xdc_Char)0x61,  /* [986] */
    (xdc_Char)0x6c,  /* [987] */
    (xdc_Char)0x6c,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x45,  /* [990] */
    (xdc_Char)0x76,  /* [991] */
    (xdc_Char)0x65,  /* [992] */
    (xdc_Char)0x6e,  /* [993] */
    (xdc_Char)0x74,  /* [994] */
    (xdc_Char)0x5f,  /* [995] */
    (xdc_Char)0x70,  /* [996] */
    (xdc_Char)0x65,  /* [997] */
    (xdc_Char)0x6e,  /* [998] */
    (xdc_Char)0x64,  /* [999] */
    (xdc_Char)0x28,  /* [1000] */
    (xdc_Char)0x29,  /* [1001] */
    (xdc_Char)0x20,  /* [1002] */
    (xdc_Char)0x77,  /* [1003] */
    (xdc_Char)0x68,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6c,  /* [1006] */
    (xdc_Char)0x65,  /* [1007] */
    (xdc_Char)0x20,  /* [1008] */
    (xdc_Char)0x74,  /* [1009] */
    (xdc_Char)0x68,  /* [1010] */
    (xdc_Char)0x65,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x54,  /* [1013] */
    (xdc_Char)0x61,  /* [1014] */
    (xdc_Char)0x73,  /* [1015] */
    (xdc_Char)0x6b,  /* [1016] */
    (xdc_Char)0x20,  /* [1017] */
    (xdc_Char)0x6f,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x20,  /* [1020] */
    (xdc_Char)0x53,  /* [1021] */
    (xdc_Char)0x77,  /* [1022] */
    (xdc_Char)0x69,  /* [1023] */
    (xdc_Char)0x20,  /* [1024] */
    (xdc_Char)0x73,  /* [1025] */
    (xdc_Char)0x63,  /* [1026] */
    (xdc_Char)0x68,  /* [1027] */
    (xdc_Char)0x65,  /* [1028] */
    (xdc_Char)0x64,  /* [1029] */
    (xdc_Char)0x75,  /* [1030] */
    (xdc_Char)0x6c,  /* [1031] */
    (xdc_Char)0x65,  /* [1032] */
    (xdc_Char)0x72,  /* [1033] */
    (xdc_Char)0x20,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x73,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x64,  /* [1038] */
    (xdc_Char)0x69,  /* [1039] */
    (xdc_Char)0x73,  /* [1040] */
    (xdc_Char)0x61,  /* [1041] */
    (xdc_Char)0x62,  /* [1042] */
    (xdc_Char)0x6c,  /* [1043] */
    (xdc_Char)0x65,  /* [1044] */
    (xdc_Char)0x64,  /* [1045] */
    (xdc_Char)0x2e,  /* [1046] */
    (xdc_Char)0x0,  /* [1047] */
    (xdc_Char)0x4d,  /* [1048] */
    (xdc_Char)0x61,  /* [1049] */
    (xdc_Char)0x69,  /* [1050] */
    (xdc_Char)0x6c,  /* [1051] */
    (xdc_Char)0x62,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x78,  /* [1054] */
    (xdc_Char)0x5f,  /* [1055] */
    (xdc_Char)0x63,  /* [1056] */
    (xdc_Char)0x72,  /* [1057] */
    (xdc_Char)0x65,  /* [1058] */
    (xdc_Char)0x61,  /* [1059] */
    (xdc_Char)0x74,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x27,  /* [1062] */
    (xdc_Char)0x73,  /* [1063] */
    (xdc_Char)0x20,  /* [1064] */
    (xdc_Char)0x62,  /* [1065] */
    (xdc_Char)0x75,  /* [1066] */
    (xdc_Char)0x66,  /* [1067] */
    (xdc_Char)0x53,  /* [1068] */
    (xdc_Char)0x69,  /* [1069] */
    (xdc_Char)0x7a,  /* [1070] */
    (xdc_Char)0x65,  /* [1071] */
    (xdc_Char)0x20,  /* [1072] */
    (xdc_Char)0x70,  /* [1073] */
    (xdc_Char)0x61,  /* [1074] */
    (xdc_Char)0x72,  /* [1075] */
    (xdc_Char)0x61,  /* [1076] */
    (xdc_Char)0x6d,  /* [1077] */
    (xdc_Char)0x65,  /* [1078] */
    (xdc_Char)0x74,  /* [1079] */
    (xdc_Char)0x65,  /* [1080] */
    (xdc_Char)0x72,  /* [1081] */
    (xdc_Char)0x20,  /* [1082] */
    (xdc_Char)0x69,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x69,  /* [1086] */
    (xdc_Char)0x6e,  /* [1087] */
    (xdc_Char)0x76,  /* [1088] */
    (xdc_Char)0x61,  /* [1089] */
    (xdc_Char)0x6c,  /* [1090] */
    (xdc_Char)0x69,  /* [1091] */
    (xdc_Char)0x64,  /* [1092] */
    (xdc_Char)0x20,  /* [1093] */
    (xdc_Char)0x28,  /* [1094] */
    (xdc_Char)0x74,  /* [1095] */
    (xdc_Char)0x6f,  /* [1096] */
    (xdc_Char)0x6f,  /* [1097] */
    (xdc_Char)0x20,  /* [1098] */
    (xdc_Char)0x73,  /* [1099] */
    (xdc_Char)0x6d,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x6c,  /* [1102] */
    (xdc_Char)0x6c,  /* [1103] */
    (xdc_Char)0x29,  /* [1104] */
    (xdc_Char)0x0,  /* [1105] */
    (xdc_Char)0x41,  /* [1106] */
    (xdc_Char)0x5f,  /* [1107] */
    (xdc_Char)0x6e,  /* [1108] */
    (xdc_Char)0x6f,  /* [1109] */
    (xdc_Char)0x45,  /* [1110] */
    (xdc_Char)0x76,  /* [1111] */
    (xdc_Char)0x65,  /* [1112] */
    (xdc_Char)0x6e,  /* [1113] */
    (xdc_Char)0x74,  /* [1114] */
    (xdc_Char)0x73,  /* [1115] */
    (xdc_Char)0x3a,  /* [1116] */
    (xdc_Char)0x20,  /* [1117] */
    (xdc_Char)0x54,  /* [1118] */
    (xdc_Char)0x68,  /* [1119] */
    (xdc_Char)0x65,  /* [1120] */
    (xdc_Char)0x20,  /* [1121] */
    (xdc_Char)0x45,  /* [1122] */
    (xdc_Char)0x76,  /* [1123] */
    (xdc_Char)0x65,  /* [1124] */
    (xdc_Char)0x6e,  /* [1125] */
    (xdc_Char)0x74,  /* [1126] */
    (xdc_Char)0x2e,  /* [1127] */
    (xdc_Char)0x73,  /* [1128] */
    (xdc_Char)0x75,  /* [1129] */
    (xdc_Char)0x70,  /* [1130] */
    (xdc_Char)0x70,  /* [1131] */
    (xdc_Char)0x6f,  /* [1132] */
    (xdc_Char)0x72,  /* [1133] */
    (xdc_Char)0x74,  /* [1134] */
    (xdc_Char)0x73,  /* [1135] */
    (xdc_Char)0x45,  /* [1136] */
    (xdc_Char)0x76,  /* [1137] */
    (xdc_Char)0x65,  /* [1138] */
    (xdc_Char)0x6e,  /* [1139] */
    (xdc_Char)0x74,  /* [1140] */
    (xdc_Char)0x73,  /* [1141] */
    (xdc_Char)0x20,  /* [1142] */
    (xdc_Char)0x66,  /* [1143] */
    (xdc_Char)0x6c,  /* [1144] */
    (xdc_Char)0x61,  /* [1145] */
    (xdc_Char)0x67,  /* [1146] */
    (xdc_Char)0x20,  /* [1147] */
    (xdc_Char)0x69,  /* [1148] */
    (xdc_Char)0x73,  /* [1149] */
    (xdc_Char)0x20,  /* [1150] */
    (xdc_Char)0x64,  /* [1151] */
    (xdc_Char)0x69,  /* [1152] */
    (xdc_Char)0x73,  /* [1153] */
    (xdc_Char)0x61,  /* [1154] */
    (xdc_Char)0x62,  /* [1155] */
    (xdc_Char)0x6c,  /* [1156] */
    (xdc_Char)0x65,  /* [1157] */
    (xdc_Char)0x64,  /* [1158] */
    (xdc_Char)0x2e,  /* [1159] */
    (xdc_Char)0x0,  /* [1160] */
    (xdc_Char)0x41,  /* [1161] */
    (xdc_Char)0x5f,  /* [1162] */
    (xdc_Char)0x69,  /* [1163] */
    (xdc_Char)0x6e,  /* [1164] */
    (xdc_Char)0x76,  /* [1165] */
    (xdc_Char)0x54,  /* [1166] */
    (xdc_Char)0x69,  /* [1167] */
    (xdc_Char)0x6d,  /* [1168] */
    (xdc_Char)0x65,  /* [1169] */
    (xdc_Char)0x6f,  /* [1170] */
    (xdc_Char)0x75,  /* [1171] */
    (xdc_Char)0x74,  /* [1172] */
    (xdc_Char)0x3a,  /* [1173] */
    (xdc_Char)0x20,  /* [1174] */
    (xdc_Char)0x43,  /* [1175] */
    (xdc_Char)0x61,  /* [1176] */
    (xdc_Char)0x6e,  /* [1177] */
    (xdc_Char)0x27,  /* [1178] */
    (xdc_Char)0x74,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x75,  /* [1181] */
    (xdc_Char)0x73,  /* [1182] */
    (xdc_Char)0x65,  /* [1183] */
    (xdc_Char)0x20,  /* [1184] */
    (xdc_Char)0x42,  /* [1185] */
    (xdc_Char)0x49,  /* [1186] */
    (xdc_Char)0x4f,  /* [1187] */
    (xdc_Char)0x53,  /* [1188] */
    (xdc_Char)0x5f,  /* [1189] */
    (xdc_Char)0x45,  /* [1190] */
    (xdc_Char)0x56,  /* [1191] */
    (xdc_Char)0x45,  /* [1192] */
    (xdc_Char)0x4e,  /* [1193] */
    (xdc_Char)0x54,  /* [1194] */
    (xdc_Char)0x5f,  /* [1195] */
    (xdc_Char)0x41,  /* [1196] */
    (xdc_Char)0x43,  /* [1197] */
    (xdc_Char)0x51,  /* [1198] */
    (xdc_Char)0x55,  /* [1199] */
    (xdc_Char)0x49,  /* [1200] */
    (xdc_Char)0x52,  /* [1201] */
    (xdc_Char)0x45,  /* [1202] */
    (xdc_Char)0x44,  /* [1203] */
    (xdc_Char)0x20,  /* [1204] */
    (xdc_Char)0x77,  /* [1205] */
    (xdc_Char)0x69,  /* [1206] */
    (xdc_Char)0x74,  /* [1207] */
    (xdc_Char)0x68,  /* [1208] */
    (xdc_Char)0x20,  /* [1209] */
    (xdc_Char)0x74,  /* [1210] */
    (xdc_Char)0x68,  /* [1211] */
    (xdc_Char)0x69,  /* [1212] */
    (xdc_Char)0x73,  /* [1213] */
    (xdc_Char)0x20,  /* [1214] */
    (xdc_Char)0x53,  /* [1215] */
    (xdc_Char)0x65,  /* [1216] */
    (xdc_Char)0x6d,  /* [1217] */
    (xdc_Char)0x61,  /* [1218] */
    (xdc_Char)0x70,  /* [1219] */
    (xdc_Char)0x68,  /* [1220] */
    (xdc_Char)0x6f,  /* [1221] */
    (xdc_Char)0x72,  /* [1222] */
    (xdc_Char)0x65,  /* [1223] */
    (xdc_Char)0x2e,  /* [1224] */
    (xdc_Char)0x0,  /* [1225] */
    (xdc_Char)0x41,  /* [1226] */
    (xdc_Char)0x5f,  /* [1227] */
    (xdc_Char)0x6f,  /* [1228] */
    (xdc_Char)0x76,  /* [1229] */
    (xdc_Char)0x65,  /* [1230] */
    (xdc_Char)0x72,  /* [1231] */
    (xdc_Char)0x66,  /* [1232] */
    (xdc_Char)0x6c,  /* [1233] */
    (xdc_Char)0x6f,  /* [1234] */
    (xdc_Char)0x77,  /* [1235] */
    (xdc_Char)0x3a,  /* [1236] */
    (xdc_Char)0x20,  /* [1237] */
    (xdc_Char)0x43,  /* [1238] */
    (xdc_Char)0x6f,  /* [1239] */
    (xdc_Char)0x75,  /* [1240] */
    (xdc_Char)0x6e,  /* [1241] */
    (xdc_Char)0x74,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x68,  /* [1244] */
    (xdc_Char)0x61,  /* [1245] */
    (xdc_Char)0x73,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x65,  /* [1248] */
    (xdc_Char)0x78,  /* [1249] */
    (xdc_Char)0x63,  /* [1250] */
    (xdc_Char)0x65,  /* [1251] */
    (xdc_Char)0x65,  /* [1252] */
    (xdc_Char)0x64,  /* [1253] */
    (xdc_Char)0x65,  /* [1254] */
    (xdc_Char)0x64,  /* [1255] */
    (xdc_Char)0x20,  /* [1256] */
    (xdc_Char)0x36,  /* [1257] */
    (xdc_Char)0x35,  /* [1258] */
    (xdc_Char)0x35,  /* [1259] */
    (xdc_Char)0x33,  /* [1260] */
    (xdc_Char)0x35,  /* [1261] */
    (xdc_Char)0x20,  /* [1262] */
    (xdc_Char)0x61,  /* [1263] */
    (xdc_Char)0x6e,  /* [1264] */
    (xdc_Char)0x64,  /* [1265] */
    (xdc_Char)0x20,  /* [1266] */
    (xdc_Char)0x72,  /* [1267] */
    (xdc_Char)0x6f,  /* [1268] */
    (xdc_Char)0x6c,  /* [1269] */
    (xdc_Char)0x6c,  /* [1270] */
    (xdc_Char)0x65,  /* [1271] */
    (xdc_Char)0x64,  /* [1272] */
    (xdc_Char)0x20,  /* [1273] */
    (xdc_Char)0x6f,  /* [1274] */
    (xdc_Char)0x76,  /* [1275] */
    (xdc_Char)0x65,  /* [1276] */
    (xdc_Char)0x72,  /* [1277] */
    (xdc_Char)0x2e,  /* [1278] */
    (xdc_Char)0x0,  /* [1279] */
    (xdc_Char)0x41,  /* [1280] */
    (xdc_Char)0x5f,  /* [1281] */
    (xdc_Char)0x70,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x64,  /* [1285] */
    (xdc_Char)0x54,  /* [1286] */
    (xdc_Char)0x61,  /* [1287] */
    (xdc_Char)0x73,  /* [1288] */
    (xdc_Char)0x6b,  /* [1289] */
    (xdc_Char)0x44,  /* [1290] */
    (xdc_Char)0x69,  /* [1291] */
    (xdc_Char)0x73,  /* [1292] */
    (xdc_Char)0x61,  /* [1293] */
    (xdc_Char)0x62,  /* [1294] */
    (xdc_Char)0x6c,  /* [1295] */
    (xdc_Char)0x65,  /* [1296] */
    (xdc_Char)0x64,  /* [1297] */
    (xdc_Char)0x3a,  /* [1298] */
    (xdc_Char)0x20,  /* [1299] */
    (xdc_Char)0x43,  /* [1300] */
    (xdc_Char)0x61,  /* [1301] */
    (xdc_Char)0x6e,  /* [1302] */
    (xdc_Char)0x6e,  /* [1303] */
    (xdc_Char)0x6f,  /* [1304] */
    (xdc_Char)0x74,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x63,  /* [1307] */
    (xdc_Char)0x61,  /* [1308] */
    (xdc_Char)0x6c,  /* [1309] */
    (xdc_Char)0x6c,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x53,  /* [1312] */
    (xdc_Char)0x65,  /* [1313] */
    (xdc_Char)0x6d,  /* [1314] */
    (xdc_Char)0x61,  /* [1315] */
    (xdc_Char)0x70,  /* [1316] */
    (xdc_Char)0x68,  /* [1317] */
    (xdc_Char)0x6f,  /* [1318] */
    (xdc_Char)0x72,  /* [1319] */
    (xdc_Char)0x65,  /* [1320] */
    (xdc_Char)0x5f,  /* [1321] */
    (xdc_Char)0x70,  /* [1322] */
    (xdc_Char)0x65,  /* [1323] */
    (xdc_Char)0x6e,  /* [1324] */
    (xdc_Char)0x64,  /* [1325] */
    (xdc_Char)0x28,  /* [1326] */
    (xdc_Char)0x29,  /* [1327] */
    (xdc_Char)0x20,  /* [1328] */
    (xdc_Char)0x77,  /* [1329] */
    (xdc_Char)0x68,  /* [1330] */
    (xdc_Char)0x69,  /* [1331] */
    (xdc_Char)0x6c,  /* [1332] */
    (xdc_Char)0x65,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x74,  /* [1335] */
    (xdc_Char)0x68,  /* [1336] */
    (xdc_Char)0x65,  /* [1337] */
    (xdc_Char)0x20,  /* [1338] */
    (xdc_Char)0x54,  /* [1339] */
    (xdc_Char)0x61,  /* [1340] */
    (xdc_Char)0x73,  /* [1341] */
    (xdc_Char)0x6b,  /* [1342] */
    (xdc_Char)0x20,  /* [1343] */
    (xdc_Char)0x6f,  /* [1344] */
    (xdc_Char)0x72,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x53,  /* [1347] */
    (xdc_Char)0x77,  /* [1348] */
    (xdc_Char)0x69,  /* [1349] */
    (xdc_Char)0x20,  /* [1350] */
    (xdc_Char)0x73,  /* [1351] */
    (xdc_Char)0x63,  /* [1352] */
    (xdc_Char)0x68,  /* [1353] */
    (xdc_Char)0x65,  /* [1354] */
    (xdc_Char)0x64,  /* [1355] */
    (xdc_Char)0x75,  /* [1356] */
    (xdc_Char)0x6c,  /* [1357] */
    (xdc_Char)0x65,  /* [1358] */
    (xdc_Char)0x72,  /* [1359] */
    (xdc_Char)0x20,  /* [1360] */
    (xdc_Char)0x69,  /* [1361] */
    (xdc_Char)0x73,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x64,  /* [1364] */
    (xdc_Char)0x69,  /* [1365] */
    (xdc_Char)0x73,  /* [1366] */
    (xdc_Char)0x61,  /* [1367] */
    (xdc_Char)0x62,  /* [1368] */
    (xdc_Char)0x6c,  /* [1369] */
    (xdc_Char)0x65,  /* [1370] */
    (xdc_Char)0x64,  /* [1371] */
    (xdc_Char)0x2e,  /* [1372] */
    (xdc_Char)0x0,  /* [1373] */
    (xdc_Char)0x41,  /* [1374] */
    (xdc_Char)0x5f,  /* [1375] */
    (xdc_Char)0x73,  /* [1376] */
    (xdc_Char)0x77,  /* [1377] */
    (xdc_Char)0x69,  /* [1378] */
    (xdc_Char)0x44,  /* [1379] */
    (xdc_Char)0x69,  /* [1380] */
    (xdc_Char)0x73,  /* [1381] */
    (xdc_Char)0x61,  /* [1382] */
    (xdc_Char)0x62,  /* [1383] */
    (xdc_Char)0x6c,  /* [1384] */
    (xdc_Char)0x65,  /* [1385] */
    (xdc_Char)0x64,  /* [1386] */
    (xdc_Char)0x3a,  /* [1387] */
    (xdc_Char)0x20,  /* [1388] */
    (xdc_Char)0x43,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x6e,  /* [1392] */
    (xdc_Char)0x6f,  /* [1393] */
    (xdc_Char)0x74,  /* [1394] */
    (xdc_Char)0x20,  /* [1395] */
    (xdc_Char)0x63,  /* [1396] */
    (xdc_Char)0x72,  /* [1397] */
    (xdc_Char)0x65,  /* [1398] */
    (xdc_Char)0x61,  /* [1399] */
    (xdc_Char)0x74,  /* [1400] */
    (xdc_Char)0x65,  /* [1401] */
    (xdc_Char)0x20,  /* [1402] */
    (xdc_Char)0x61,  /* [1403] */
    (xdc_Char)0x20,  /* [1404] */
    (xdc_Char)0x53,  /* [1405] */
    (xdc_Char)0x77,  /* [1406] */
    (xdc_Char)0x69,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x77,  /* [1409] */
    (xdc_Char)0x68,  /* [1410] */
    (xdc_Char)0x65,  /* [1411] */
    (xdc_Char)0x6e,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x53,  /* [1414] */
    (xdc_Char)0x77,  /* [1415] */
    (xdc_Char)0x69,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x69,  /* [1418] */
    (xdc_Char)0x73,  /* [1419] */
    (xdc_Char)0x20,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x69,  /* [1422] */
    (xdc_Char)0x73,  /* [1423] */
    (xdc_Char)0x61,  /* [1424] */
    (xdc_Char)0x62,  /* [1425] */
    (xdc_Char)0x6c,  /* [1426] */
    (xdc_Char)0x65,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x2e,  /* [1429] */
    (xdc_Char)0x0,  /* [1430] */
    (xdc_Char)0x41,  /* [1431] */
    (xdc_Char)0x5f,  /* [1432] */
    (xdc_Char)0x62,  /* [1433] */
    (xdc_Char)0x61,  /* [1434] */
    (xdc_Char)0x64,  /* [1435] */
    (xdc_Char)0x50,  /* [1436] */
    (xdc_Char)0x72,  /* [1437] */
    (xdc_Char)0x69,  /* [1438] */
    (xdc_Char)0x6f,  /* [1439] */
    (xdc_Char)0x72,  /* [1440] */
    (xdc_Char)0x69,  /* [1441] */
    (xdc_Char)0x74,  /* [1442] */
    (xdc_Char)0x79,  /* [1443] */
    (xdc_Char)0x3a,  /* [1444] */
    (xdc_Char)0x20,  /* [1445] */
    (xdc_Char)0x41,  /* [1446] */
    (xdc_Char)0x6e,  /* [1447] */
    (xdc_Char)0x20,  /* [1448] */
    (xdc_Char)0x69,  /* [1449] */
    (xdc_Char)0x6e,  /* [1450] */
    (xdc_Char)0x76,  /* [1451] */
    (xdc_Char)0x61,  /* [1452] */
    (xdc_Char)0x6c,  /* [1453] */
    (xdc_Char)0x69,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x20,  /* [1456] */
    (xdc_Char)0x53,  /* [1457] */
    (xdc_Char)0x77,  /* [1458] */
    (xdc_Char)0x69,  /* [1459] */
    (xdc_Char)0x20,  /* [1460] */
    (xdc_Char)0x70,  /* [1461] */
    (xdc_Char)0x72,  /* [1462] */
    (xdc_Char)0x69,  /* [1463] */
    (xdc_Char)0x6f,  /* [1464] */
    (xdc_Char)0x72,  /* [1465] */
    (xdc_Char)0x69,  /* [1466] */
    (xdc_Char)0x74,  /* [1467] */
    (xdc_Char)0x79,  /* [1468] */
    (xdc_Char)0x20,  /* [1469] */
    (xdc_Char)0x77,  /* [1470] */
    (xdc_Char)0x61,  /* [1471] */
    (xdc_Char)0x73,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x75,  /* [1474] */
    (xdc_Char)0x73,  /* [1475] */
    (xdc_Char)0x65,  /* [1476] */
    (xdc_Char)0x64,  /* [1477] */
    (xdc_Char)0x2e,  /* [1478] */
    (xdc_Char)0x0,  /* [1479] */
    (xdc_Char)0x41,  /* [1480] */
    (xdc_Char)0x5f,  /* [1481] */
    (xdc_Char)0x62,  /* [1482] */
    (xdc_Char)0x61,  /* [1483] */
    (xdc_Char)0x64,  /* [1484] */
    (xdc_Char)0x54,  /* [1485] */
    (xdc_Char)0x68,  /* [1486] */
    (xdc_Char)0x72,  /* [1487] */
    (xdc_Char)0x65,  /* [1488] */
    (xdc_Char)0x61,  /* [1489] */
    (xdc_Char)0x64,  /* [1490] */
    (xdc_Char)0x54,  /* [1491] */
    (xdc_Char)0x79,  /* [1492] */
    (xdc_Char)0x70,  /* [1493] */
    (xdc_Char)0x65,  /* [1494] */
    (xdc_Char)0x3a,  /* [1495] */
    (xdc_Char)0x20,  /* [1496] */
    (xdc_Char)0x43,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x6e,  /* [1499] */
    (xdc_Char)0x6e,  /* [1500] */
    (xdc_Char)0x6f,  /* [1501] */
    (xdc_Char)0x74,  /* [1502] */
    (xdc_Char)0x20,  /* [1503] */
    (xdc_Char)0x63,  /* [1504] */
    (xdc_Char)0x72,  /* [1505] */
    (xdc_Char)0x65,  /* [1506] */
    (xdc_Char)0x61,  /* [1507] */
    (xdc_Char)0x74,  /* [1508] */
    (xdc_Char)0x65,  /* [1509] */
    (xdc_Char)0x2f,  /* [1510] */
    (xdc_Char)0x64,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x6c,  /* [1513] */
    (xdc_Char)0x65,  /* [1514] */
    (xdc_Char)0x74,  /* [1515] */
    (xdc_Char)0x65,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x61,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x74,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x73,  /* [1522] */
    (xdc_Char)0x6b,  /* [1523] */
    (xdc_Char)0x20,  /* [1524] */
    (xdc_Char)0x66,  /* [1525] */
    (xdc_Char)0x72,  /* [1526] */
    (xdc_Char)0x6f,  /* [1527] */
    (xdc_Char)0x6d,  /* [1528] */
    (xdc_Char)0x20,  /* [1529] */
    (xdc_Char)0x48,  /* [1530] */
    (xdc_Char)0x77,  /* [1531] */
    (xdc_Char)0x69,  /* [1532] */
    (xdc_Char)0x20,  /* [1533] */
    (xdc_Char)0x6f,  /* [1534] */
    (xdc_Char)0x72,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x53,  /* [1537] */
    (xdc_Char)0x77,  /* [1538] */
    (xdc_Char)0x69,  /* [1539] */
    (xdc_Char)0x20,  /* [1540] */
    (xdc_Char)0x74,  /* [1541] */
    (xdc_Char)0x68,  /* [1542] */
    (xdc_Char)0x72,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x61,  /* [1545] */
    (xdc_Char)0x64,  /* [1546] */
    (xdc_Char)0x2e,  /* [1547] */
    (xdc_Char)0x0,  /* [1548] */
    (xdc_Char)0x41,  /* [1549] */
    (xdc_Char)0x5f,  /* [1550] */
    (xdc_Char)0x62,  /* [1551] */
    (xdc_Char)0x61,  /* [1552] */
    (xdc_Char)0x64,  /* [1553] */
    (xdc_Char)0x54,  /* [1554] */
    (xdc_Char)0x61,  /* [1555] */
    (xdc_Char)0x73,  /* [1556] */
    (xdc_Char)0x6b,  /* [1557] */
    (xdc_Char)0x53,  /* [1558] */
    (xdc_Char)0x74,  /* [1559] */
    (xdc_Char)0x61,  /* [1560] */
    (xdc_Char)0x74,  /* [1561] */
    (xdc_Char)0x65,  /* [1562] */
    (xdc_Char)0x3a,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x43,  /* [1565] */
    (xdc_Char)0x61,  /* [1566] */
    (xdc_Char)0x6e,  /* [1567] */
    (xdc_Char)0x27,  /* [1568] */
    (xdc_Char)0x74,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x64,  /* [1571] */
    (xdc_Char)0x65,  /* [1572] */
    (xdc_Char)0x6c,  /* [1573] */
    (xdc_Char)0x65,  /* [1574] */
    (xdc_Char)0x74,  /* [1575] */
    (xdc_Char)0x65,  /* [1576] */
    (xdc_Char)0x20,  /* [1577] */
    (xdc_Char)0x61,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x74,  /* [1580] */
    (xdc_Char)0x61,  /* [1581] */
    (xdc_Char)0x73,  /* [1582] */
    (xdc_Char)0x6b,  /* [1583] */
    (xdc_Char)0x20,  /* [1584] */
    (xdc_Char)0x69,  /* [1585] */
    (xdc_Char)0x6e,  /* [1586] */
    (xdc_Char)0x20,  /* [1587] */
    (xdc_Char)0x52,  /* [1588] */
    (xdc_Char)0x55,  /* [1589] */
    (xdc_Char)0x4e,  /* [1590] */
    (xdc_Char)0x4e,  /* [1591] */
    (xdc_Char)0x49,  /* [1592] */
    (xdc_Char)0x4e,  /* [1593] */
    (xdc_Char)0x47,  /* [1594] */
    (xdc_Char)0x20,  /* [1595] */
    (xdc_Char)0x73,  /* [1596] */
    (xdc_Char)0x74,  /* [1597] */
    (xdc_Char)0x61,  /* [1598] */
    (xdc_Char)0x74,  /* [1599] */
    (xdc_Char)0x65,  /* [1600] */
    (xdc_Char)0x2e,  /* [1601] */
    (xdc_Char)0x0,  /* [1602] */
    (xdc_Char)0x41,  /* [1603] */
    (xdc_Char)0x5f,  /* [1604] */
    (xdc_Char)0x6e,  /* [1605] */
    (xdc_Char)0x6f,  /* [1606] */
    (xdc_Char)0x50,  /* [1607] */
    (xdc_Char)0x65,  /* [1608] */
    (xdc_Char)0x6e,  /* [1609] */
    (xdc_Char)0x64,  /* [1610] */
    (xdc_Char)0x45,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x6d,  /* [1614] */
    (xdc_Char)0x3a,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x4e,  /* [1617] */
    (xdc_Char)0x6f,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x20,  /* [1620] */
    (xdc_Char)0x65,  /* [1621] */
    (xdc_Char)0x6e,  /* [1622] */
    (xdc_Char)0x6f,  /* [1623] */
    (xdc_Char)0x75,  /* [1624] */
    (xdc_Char)0x67,  /* [1625] */
    (xdc_Char)0x68,  /* [1626] */
    (xdc_Char)0x20,  /* [1627] */
    (xdc_Char)0x69,  /* [1628] */
    (xdc_Char)0x6e,  /* [1629] */
    (xdc_Char)0x66,  /* [1630] */
    (xdc_Char)0x6f,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x74,  /* [1633] */
    (xdc_Char)0x6f,  /* [1634] */
    (xdc_Char)0x20,  /* [1635] */
    (xdc_Char)0x64,  /* [1636] */
    (xdc_Char)0x65,  /* [1637] */
    (xdc_Char)0x6c,  /* [1638] */
    (xdc_Char)0x65,  /* [1639] */
    (xdc_Char)0x74,  /* [1640] */
    (xdc_Char)0x65,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x42,  /* [1643] */
    (xdc_Char)0x4c,  /* [1644] */
    (xdc_Char)0x4f,  /* [1645] */
    (xdc_Char)0x43,  /* [1646] */
    (xdc_Char)0x4b,  /* [1647] */
    (xdc_Char)0x45,  /* [1648] */
    (xdc_Char)0x44,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x74,  /* [1651] */
    (xdc_Char)0x61,  /* [1652] */
    (xdc_Char)0x73,  /* [1653] */
    (xdc_Char)0x6b,  /* [1654] */
    (xdc_Char)0x2e,  /* [1655] */
    (xdc_Char)0x0,  /* [1656] */
    (xdc_Char)0x41,  /* [1657] */
    (xdc_Char)0x5f,  /* [1658] */
    (xdc_Char)0x74,  /* [1659] */
    (xdc_Char)0x61,  /* [1660] */
    (xdc_Char)0x73,  /* [1661] */
    (xdc_Char)0x6b,  /* [1662] */
    (xdc_Char)0x44,  /* [1663] */
    (xdc_Char)0x69,  /* [1664] */
    (xdc_Char)0x73,  /* [1665] */
    (xdc_Char)0x61,  /* [1666] */
    (xdc_Char)0x62,  /* [1667] */
    (xdc_Char)0x6c,  /* [1668] */
    (xdc_Char)0x65,  /* [1669] */
    (xdc_Char)0x64,  /* [1670] */
    (xdc_Char)0x3a,  /* [1671] */
    (xdc_Char)0x20,  /* [1672] */
    (xdc_Char)0x43,  /* [1673] */
    (xdc_Char)0x61,  /* [1674] */
    (xdc_Char)0x6e,  /* [1675] */
    (xdc_Char)0x6e,  /* [1676] */
    (xdc_Char)0x6f,  /* [1677] */
    (xdc_Char)0x74,  /* [1678] */
    (xdc_Char)0x20,  /* [1679] */
    (xdc_Char)0x63,  /* [1680] */
    (xdc_Char)0x72,  /* [1681] */
    (xdc_Char)0x65,  /* [1682] */
    (xdc_Char)0x61,  /* [1683] */
    (xdc_Char)0x74,  /* [1684] */
    (xdc_Char)0x65,  /* [1685] */
    (xdc_Char)0x20,  /* [1686] */
    (xdc_Char)0x61,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x74,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x73,  /* [1691] */
    (xdc_Char)0x6b,  /* [1692] */
    (xdc_Char)0x20,  /* [1693] */
    (xdc_Char)0x77,  /* [1694] */
    (xdc_Char)0x68,  /* [1695] */
    (xdc_Char)0x65,  /* [1696] */
    (xdc_Char)0x6e,  /* [1697] */
    (xdc_Char)0x20,  /* [1698] */
    (xdc_Char)0x74,  /* [1699] */
    (xdc_Char)0x61,  /* [1700] */
    (xdc_Char)0x73,  /* [1701] */
    (xdc_Char)0x6b,  /* [1702] */
    (xdc_Char)0x69,  /* [1703] */
    (xdc_Char)0x6e,  /* [1704] */
    (xdc_Char)0x67,  /* [1705] */
    (xdc_Char)0x20,  /* [1706] */
    (xdc_Char)0x69,  /* [1707] */
    (xdc_Char)0x73,  /* [1708] */
    (xdc_Char)0x20,  /* [1709] */
    (xdc_Char)0x64,  /* [1710] */
    (xdc_Char)0x69,  /* [1711] */
    (xdc_Char)0x73,  /* [1712] */
    (xdc_Char)0x61,  /* [1713] */
    (xdc_Char)0x62,  /* [1714] */
    (xdc_Char)0x6c,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x64,  /* [1717] */
    (xdc_Char)0x2e,  /* [1718] */
    (xdc_Char)0x0,  /* [1719] */
    (xdc_Char)0x41,  /* [1720] */
    (xdc_Char)0x5f,  /* [1721] */
    (xdc_Char)0x62,  /* [1722] */
    (xdc_Char)0x61,  /* [1723] */
    (xdc_Char)0x64,  /* [1724] */
    (xdc_Char)0x50,  /* [1725] */
    (xdc_Char)0x72,  /* [1726] */
    (xdc_Char)0x69,  /* [1727] */
    (xdc_Char)0x6f,  /* [1728] */
    (xdc_Char)0x72,  /* [1729] */
    (xdc_Char)0x69,  /* [1730] */
    (xdc_Char)0x74,  /* [1731] */
    (xdc_Char)0x79,  /* [1732] */
    (xdc_Char)0x3a,  /* [1733] */
    (xdc_Char)0x20,  /* [1734] */
    (xdc_Char)0x41,  /* [1735] */
    (xdc_Char)0x6e,  /* [1736] */
    (xdc_Char)0x20,  /* [1737] */
    (xdc_Char)0x69,  /* [1738] */
    (xdc_Char)0x6e,  /* [1739] */
    (xdc_Char)0x76,  /* [1740] */
    (xdc_Char)0x61,  /* [1741] */
    (xdc_Char)0x6c,  /* [1742] */
    (xdc_Char)0x69,  /* [1743] */
    (xdc_Char)0x64,  /* [1744] */
    (xdc_Char)0x20,  /* [1745] */
    (xdc_Char)0x74,  /* [1746] */
    (xdc_Char)0x61,  /* [1747] */
    (xdc_Char)0x73,  /* [1748] */
    (xdc_Char)0x6b,  /* [1749] */
    (xdc_Char)0x20,  /* [1750] */
    (xdc_Char)0x70,  /* [1751] */
    (xdc_Char)0x72,  /* [1752] */
    (xdc_Char)0x69,  /* [1753] */
    (xdc_Char)0x6f,  /* [1754] */
    (xdc_Char)0x72,  /* [1755] */
    (xdc_Char)0x69,  /* [1756] */
    (xdc_Char)0x74,  /* [1757] */
    (xdc_Char)0x79,  /* [1758] */
    (xdc_Char)0x20,  /* [1759] */
    (xdc_Char)0x77,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x73,  /* [1762] */
    (xdc_Char)0x20,  /* [1763] */
    (xdc_Char)0x75,  /* [1764] */
    (xdc_Char)0x73,  /* [1765] */
    (xdc_Char)0x65,  /* [1766] */
    (xdc_Char)0x64,  /* [1767] */
    (xdc_Char)0x2e,  /* [1768] */
    (xdc_Char)0x0,  /* [1769] */
    (xdc_Char)0x41,  /* [1770] */
    (xdc_Char)0x5f,  /* [1771] */
    (xdc_Char)0x62,  /* [1772] */
    (xdc_Char)0x61,  /* [1773] */
    (xdc_Char)0x64,  /* [1774] */
    (xdc_Char)0x54,  /* [1775] */
    (xdc_Char)0x69,  /* [1776] */
    (xdc_Char)0x6d,  /* [1777] */
    (xdc_Char)0x65,  /* [1778] */
    (xdc_Char)0x6f,  /* [1779] */
    (xdc_Char)0x75,  /* [1780] */
    (xdc_Char)0x74,  /* [1781] */
    (xdc_Char)0x3a,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x43,  /* [1784] */
    (xdc_Char)0x61,  /* [1785] */
    (xdc_Char)0x6e,  /* [1786] */
    (xdc_Char)0x27,  /* [1787] */
    (xdc_Char)0x74,  /* [1788] */
    (xdc_Char)0x20,  /* [1789] */
    (xdc_Char)0x73,  /* [1790] */
    (xdc_Char)0x6c,  /* [1791] */
    (xdc_Char)0x65,  /* [1792] */
    (xdc_Char)0x65,  /* [1793] */
    (xdc_Char)0x70,  /* [1794] */
    (xdc_Char)0x20,  /* [1795] */
    (xdc_Char)0x46,  /* [1796] */
    (xdc_Char)0x4f,  /* [1797] */
    (xdc_Char)0x52,  /* [1798] */
    (xdc_Char)0x45,  /* [1799] */
    (xdc_Char)0x56,  /* [1800] */
    (xdc_Char)0x45,  /* [1801] */
    (xdc_Char)0x52,  /* [1802] */
    (xdc_Char)0x2e,  /* [1803] */
    (xdc_Char)0x0,  /* [1804] */
    (xdc_Char)0x41,  /* [1805] */
    (xdc_Char)0x5f,  /* [1806] */
    (xdc_Char)0x62,  /* [1807] */
    (xdc_Char)0x61,  /* [1808] */
    (xdc_Char)0x64,  /* [1809] */
    (xdc_Char)0x41,  /* [1810] */
    (xdc_Char)0x66,  /* [1811] */
    (xdc_Char)0x66,  /* [1812] */
    (xdc_Char)0x69,  /* [1813] */
    (xdc_Char)0x6e,  /* [1814] */
    (xdc_Char)0x69,  /* [1815] */
    (xdc_Char)0x74,  /* [1816] */
    (xdc_Char)0x79,  /* [1817] */
    (xdc_Char)0x3a,  /* [1818] */
    (xdc_Char)0x20,  /* [1819] */
    (xdc_Char)0x49,  /* [1820] */
    (xdc_Char)0x6e,  /* [1821] */
    (xdc_Char)0x76,  /* [1822] */
    (xdc_Char)0x61,  /* [1823] */
    (xdc_Char)0x6c,  /* [1824] */
    (xdc_Char)0x69,  /* [1825] */
    (xdc_Char)0x64,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x61,  /* [1828] */
    (xdc_Char)0x66,  /* [1829] */
    (xdc_Char)0x66,  /* [1830] */
    (xdc_Char)0x69,  /* [1831] */
    (xdc_Char)0x6e,  /* [1832] */
    (xdc_Char)0x69,  /* [1833] */
    (xdc_Char)0x74,  /* [1834] */
    (xdc_Char)0x79,  /* [1835] */
    (xdc_Char)0x2e,  /* [1836] */
    (xdc_Char)0x0,  /* [1837] */
    (xdc_Char)0x41,  /* [1838] */
    (xdc_Char)0x5f,  /* [1839] */
    (xdc_Char)0x73,  /* [1840] */
    (xdc_Char)0x6c,  /* [1841] */
    (xdc_Char)0x65,  /* [1842] */
    (xdc_Char)0x65,  /* [1843] */
    (xdc_Char)0x70,  /* [1844] */
    (xdc_Char)0x54,  /* [1845] */
    (xdc_Char)0x61,  /* [1846] */
    (xdc_Char)0x73,  /* [1847] */
    (xdc_Char)0x6b,  /* [1848] */
    (xdc_Char)0x44,  /* [1849] */
    (xdc_Char)0x69,  /* [1850] */
    (xdc_Char)0x73,  /* [1851] */
    (xdc_Char)0x61,  /* [1852] */
    (xdc_Char)0x62,  /* [1853] */
    (xdc_Char)0x6c,  /* [1854] */
    (xdc_Char)0x65,  /* [1855] */
    (xdc_Char)0x64,  /* [1856] */
    (xdc_Char)0x3a,  /* [1857] */
    (xdc_Char)0x20,  /* [1858] */
    (xdc_Char)0x43,  /* [1859] */
    (xdc_Char)0x61,  /* [1860] */
    (xdc_Char)0x6e,  /* [1861] */
    (xdc_Char)0x6e,  /* [1862] */
    (xdc_Char)0x6f,  /* [1863] */
    (xdc_Char)0x74,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x63,  /* [1866] */
    (xdc_Char)0x61,  /* [1867] */
    (xdc_Char)0x6c,  /* [1868] */
    (xdc_Char)0x6c,  /* [1869] */
    (xdc_Char)0x20,  /* [1870] */
    (xdc_Char)0x54,  /* [1871] */
    (xdc_Char)0x61,  /* [1872] */
    (xdc_Char)0x73,  /* [1873] */
    (xdc_Char)0x6b,  /* [1874] */
    (xdc_Char)0x5f,  /* [1875] */
    (xdc_Char)0x73,  /* [1876] */
    (xdc_Char)0x6c,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x65,  /* [1879] */
    (xdc_Char)0x70,  /* [1880] */
    (xdc_Char)0x28,  /* [1881] */
    (xdc_Char)0x29,  /* [1882] */
    (xdc_Char)0x20,  /* [1883] */
    (xdc_Char)0x77,  /* [1884] */
    (xdc_Char)0x68,  /* [1885] */
    (xdc_Char)0x69,  /* [1886] */
    (xdc_Char)0x6c,  /* [1887] */
    (xdc_Char)0x65,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x74,  /* [1890] */
    (xdc_Char)0x68,  /* [1891] */
    (xdc_Char)0x65,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x54,  /* [1894] */
    (xdc_Char)0x61,  /* [1895] */
    (xdc_Char)0x73,  /* [1896] */
    (xdc_Char)0x6b,  /* [1897] */
    (xdc_Char)0x20,  /* [1898] */
    (xdc_Char)0x73,  /* [1899] */
    (xdc_Char)0x63,  /* [1900] */
    (xdc_Char)0x68,  /* [1901] */
    (xdc_Char)0x65,  /* [1902] */
    (xdc_Char)0x64,  /* [1903] */
    (xdc_Char)0x75,  /* [1904] */
    (xdc_Char)0x6c,  /* [1905] */
    (xdc_Char)0x65,  /* [1906] */
    (xdc_Char)0x72,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x69,  /* [1909] */
    (xdc_Char)0x73,  /* [1910] */
    (xdc_Char)0x20,  /* [1911] */
    (xdc_Char)0x64,  /* [1912] */
    (xdc_Char)0x69,  /* [1913] */
    (xdc_Char)0x73,  /* [1914] */
    (xdc_Char)0x61,  /* [1915] */
    (xdc_Char)0x62,  /* [1916] */
    (xdc_Char)0x6c,  /* [1917] */
    (xdc_Char)0x65,  /* [1918] */
    (xdc_Char)0x64,  /* [1919] */
    (xdc_Char)0x2e,  /* [1920] */
    (xdc_Char)0x0,  /* [1921] */
    (xdc_Char)0x41,  /* [1922] */
    (xdc_Char)0x5f,  /* [1923] */
    (xdc_Char)0x69,  /* [1924] */
    (xdc_Char)0x6e,  /* [1925] */
    (xdc_Char)0x76,  /* [1926] */
    (xdc_Char)0x61,  /* [1927] */
    (xdc_Char)0x6c,  /* [1928] */
    (xdc_Char)0x69,  /* [1929] */
    (xdc_Char)0x64,  /* [1930] */
    (xdc_Char)0x43,  /* [1931] */
    (xdc_Char)0x6f,  /* [1932] */
    (xdc_Char)0x72,  /* [1933] */
    (xdc_Char)0x65,  /* [1934] */
    (xdc_Char)0x49,  /* [1935] */
    (xdc_Char)0x64,  /* [1936] */
    (xdc_Char)0x3a,  /* [1937] */
    (xdc_Char)0x20,  /* [1938] */
    (xdc_Char)0x43,  /* [1939] */
    (xdc_Char)0x61,  /* [1940] */
    (xdc_Char)0x6e,  /* [1941] */
    (xdc_Char)0x6e,  /* [1942] */
    (xdc_Char)0x6f,  /* [1943] */
    (xdc_Char)0x74,  /* [1944] */
    (xdc_Char)0x20,  /* [1945] */
    (xdc_Char)0x70,  /* [1946] */
    (xdc_Char)0x61,  /* [1947] */
    (xdc_Char)0x73,  /* [1948] */
    (xdc_Char)0x73,  /* [1949] */
    (xdc_Char)0x20,  /* [1950] */
    (xdc_Char)0x61,  /* [1951] */
    (xdc_Char)0x20,  /* [1952] */
    (xdc_Char)0x6e,  /* [1953] */
    (xdc_Char)0x6f,  /* [1954] */
    (xdc_Char)0x6e,  /* [1955] */
    (xdc_Char)0x2d,  /* [1956] */
    (xdc_Char)0x7a,  /* [1957] */
    (xdc_Char)0x65,  /* [1958] */
    (xdc_Char)0x72,  /* [1959] */
    (xdc_Char)0x6f,  /* [1960] */
    (xdc_Char)0x20,  /* [1961] */
    (xdc_Char)0x43,  /* [1962] */
    (xdc_Char)0x6f,  /* [1963] */
    (xdc_Char)0x72,  /* [1964] */
    (xdc_Char)0x65,  /* [1965] */
    (xdc_Char)0x49,  /* [1966] */
    (xdc_Char)0x64,  /* [1967] */
    (xdc_Char)0x20,  /* [1968] */
    (xdc_Char)0x69,  /* [1969] */
    (xdc_Char)0x6e,  /* [1970] */
    (xdc_Char)0x20,  /* [1971] */
    (xdc_Char)0x61,  /* [1972] */
    (xdc_Char)0x20,  /* [1973] */
    (xdc_Char)0x6e,  /* [1974] */
    (xdc_Char)0x6f,  /* [1975] */
    (xdc_Char)0x6e,  /* [1976] */
    (xdc_Char)0x2d,  /* [1977] */
    (xdc_Char)0x53,  /* [1978] */
    (xdc_Char)0x4d,  /* [1979] */
    (xdc_Char)0x50,  /* [1980] */
    (xdc_Char)0x20,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x70,  /* [1983] */
    (xdc_Char)0x70,  /* [1984] */
    (xdc_Char)0x6c,  /* [1985] */
    (xdc_Char)0x69,  /* [1986] */
    (xdc_Char)0x63,  /* [1987] */
    (xdc_Char)0x61,  /* [1988] */
    (xdc_Char)0x74,  /* [1989] */
    (xdc_Char)0x69,  /* [1990] */
    (xdc_Char)0x6f,  /* [1991] */
    (xdc_Char)0x6e,  /* [1992] */
    (xdc_Char)0x2e,  /* [1993] */
    (xdc_Char)0x0,  /* [1994] */
    (xdc_Char)0x41,  /* [1995] */
    (xdc_Char)0x5f,  /* [1996] */
    (xdc_Char)0x62,  /* [1997] */
    (xdc_Char)0x61,  /* [1998] */
    (xdc_Char)0x64,  /* [1999] */
    (xdc_Char)0x43,  /* [2000] */
    (xdc_Char)0x6f,  /* [2001] */
    (xdc_Char)0x6e,  /* [2002] */
    (xdc_Char)0x74,  /* [2003] */
    (xdc_Char)0x65,  /* [2004] */
    (xdc_Char)0x78,  /* [2005] */
    (xdc_Char)0x74,  /* [2006] */
    (xdc_Char)0x3a,  /* [2007] */
    (xdc_Char)0x20,  /* [2008] */
    (xdc_Char)0x62,  /* [2009] */
    (xdc_Char)0x61,  /* [2010] */
    (xdc_Char)0x64,  /* [2011] */
    (xdc_Char)0x20,  /* [2012] */
    (xdc_Char)0x63,  /* [2013] */
    (xdc_Char)0x61,  /* [2014] */
    (xdc_Char)0x6c,  /* [2015] */
    (xdc_Char)0x6c,  /* [2016] */
    (xdc_Char)0x69,  /* [2017] */
    (xdc_Char)0x6e,  /* [2018] */
    (xdc_Char)0x67,  /* [2019] */
    (xdc_Char)0x20,  /* [2020] */
    (xdc_Char)0x63,  /* [2021] */
    (xdc_Char)0x6f,  /* [2022] */
    (xdc_Char)0x6e,  /* [2023] */
    (xdc_Char)0x74,  /* [2024] */
    (xdc_Char)0x65,  /* [2025] */
    (xdc_Char)0x78,  /* [2026] */
    (xdc_Char)0x74,  /* [2027] */
    (xdc_Char)0x2e,  /* [2028] */
    (xdc_Char)0x20,  /* [2029] */
    (xdc_Char)0x4d,  /* [2030] */
    (xdc_Char)0x61,  /* [2031] */
    (xdc_Char)0x79,  /* [2032] */
    (xdc_Char)0x20,  /* [2033] */
    (xdc_Char)0x6e,  /* [2034] */
    (xdc_Char)0x6f,  /* [2035] */
    (xdc_Char)0x74,  /* [2036] */
    (xdc_Char)0x20,  /* [2037] */
    (xdc_Char)0x62,  /* [2038] */
    (xdc_Char)0x65,  /* [2039] */
    (xdc_Char)0x20,  /* [2040] */
    (xdc_Char)0x65,  /* [2041] */
    (xdc_Char)0x6e,  /* [2042] */
    (xdc_Char)0x74,  /* [2043] */
    (xdc_Char)0x65,  /* [2044] */
    (xdc_Char)0x72,  /* [2045] */
    (xdc_Char)0x65,  /* [2046] */
    (xdc_Char)0x64,  /* [2047] */
    (xdc_Char)0x20,  /* [2048] */
    (xdc_Char)0x66,  /* [2049] */
    (xdc_Char)0x72,  /* [2050] */
    (xdc_Char)0x6f,  /* [2051] */
    (xdc_Char)0x6d,  /* [2052] */
    (xdc_Char)0x20,  /* [2053] */
    (xdc_Char)0x61,  /* [2054] */
    (xdc_Char)0x20,  /* [2055] */
    (xdc_Char)0x68,  /* [2056] */
    (xdc_Char)0x61,  /* [2057] */
    (xdc_Char)0x72,  /* [2058] */
    (xdc_Char)0x64,  /* [2059] */
    (xdc_Char)0x77,  /* [2060] */
    (xdc_Char)0x61,  /* [2061] */
    (xdc_Char)0x72,  /* [2062] */
    (xdc_Char)0x65,  /* [2063] */
    (xdc_Char)0x20,  /* [2064] */
    (xdc_Char)0x69,  /* [2065] */
    (xdc_Char)0x6e,  /* [2066] */
    (xdc_Char)0x74,  /* [2067] */
    (xdc_Char)0x65,  /* [2068] */
    (xdc_Char)0x72,  /* [2069] */
    (xdc_Char)0x72,  /* [2070] */
    (xdc_Char)0x75,  /* [2071] */
    (xdc_Char)0x70,  /* [2072] */
    (xdc_Char)0x74,  /* [2073] */
    (xdc_Char)0x20,  /* [2074] */
    (xdc_Char)0x74,  /* [2075] */
    (xdc_Char)0x68,  /* [2076] */
    (xdc_Char)0x72,  /* [2077] */
    (xdc_Char)0x65,  /* [2078] */
    (xdc_Char)0x61,  /* [2079] */
    (xdc_Char)0x64,  /* [2080] */
    (xdc_Char)0x2e,  /* [2081] */
    (xdc_Char)0x0,  /* [2082] */
    (xdc_Char)0x41,  /* [2083] */
    (xdc_Char)0x5f,  /* [2084] */
    (xdc_Char)0x62,  /* [2085] */
    (xdc_Char)0x61,  /* [2086] */
    (xdc_Char)0x64,  /* [2087] */
    (xdc_Char)0x43,  /* [2088] */
    (xdc_Char)0x6f,  /* [2089] */
    (xdc_Char)0x6e,  /* [2090] */
    (xdc_Char)0x74,  /* [2091] */
    (xdc_Char)0x65,  /* [2092] */
    (xdc_Char)0x78,  /* [2093] */
    (xdc_Char)0x74,  /* [2094] */
    (xdc_Char)0x3a,  /* [2095] */
    (xdc_Char)0x20,  /* [2096] */
    (xdc_Char)0x62,  /* [2097] */
    (xdc_Char)0x61,  /* [2098] */
    (xdc_Char)0x64,  /* [2099] */
    (xdc_Char)0x20,  /* [2100] */
    (xdc_Char)0x63,  /* [2101] */
    (xdc_Char)0x61,  /* [2102] */
    (xdc_Char)0x6c,  /* [2103] */
    (xdc_Char)0x6c,  /* [2104] */
    (xdc_Char)0x69,  /* [2105] */
    (xdc_Char)0x6e,  /* [2106] */
    (xdc_Char)0x67,  /* [2107] */
    (xdc_Char)0x20,  /* [2108] */
    (xdc_Char)0x63,  /* [2109] */
    (xdc_Char)0x6f,  /* [2110] */
    (xdc_Char)0x6e,  /* [2111] */
    (xdc_Char)0x74,  /* [2112] */
    (xdc_Char)0x65,  /* [2113] */
    (xdc_Char)0x78,  /* [2114] */
    (xdc_Char)0x74,  /* [2115] */
    (xdc_Char)0x2e,  /* [2116] */
    (xdc_Char)0x20,  /* [2117] */
    (xdc_Char)0x4d,  /* [2118] */
    (xdc_Char)0x61,  /* [2119] */
    (xdc_Char)0x79,  /* [2120] */
    (xdc_Char)0x20,  /* [2121] */
    (xdc_Char)0x6e,  /* [2122] */
    (xdc_Char)0x6f,  /* [2123] */
    (xdc_Char)0x74,  /* [2124] */
    (xdc_Char)0x20,  /* [2125] */
    (xdc_Char)0x62,  /* [2126] */
    (xdc_Char)0x65,  /* [2127] */
    (xdc_Char)0x20,  /* [2128] */
    (xdc_Char)0x65,  /* [2129] */
    (xdc_Char)0x6e,  /* [2130] */
    (xdc_Char)0x74,  /* [2131] */
    (xdc_Char)0x65,  /* [2132] */
    (xdc_Char)0x72,  /* [2133] */
    (xdc_Char)0x65,  /* [2134] */
    (xdc_Char)0x64,  /* [2135] */
    (xdc_Char)0x20,  /* [2136] */
    (xdc_Char)0x66,  /* [2137] */
    (xdc_Char)0x72,  /* [2138] */
    (xdc_Char)0x6f,  /* [2139] */
    (xdc_Char)0x6d,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x61,  /* [2142] */
    (xdc_Char)0x20,  /* [2143] */
    (xdc_Char)0x73,  /* [2144] */
    (xdc_Char)0x6f,  /* [2145] */
    (xdc_Char)0x66,  /* [2146] */
    (xdc_Char)0x74,  /* [2147] */
    (xdc_Char)0x77,  /* [2148] */
    (xdc_Char)0x61,  /* [2149] */
    (xdc_Char)0x72,  /* [2150] */
    (xdc_Char)0x65,  /* [2151] */
    (xdc_Char)0x20,  /* [2152] */
    (xdc_Char)0x6f,  /* [2153] */
    (xdc_Char)0x72,  /* [2154] */
    (xdc_Char)0x20,  /* [2155] */
    (xdc_Char)0x68,  /* [2156] */
    (xdc_Char)0x61,  /* [2157] */
    (xdc_Char)0x72,  /* [2158] */
    (xdc_Char)0x64,  /* [2159] */
    (xdc_Char)0x77,  /* [2160] */
    (xdc_Char)0x61,  /* [2161] */
    (xdc_Char)0x72,  /* [2162] */
    (xdc_Char)0x65,  /* [2163] */
    (xdc_Char)0x20,  /* [2164] */
    (xdc_Char)0x69,  /* [2165] */
    (xdc_Char)0x6e,  /* [2166] */
    (xdc_Char)0x74,  /* [2167] */
    (xdc_Char)0x65,  /* [2168] */
    (xdc_Char)0x72,  /* [2169] */
    (xdc_Char)0x72,  /* [2170] */
    (xdc_Char)0x75,  /* [2171] */
    (xdc_Char)0x70,  /* [2172] */
    (xdc_Char)0x74,  /* [2173] */
    (xdc_Char)0x20,  /* [2174] */
    (xdc_Char)0x74,  /* [2175] */
    (xdc_Char)0x68,  /* [2176] */
    (xdc_Char)0x72,  /* [2177] */
    (xdc_Char)0x65,  /* [2178] */
    (xdc_Char)0x61,  /* [2179] */
    (xdc_Char)0x64,  /* [2180] */
    (xdc_Char)0x2e,  /* [2181] */
    (xdc_Char)0x0,  /* [2182] */
    (xdc_Char)0x41,  /* [2183] */
    (xdc_Char)0x5f,  /* [2184] */
    (xdc_Char)0x62,  /* [2185] */
    (xdc_Char)0x61,  /* [2186] */
    (xdc_Char)0x64,  /* [2187] */
    (xdc_Char)0x43,  /* [2188] */
    (xdc_Char)0x6f,  /* [2189] */
    (xdc_Char)0x6e,  /* [2190] */
    (xdc_Char)0x74,  /* [2191] */
    (xdc_Char)0x65,  /* [2192] */
    (xdc_Char)0x78,  /* [2193] */
    (xdc_Char)0x74,  /* [2194] */
    (xdc_Char)0x3a,  /* [2195] */
    (xdc_Char)0x20,  /* [2196] */
    (xdc_Char)0x62,  /* [2197] */
    (xdc_Char)0x61,  /* [2198] */
    (xdc_Char)0x64,  /* [2199] */
    (xdc_Char)0x20,  /* [2200] */
    (xdc_Char)0x63,  /* [2201] */
    (xdc_Char)0x61,  /* [2202] */
    (xdc_Char)0x6c,  /* [2203] */
    (xdc_Char)0x6c,  /* [2204] */
    (xdc_Char)0x69,  /* [2205] */
    (xdc_Char)0x6e,  /* [2206] */
    (xdc_Char)0x67,  /* [2207] */
    (xdc_Char)0x20,  /* [2208] */
    (xdc_Char)0x63,  /* [2209] */
    (xdc_Char)0x6f,  /* [2210] */
    (xdc_Char)0x6e,  /* [2211] */
    (xdc_Char)0x74,  /* [2212] */
    (xdc_Char)0x65,  /* [2213] */
    (xdc_Char)0x78,  /* [2214] */
    (xdc_Char)0x74,  /* [2215] */
    (xdc_Char)0x2e,  /* [2216] */
    (xdc_Char)0x20,  /* [2217] */
    (xdc_Char)0x53,  /* [2218] */
    (xdc_Char)0x65,  /* [2219] */
    (xdc_Char)0x65,  /* [2220] */
    (xdc_Char)0x20,  /* [2221] */
    (xdc_Char)0x47,  /* [2222] */
    (xdc_Char)0x61,  /* [2223] */
    (xdc_Char)0x74,  /* [2224] */
    (xdc_Char)0x65,  /* [2225] */
    (xdc_Char)0x4d,  /* [2226] */
    (xdc_Char)0x75,  /* [2227] */
    (xdc_Char)0x74,  /* [2228] */
    (xdc_Char)0x65,  /* [2229] */
    (xdc_Char)0x78,  /* [2230] */
    (xdc_Char)0x50,  /* [2231] */
    (xdc_Char)0x72,  /* [2232] */
    (xdc_Char)0x69,  /* [2233] */
    (xdc_Char)0x20,  /* [2234] */
    (xdc_Char)0x41,  /* [2235] */
    (xdc_Char)0x50,  /* [2236] */
    (xdc_Char)0x49,  /* [2237] */
    (xdc_Char)0x20,  /* [2238] */
    (xdc_Char)0x64,  /* [2239] */
    (xdc_Char)0x6f,  /* [2240] */
    (xdc_Char)0x63,  /* [2241] */
    (xdc_Char)0x20,  /* [2242] */
    (xdc_Char)0x66,  /* [2243] */
    (xdc_Char)0x6f,  /* [2244] */
    (xdc_Char)0x72,  /* [2245] */
    (xdc_Char)0x20,  /* [2246] */
    (xdc_Char)0x64,  /* [2247] */
    (xdc_Char)0x65,  /* [2248] */
    (xdc_Char)0x74,  /* [2249] */
    (xdc_Char)0x61,  /* [2250] */
    (xdc_Char)0x69,  /* [2251] */
    (xdc_Char)0x6c,  /* [2252] */
    (xdc_Char)0x73,  /* [2253] */
    (xdc_Char)0x2e,  /* [2254] */
    (xdc_Char)0x0,  /* [2255] */
    (xdc_Char)0x41,  /* [2256] */
    (xdc_Char)0x5f,  /* [2257] */
    (xdc_Char)0x65,  /* [2258] */
    (xdc_Char)0x6e,  /* [2259] */
    (xdc_Char)0x74,  /* [2260] */
    (xdc_Char)0x65,  /* [2261] */
    (xdc_Char)0x72,  /* [2262] */
    (xdc_Char)0x54,  /* [2263] */
    (xdc_Char)0x61,  /* [2264] */
    (xdc_Char)0x73,  /* [2265] */
    (xdc_Char)0x6b,  /* [2266] */
    (xdc_Char)0x44,  /* [2267] */
    (xdc_Char)0x69,  /* [2268] */
    (xdc_Char)0x73,  /* [2269] */
    (xdc_Char)0x61,  /* [2270] */
    (xdc_Char)0x62,  /* [2271] */
    (xdc_Char)0x6c,  /* [2272] */
    (xdc_Char)0x65,  /* [2273] */
    (xdc_Char)0x64,  /* [2274] */
    (xdc_Char)0x3a,  /* [2275] */
    (xdc_Char)0x20,  /* [2276] */
    (xdc_Char)0x43,  /* [2277] */
    (xdc_Char)0x61,  /* [2278] */
    (xdc_Char)0x6e,  /* [2279] */
    (xdc_Char)0x6e,  /* [2280] */
    (xdc_Char)0x6f,  /* [2281] */
    (xdc_Char)0x74,  /* [2282] */
    (xdc_Char)0x20,  /* [2283] */
    (xdc_Char)0x63,  /* [2284] */
    (xdc_Char)0x61,  /* [2285] */
    (xdc_Char)0x6c,  /* [2286] */
    (xdc_Char)0x6c,  /* [2287] */
    (xdc_Char)0x20,  /* [2288] */
    (xdc_Char)0x47,  /* [2289] */
    (xdc_Char)0x61,  /* [2290] */
    (xdc_Char)0x74,  /* [2291] */
    (xdc_Char)0x65,  /* [2292] */
    (xdc_Char)0x4d,  /* [2293] */
    (xdc_Char)0x75,  /* [2294] */
    (xdc_Char)0x74,  /* [2295] */
    (xdc_Char)0x65,  /* [2296] */
    (xdc_Char)0x78,  /* [2297] */
    (xdc_Char)0x50,  /* [2298] */
    (xdc_Char)0x72,  /* [2299] */
    (xdc_Char)0x69,  /* [2300] */
    (xdc_Char)0x5f,  /* [2301] */
    (xdc_Char)0x65,  /* [2302] */
    (xdc_Char)0x6e,  /* [2303] */
    (xdc_Char)0x74,  /* [2304] */
    (xdc_Char)0x65,  /* [2305] */
    (xdc_Char)0x72,  /* [2306] */
    (xdc_Char)0x28,  /* [2307] */
    (xdc_Char)0x29,  /* [2308] */
    (xdc_Char)0x20,  /* [2309] */
    (xdc_Char)0x77,  /* [2310] */
    (xdc_Char)0x68,  /* [2311] */
    (xdc_Char)0x69,  /* [2312] */
    (xdc_Char)0x6c,  /* [2313] */
    (xdc_Char)0x65,  /* [2314] */
    (xdc_Char)0x20,  /* [2315] */
    (xdc_Char)0x74,  /* [2316] */
    (xdc_Char)0x68,  /* [2317] */
    (xdc_Char)0x65,  /* [2318] */
    (xdc_Char)0x20,  /* [2319] */
    (xdc_Char)0x54,  /* [2320] */
    (xdc_Char)0x61,  /* [2321] */
    (xdc_Char)0x73,  /* [2322] */
    (xdc_Char)0x6b,  /* [2323] */
    (xdc_Char)0x20,  /* [2324] */
    (xdc_Char)0x6f,  /* [2325] */
    (xdc_Char)0x72,  /* [2326] */
    (xdc_Char)0x20,  /* [2327] */
    (xdc_Char)0x53,  /* [2328] */
    (xdc_Char)0x77,  /* [2329] */
    (xdc_Char)0x69,  /* [2330] */
    (xdc_Char)0x20,  /* [2331] */
    (xdc_Char)0x73,  /* [2332] */
    (xdc_Char)0x63,  /* [2333] */
    (xdc_Char)0x68,  /* [2334] */
    (xdc_Char)0x65,  /* [2335] */
    (xdc_Char)0x64,  /* [2336] */
    (xdc_Char)0x75,  /* [2337] */
    (xdc_Char)0x6c,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x72,  /* [2340] */
    (xdc_Char)0x20,  /* [2341] */
    (xdc_Char)0x69,  /* [2342] */
    (xdc_Char)0x73,  /* [2343] */
    (xdc_Char)0x20,  /* [2344] */
    (xdc_Char)0x64,  /* [2345] */
    (xdc_Char)0x69,  /* [2346] */
    (xdc_Char)0x73,  /* [2347] */
    (xdc_Char)0x61,  /* [2348] */
    (xdc_Char)0x62,  /* [2349] */
    (xdc_Char)0x6c,  /* [2350] */
    (xdc_Char)0x65,  /* [2351] */
    (xdc_Char)0x64,  /* [2352] */
    (xdc_Char)0x2e,  /* [2353] */
    (xdc_Char)0x0,  /* [2354] */
    (xdc_Char)0x41,  /* [2355] */
    (xdc_Char)0x5f,  /* [2356] */
    (xdc_Char)0x62,  /* [2357] */
    (xdc_Char)0x61,  /* [2358] */
    (xdc_Char)0x64,  /* [2359] */
    (xdc_Char)0x43,  /* [2360] */
    (xdc_Char)0x6f,  /* [2361] */
    (xdc_Char)0x6e,  /* [2362] */
    (xdc_Char)0x74,  /* [2363] */
    (xdc_Char)0x65,  /* [2364] */
    (xdc_Char)0x78,  /* [2365] */
    (xdc_Char)0x74,  /* [2366] */
    (xdc_Char)0x3a,  /* [2367] */
    (xdc_Char)0x20,  /* [2368] */
    (xdc_Char)0x62,  /* [2369] */
    (xdc_Char)0x61,  /* [2370] */
    (xdc_Char)0x64,  /* [2371] */
    (xdc_Char)0x20,  /* [2372] */
    (xdc_Char)0x63,  /* [2373] */
    (xdc_Char)0x61,  /* [2374] */
    (xdc_Char)0x6c,  /* [2375] */
    (xdc_Char)0x6c,  /* [2376] */
    (xdc_Char)0x69,  /* [2377] */
    (xdc_Char)0x6e,  /* [2378] */
    (xdc_Char)0x67,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x63,  /* [2381] */
    (xdc_Char)0x6f,  /* [2382] */
    (xdc_Char)0x6e,  /* [2383] */
    (xdc_Char)0x74,  /* [2384] */
    (xdc_Char)0x65,  /* [2385] */
    (xdc_Char)0x78,  /* [2386] */
    (xdc_Char)0x74,  /* [2387] */
    (xdc_Char)0x2e,  /* [2388] */
    (xdc_Char)0x20,  /* [2389] */
    (xdc_Char)0x53,  /* [2390] */
    (xdc_Char)0x65,  /* [2391] */
    (xdc_Char)0x65,  /* [2392] */
    (xdc_Char)0x20,  /* [2393] */
    (xdc_Char)0x47,  /* [2394] */
    (xdc_Char)0x61,  /* [2395] */
    (xdc_Char)0x74,  /* [2396] */
    (xdc_Char)0x65,  /* [2397] */
    (xdc_Char)0x4d,  /* [2398] */
    (xdc_Char)0x75,  /* [2399] */
    (xdc_Char)0x74,  /* [2400] */
    (xdc_Char)0x65,  /* [2401] */
    (xdc_Char)0x78,  /* [2402] */
    (xdc_Char)0x20,  /* [2403] */
    (xdc_Char)0x41,  /* [2404] */
    (xdc_Char)0x50,  /* [2405] */
    (xdc_Char)0x49,  /* [2406] */
    (xdc_Char)0x20,  /* [2407] */
    (xdc_Char)0x64,  /* [2408] */
    (xdc_Char)0x6f,  /* [2409] */
    (xdc_Char)0x63,  /* [2410] */
    (xdc_Char)0x20,  /* [2411] */
    (xdc_Char)0x66,  /* [2412] */
    (xdc_Char)0x6f,  /* [2413] */
    (xdc_Char)0x72,  /* [2414] */
    (xdc_Char)0x20,  /* [2415] */
    (xdc_Char)0x64,  /* [2416] */
    (xdc_Char)0x65,  /* [2417] */
    (xdc_Char)0x74,  /* [2418] */
    (xdc_Char)0x61,  /* [2419] */
    (xdc_Char)0x69,  /* [2420] */
    (xdc_Char)0x6c,  /* [2421] */
    (xdc_Char)0x73,  /* [2422] */
    (xdc_Char)0x2e,  /* [2423] */
    (xdc_Char)0x0,  /* [2424] */
    (xdc_Char)0x41,  /* [2425] */
    (xdc_Char)0x5f,  /* [2426] */
    (xdc_Char)0x62,  /* [2427] */
    (xdc_Char)0x61,  /* [2428] */
    (xdc_Char)0x64,  /* [2429] */
    (xdc_Char)0x43,  /* [2430] */
    (xdc_Char)0x6f,  /* [2431] */
    (xdc_Char)0x6e,  /* [2432] */
    (xdc_Char)0x74,  /* [2433] */
    (xdc_Char)0x65,  /* [2434] */
    (xdc_Char)0x78,  /* [2435] */
    (xdc_Char)0x74,  /* [2436] */
    (xdc_Char)0x3a,  /* [2437] */
    (xdc_Char)0x20,  /* [2438] */
    (xdc_Char)0x62,  /* [2439] */
    (xdc_Char)0x61,  /* [2440] */
    (xdc_Char)0x64,  /* [2441] */
    (xdc_Char)0x20,  /* [2442] */
    (xdc_Char)0x63,  /* [2443] */
    (xdc_Char)0x61,  /* [2444] */
    (xdc_Char)0x6c,  /* [2445] */
    (xdc_Char)0x6c,  /* [2446] */
    (xdc_Char)0x69,  /* [2447] */
    (xdc_Char)0x6e,  /* [2448] */
    (xdc_Char)0x67,  /* [2449] */
    (xdc_Char)0x20,  /* [2450] */
    (xdc_Char)0x63,  /* [2451] */
    (xdc_Char)0x6f,  /* [2452] */
    (xdc_Char)0x6e,  /* [2453] */
    (xdc_Char)0x74,  /* [2454] */
    (xdc_Char)0x65,  /* [2455] */
    (xdc_Char)0x78,  /* [2456] */
    (xdc_Char)0x74,  /* [2457] */
    (xdc_Char)0x2e,  /* [2458] */
    (xdc_Char)0x20,  /* [2459] */
    (xdc_Char)0x53,  /* [2460] */
    (xdc_Char)0x65,  /* [2461] */
    (xdc_Char)0x65,  /* [2462] */
    (xdc_Char)0x20,  /* [2463] */
    (xdc_Char)0x47,  /* [2464] */
    (xdc_Char)0x61,  /* [2465] */
    (xdc_Char)0x74,  /* [2466] */
    (xdc_Char)0x65,  /* [2467] */
    (xdc_Char)0x53,  /* [2468] */
    (xdc_Char)0x70,  /* [2469] */
    (xdc_Char)0x69,  /* [2470] */
    (xdc_Char)0x6e,  /* [2471] */
    (xdc_Char)0x6c,  /* [2472] */
    (xdc_Char)0x6f,  /* [2473] */
    (xdc_Char)0x63,  /* [2474] */
    (xdc_Char)0x6b,  /* [2475] */
    (xdc_Char)0x20,  /* [2476] */
    (xdc_Char)0x41,  /* [2477] */
    (xdc_Char)0x50,  /* [2478] */
    (xdc_Char)0x49,  /* [2479] */
    (xdc_Char)0x20,  /* [2480] */
    (xdc_Char)0x64,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x63,  /* [2483] */
    (xdc_Char)0x20,  /* [2484] */
    (xdc_Char)0x66,  /* [2485] */
    (xdc_Char)0x6f,  /* [2486] */
    (xdc_Char)0x72,  /* [2487] */
    (xdc_Char)0x20,  /* [2488] */
    (xdc_Char)0x64,  /* [2489] */
    (xdc_Char)0x65,  /* [2490] */
    (xdc_Char)0x74,  /* [2491] */
    (xdc_Char)0x61,  /* [2492] */
    (xdc_Char)0x69,  /* [2493] */
    (xdc_Char)0x6c,  /* [2494] */
    (xdc_Char)0x73,  /* [2495] */
    (xdc_Char)0x2e,  /* [2496] */
    (xdc_Char)0x0,  /* [2497] */
    (xdc_Char)0x41,  /* [2498] */
    (xdc_Char)0x5f,  /* [2499] */
    (xdc_Char)0x69,  /* [2500] */
    (xdc_Char)0x6e,  /* [2501] */
    (xdc_Char)0x76,  /* [2502] */
    (xdc_Char)0x61,  /* [2503] */
    (xdc_Char)0x6c,  /* [2504] */
    (xdc_Char)0x69,  /* [2505] */
    (xdc_Char)0x64,  /* [2506] */
    (xdc_Char)0x51,  /* [2507] */
    (xdc_Char)0x75,  /* [2508] */
    (xdc_Char)0x61,  /* [2509] */
    (xdc_Char)0x6c,  /* [2510] */
    (xdc_Char)0x69,  /* [2511] */
    (xdc_Char)0x74,  /* [2512] */
    (xdc_Char)0x79,  /* [2513] */
    (xdc_Char)0x3a,  /* [2514] */
    (xdc_Char)0x20,  /* [2515] */
    (xdc_Char)0x53,  /* [2516] */
    (xdc_Char)0x65,  /* [2517] */
    (xdc_Char)0x65,  /* [2518] */
    (xdc_Char)0x20,  /* [2519] */
    (xdc_Char)0x47,  /* [2520] */
    (xdc_Char)0x61,  /* [2521] */
    (xdc_Char)0x74,  /* [2522] */
    (xdc_Char)0x65,  /* [2523] */
    (xdc_Char)0x53,  /* [2524] */
    (xdc_Char)0x70,  /* [2525] */
    (xdc_Char)0x69,  /* [2526] */
    (xdc_Char)0x6e,  /* [2527] */
    (xdc_Char)0x6c,  /* [2528] */
    (xdc_Char)0x6f,  /* [2529] */
    (xdc_Char)0x63,  /* [2530] */
    (xdc_Char)0x6b,  /* [2531] */
    (xdc_Char)0x20,  /* [2532] */
    (xdc_Char)0x41,  /* [2533] */
    (xdc_Char)0x50,  /* [2534] */
    (xdc_Char)0x49,  /* [2535] */
    (xdc_Char)0x20,  /* [2536] */
    (xdc_Char)0x64,  /* [2537] */
    (xdc_Char)0x6f,  /* [2538] */
    (xdc_Char)0x63,  /* [2539] */
    (xdc_Char)0x20,  /* [2540] */
    (xdc_Char)0x66,  /* [2541] */
    (xdc_Char)0x6f,  /* [2542] */
    (xdc_Char)0x72,  /* [2543] */
    (xdc_Char)0x20,  /* [2544] */
    (xdc_Char)0x64,  /* [2545] */
    (xdc_Char)0x65,  /* [2546] */
    (xdc_Char)0x74,  /* [2547] */
    (xdc_Char)0x61,  /* [2548] */
    (xdc_Char)0x69,  /* [2549] */
    (xdc_Char)0x6c,  /* [2550] */
    (xdc_Char)0x73,  /* [2551] */
    (xdc_Char)0x2e,  /* [2552] */
    (xdc_Char)0x0,  /* [2553] */
    (xdc_Char)0x41,  /* [2554] */
    (xdc_Char)0x5f,  /* [2555] */
    (xdc_Char)0x62,  /* [2556] */
    (xdc_Char)0x61,  /* [2557] */
    (xdc_Char)0x64,  /* [2558] */
    (xdc_Char)0x53,  /* [2559] */
    (xdc_Char)0x47,  /* [2560] */
    (xdc_Char)0x49,  /* [2561] */
    (xdc_Char)0x49,  /* [2562] */
    (xdc_Char)0x6e,  /* [2563] */
    (xdc_Char)0x74,  /* [2564] */
    (xdc_Char)0x4e,  /* [2565] */
    (xdc_Char)0x75,  /* [2566] */
    (xdc_Char)0x6d,  /* [2567] */
    (xdc_Char)0x3a,  /* [2568] */
    (xdc_Char)0x20,  /* [2569] */
    (xdc_Char)0x53,  /* [2570] */
    (xdc_Char)0x47,  /* [2571] */
    (xdc_Char)0x49,  /* [2572] */
    (xdc_Char)0x20,  /* [2573] */
    (xdc_Char)0x69,  /* [2574] */
    (xdc_Char)0x6e,  /* [2575] */
    (xdc_Char)0x74,  /* [2576] */
    (xdc_Char)0x4e,  /* [2577] */
    (xdc_Char)0x75,  /* [2578] */
    (xdc_Char)0x6d,  /* [2579] */
    (xdc_Char)0x20,  /* [2580] */
    (xdc_Char)0x73,  /* [2581] */
    (xdc_Char)0x68,  /* [2582] */
    (xdc_Char)0x6f,  /* [2583] */
    (xdc_Char)0x75,  /* [2584] */
    (xdc_Char)0x6c,  /* [2585] */
    (xdc_Char)0x64,  /* [2586] */
    (xdc_Char)0x20,  /* [2587] */
    (xdc_Char)0x62,  /* [2588] */
    (xdc_Char)0x65,  /* [2589] */
    (xdc_Char)0x20,  /* [2590] */
    (xdc_Char)0x3c,  /* [2591] */
    (xdc_Char)0x3d,  /* [2592] */
    (xdc_Char)0x20,  /* [2593] */
    (xdc_Char)0x31,  /* [2594] */
    (xdc_Char)0x35,  /* [2595] */
    (xdc_Char)0x2e,  /* [2596] */
    (xdc_Char)0x0,  /* [2597] */
    (xdc_Char)0x41,  /* [2598] */
    (xdc_Char)0x5f,  /* [2599] */
    (xdc_Char)0x62,  /* [2600] */
    (xdc_Char)0x61,  /* [2601] */
    (xdc_Char)0x64,  /* [2602] */
    (xdc_Char)0x54,  /* [2603] */
    (xdc_Char)0x68,  /* [2604] */
    (xdc_Char)0x72,  /* [2605] */
    (xdc_Char)0x65,  /* [2606] */
    (xdc_Char)0x61,  /* [2607] */
    (xdc_Char)0x64,  /* [2608] */
    (xdc_Char)0x54,  /* [2609] */
    (xdc_Char)0x79,  /* [2610] */
    (xdc_Char)0x70,  /* [2611] */
    (xdc_Char)0x65,  /* [2612] */
    (xdc_Char)0x3a,  /* [2613] */
    (xdc_Char)0x20,  /* [2614] */
    (xdc_Char)0x43,  /* [2615] */
    (xdc_Char)0x61,  /* [2616] */
    (xdc_Char)0x6e,  /* [2617] */
    (xdc_Char)0x6e,  /* [2618] */
    (xdc_Char)0x6f,  /* [2619] */
    (xdc_Char)0x74,  /* [2620] */
    (xdc_Char)0x20,  /* [2621] */
    (xdc_Char)0x63,  /* [2622] */
    (xdc_Char)0x61,  /* [2623] */
    (xdc_Char)0x6c,  /* [2624] */
    (xdc_Char)0x6c,  /* [2625] */
    (xdc_Char)0x20,  /* [2626] */
    (xdc_Char)0x61,  /* [2627] */
    (xdc_Char)0x20,  /* [2628] */
    (xdc_Char)0x43,  /* [2629] */
    (xdc_Char)0x20,  /* [2630] */
    (xdc_Char)0x72,  /* [2631] */
    (xdc_Char)0x75,  /* [2632] */
    (xdc_Char)0x6e,  /* [2633] */
    (xdc_Char)0x74,  /* [2634] */
    (xdc_Char)0x69,  /* [2635] */
    (xdc_Char)0x6d,  /* [2636] */
    (xdc_Char)0x65,  /* [2637] */
    (xdc_Char)0x20,  /* [2638] */
    (xdc_Char)0x6c,  /* [2639] */
    (xdc_Char)0x69,  /* [2640] */
    (xdc_Char)0x62,  /* [2641] */
    (xdc_Char)0x72,  /* [2642] */
    (xdc_Char)0x61,  /* [2643] */
    (xdc_Char)0x72,  /* [2644] */
    (xdc_Char)0x79,  /* [2645] */
    (xdc_Char)0x20,  /* [2646] */
    (xdc_Char)0x41,  /* [2647] */
    (xdc_Char)0x50,  /* [2648] */
    (xdc_Char)0x49,  /* [2649] */
    (xdc_Char)0x20,  /* [2650] */
    (xdc_Char)0x66,  /* [2651] */
    (xdc_Char)0x72,  /* [2652] */
    (xdc_Char)0x6f,  /* [2653] */
    (xdc_Char)0x6d,  /* [2654] */
    (xdc_Char)0x20,  /* [2655] */
    (xdc_Char)0x61,  /* [2656] */
    (xdc_Char)0x20,  /* [2657] */
    (xdc_Char)0x48,  /* [2658] */
    (xdc_Char)0x77,  /* [2659] */
    (xdc_Char)0x69,  /* [2660] */
    (xdc_Char)0x20,  /* [2661] */
    (xdc_Char)0x6f,  /* [2662] */
    (xdc_Char)0x72,  /* [2663] */
    (xdc_Char)0x20,  /* [2664] */
    (xdc_Char)0x53,  /* [2665] */
    (xdc_Char)0x77,  /* [2666] */
    (xdc_Char)0x69,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x74,  /* [2669] */
    (xdc_Char)0x68,  /* [2670] */
    (xdc_Char)0x72,  /* [2671] */
    (xdc_Char)0x65,  /* [2672] */
    (xdc_Char)0x61,  /* [2673] */
    (xdc_Char)0x64,  /* [2674] */
    (xdc_Char)0x2e,  /* [2675] */
    (xdc_Char)0x0,  /* [2676] */
    (xdc_Char)0x41,  /* [2677] */
    (xdc_Char)0x5f,  /* [2678] */
    (xdc_Char)0x7a,  /* [2679] */
    (xdc_Char)0x65,  /* [2680] */
    (xdc_Char)0x72,  /* [2681] */
    (xdc_Char)0x6f,  /* [2682] */
    (xdc_Char)0x54,  /* [2683] */
    (xdc_Char)0x69,  /* [2684] */
    (xdc_Char)0x6d,  /* [2685] */
    (xdc_Char)0x65,  /* [2686] */
    (xdc_Char)0x6f,  /* [2687] */
    (xdc_Char)0x75,  /* [2688] */
    (xdc_Char)0x74,  /* [2689] */
    (xdc_Char)0x3a,  /* [2690] */
    (xdc_Char)0x20,  /* [2691] */
    (xdc_Char)0x54,  /* [2692] */
    (xdc_Char)0x69,  /* [2693] */
    (xdc_Char)0x6d,  /* [2694] */
    (xdc_Char)0x65,  /* [2695] */
    (xdc_Char)0x6f,  /* [2696] */
    (xdc_Char)0x75,  /* [2697] */
    (xdc_Char)0x74,  /* [2698] */
    (xdc_Char)0x20,  /* [2699] */
    (xdc_Char)0x76,  /* [2700] */
    (xdc_Char)0x61,  /* [2701] */
    (xdc_Char)0x6c,  /* [2702] */
    (xdc_Char)0x75,  /* [2703] */
    (xdc_Char)0x65,  /* [2704] */
    (xdc_Char)0x20,  /* [2705] */
    (xdc_Char)0x61,  /* [2706] */
    (xdc_Char)0x6e,  /* [2707] */
    (xdc_Char)0x6e,  /* [2708] */
    (xdc_Char)0x6f,  /* [2709] */
    (xdc_Char)0x74,  /* [2710] */
    (xdc_Char)0x20,  /* [2711] */
    (xdc_Char)0x62,  /* [2712] */
    (xdc_Char)0x65,  /* [2713] */
    (xdc_Char)0x20,  /* [2714] */
    (xdc_Char)0x7a,  /* [2715] */
    (xdc_Char)0x65,  /* [2716] */
    (xdc_Char)0x72,  /* [2717] */
    (xdc_Char)0x6f,  /* [2718] */
    (xdc_Char)0x0,  /* [2719] */
    (xdc_Char)0x41,  /* [2720] */
    (xdc_Char)0x5f,  /* [2721] */
    (xdc_Char)0x69,  /* [2722] */
    (xdc_Char)0x6e,  /* [2723] */
    (xdc_Char)0x76,  /* [2724] */
    (xdc_Char)0x61,  /* [2725] */
    (xdc_Char)0x6c,  /* [2726] */
    (xdc_Char)0x69,  /* [2727] */
    (xdc_Char)0x64,  /* [2728] */
    (xdc_Char)0x4b,  /* [2729] */
    (xdc_Char)0x65,  /* [2730] */
    (xdc_Char)0x79,  /* [2731] */
    (xdc_Char)0x3a,  /* [2732] */
    (xdc_Char)0x20,  /* [2733] */
    (xdc_Char)0x74,  /* [2734] */
    (xdc_Char)0x68,  /* [2735] */
    (xdc_Char)0x65,  /* [2736] */
    (xdc_Char)0x20,  /* [2737] */
    (xdc_Char)0x6b,  /* [2738] */
    (xdc_Char)0x65,  /* [2739] */
    (xdc_Char)0x79,  /* [2740] */
    (xdc_Char)0x20,  /* [2741] */
    (xdc_Char)0x6d,  /* [2742] */
    (xdc_Char)0x75,  /* [2743] */
    (xdc_Char)0x73,  /* [2744] */
    (xdc_Char)0x74,  /* [2745] */
    (xdc_Char)0x20,  /* [2746] */
    (xdc_Char)0x62,  /* [2747] */
    (xdc_Char)0x65,  /* [2748] */
    (xdc_Char)0x20,  /* [2749] */
    (xdc_Char)0x73,  /* [2750] */
    (xdc_Char)0x65,  /* [2751] */
    (xdc_Char)0x74,  /* [2752] */
    (xdc_Char)0x20,  /* [2753] */
    (xdc_Char)0x74,  /* [2754] */
    (xdc_Char)0x6f,  /* [2755] */
    (xdc_Char)0x20,  /* [2756] */
    (xdc_Char)0x61,  /* [2757] */
    (xdc_Char)0x20,  /* [2758] */
    (xdc_Char)0x6e,  /* [2759] */
    (xdc_Char)0x6f,  /* [2760] */
    (xdc_Char)0x6e,  /* [2761] */
    (xdc_Char)0x2d,  /* [2762] */
    (xdc_Char)0x64,  /* [2763] */
    (xdc_Char)0x65,  /* [2764] */
    (xdc_Char)0x66,  /* [2765] */
    (xdc_Char)0x61,  /* [2766] */
    (xdc_Char)0x75,  /* [2767] */
    (xdc_Char)0x6c,  /* [2768] */
    (xdc_Char)0x74,  /* [2769] */
    (xdc_Char)0x20,  /* [2770] */
    (xdc_Char)0x76,  /* [2771] */
    (xdc_Char)0x61,  /* [2772] */
    (xdc_Char)0x6c,  /* [2773] */
    (xdc_Char)0x75,  /* [2774] */
    (xdc_Char)0x65,  /* [2775] */
    (xdc_Char)0x0,  /* [2776] */
    (xdc_Char)0x62,  /* [2777] */
    (xdc_Char)0x75,  /* [2778] */
    (xdc_Char)0x66,  /* [2779] */
    (xdc_Char)0x20,  /* [2780] */
    (xdc_Char)0x70,  /* [2781] */
    (xdc_Char)0x61,  /* [2782] */
    (xdc_Char)0x72,  /* [2783] */
    (xdc_Char)0x61,  /* [2784] */
    (xdc_Char)0x6d,  /* [2785] */
    (xdc_Char)0x65,  /* [2786] */
    (xdc_Char)0x74,  /* [2787] */
    (xdc_Char)0x65,  /* [2788] */
    (xdc_Char)0x72,  /* [2789] */
    (xdc_Char)0x20,  /* [2790] */
    (xdc_Char)0x63,  /* [2791] */
    (xdc_Char)0x61,  /* [2792] */
    (xdc_Char)0x6e,  /* [2793] */
    (xdc_Char)0x6e,  /* [2794] */
    (xdc_Char)0x6f,  /* [2795] */
    (xdc_Char)0x74,  /* [2796] */
    (xdc_Char)0x20,  /* [2797] */
    (xdc_Char)0x62,  /* [2798] */
    (xdc_Char)0x65,  /* [2799] */
    (xdc_Char)0x20,  /* [2800] */
    (xdc_Char)0x6e,  /* [2801] */
    (xdc_Char)0x75,  /* [2802] */
    (xdc_Char)0x6c,  /* [2803] */
    (xdc_Char)0x6c,  /* [2804] */
    (xdc_Char)0x0,  /* [2805] */
    (xdc_Char)0x62,  /* [2806] */
    (xdc_Char)0x75,  /* [2807] */
    (xdc_Char)0x66,  /* [2808] */
    (xdc_Char)0x20,  /* [2809] */
    (xdc_Char)0x6e,  /* [2810] */
    (xdc_Char)0x6f,  /* [2811] */
    (xdc_Char)0x74,  /* [2812] */
    (xdc_Char)0x20,  /* [2813] */
    (xdc_Char)0x70,  /* [2814] */
    (xdc_Char)0x72,  /* [2815] */
    (xdc_Char)0x6f,  /* [2816] */
    (xdc_Char)0x70,  /* [2817] */
    (xdc_Char)0x65,  /* [2818] */
    (xdc_Char)0x72,  /* [2819] */
    (xdc_Char)0x6c,  /* [2820] */
    (xdc_Char)0x79,  /* [2821] */
    (xdc_Char)0x20,  /* [2822] */
    (xdc_Char)0x61,  /* [2823] */
    (xdc_Char)0x6c,  /* [2824] */
    (xdc_Char)0x69,  /* [2825] */
    (xdc_Char)0x67,  /* [2826] */
    (xdc_Char)0x6e,  /* [2827] */
    (xdc_Char)0x65,  /* [2828] */
    (xdc_Char)0x64,  /* [2829] */
    (xdc_Char)0x0,  /* [2830] */
    (xdc_Char)0x61,  /* [2831] */
    (xdc_Char)0x6c,  /* [2832] */
    (xdc_Char)0x69,  /* [2833] */
    (xdc_Char)0x67,  /* [2834] */
    (xdc_Char)0x6e,  /* [2835] */
    (xdc_Char)0x20,  /* [2836] */
    (xdc_Char)0x70,  /* [2837] */
    (xdc_Char)0x61,  /* [2838] */
    (xdc_Char)0x72,  /* [2839] */
    (xdc_Char)0x61,  /* [2840] */
    (xdc_Char)0x6d,  /* [2841] */
    (xdc_Char)0x65,  /* [2842] */
    (xdc_Char)0x74,  /* [2843] */
    (xdc_Char)0x65,  /* [2844] */
    (xdc_Char)0x72,  /* [2845] */
    (xdc_Char)0x20,  /* [2846] */
    (xdc_Char)0x6d,  /* [2847] */
    (xdc_Char)0x75,  /* [2848] */
    (xdc_Char)0x73,  /* [2849] */
    (xdc_Char)0x74,  /* [2850] */
    (xdc_Char)0x20,  /* [2851] */
    (xdc_Char)0x62,  /* [2852] */
    (xdc_Char)0x65,  /* [2853] */
    (xdc_Char)0x20,  /* [2854] */
    (xdc_Char)0x30,  /* [2855] */
    (xdc_Char)0x20,  /* [2856] */
    (xdc_Char)0x6f,  /* [2857] */
    (xdc_Char)0x72,  /* [2858] */
    (xdc_Char)0x20,  /* [2859] */
    (xdc_Char)0x61,  /* [2860] */
    (xdc_Char)0x20,  /* [2861] */
    (xdc_Char)0x70,  /* [2862] */
    (xdc_Char)0x6f,  /* [2863] */
    (xdc_Char)0x77,  /* [2864] */
    (xdc_Char)0x65,  /* [2865] */
    (xdc_Char)0x72,  /* [2866] */
    (xdc_Char)0x20,  /* [2867] */
    (xdc_Char)0x6f,  /* [2868] */
    (xdc_Char)0x66,  /* [2869] */
    (xdc_Char)0x20,  /* [2870] */
    (xdc_Char)0x32,  /* [2871] */
    (xdc_Char)0x20,  /* [2872] */
    (xdc_Char)0x3e,  /* [2873] */
    (xdc_Char)0x3d,  /* [2874] */
    (xdc_Char)0x20,  /* [2875] */
    (xdc_Char)0x74,  /* [2876] */
    (xdc_Char)0x68,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x20,  /* [2879] */
    (xdc_Char)0x76,  /* [2880] */
    (xdc_Char)0x61,  /* [2881] */
    (xdc_Char)0x6c,  /* [2882] */
    (xdc_Char)0x75,  /* [2883] */
    (xdc_Char)0x65,  /* [2884] */
    (xdc_Char)0x20,  /* [2885] */
    (xdc_Char)0x6f,  /* [2886] */
    (xdc_Char)0x66,  /* [2887] */
    (xdc_Char)0x20,  /* [2888] */
    (xdc_Char)0x4d,  /* [2889] */
    (xdc_Char)0x65,  /* [2890] */
    (xdc_Char)0x6d,  /* [2891] */
    (xdc_Char)0x6f,  /* [2892] */
    (xdc_Char)0x72,  /* [2893] */
    (xdc_Char)0x79,  /* [2894] */
    (xdc_Char)0x5f,  /* [2895] */
    (xdc_Char)0x67,  /* [2896] */
    (xdc_Char)0x65,  /* [2897] */
    (xdc_Char)0x74,  /* [2898] */
    (xdc_Char)0x4d,  /* [2899] */
    (xdc_Char)0x61,  /* [2900] */
    (xdc_Char)0x78,  /* [2901] */
    (xdc_Char)0x44,  /* [2902] */
    (xdc_Char)0x65,  /* [2903] */
    (xdc_Char)0x66,  /* [2904] */
    (xdc_Char)0x61,  /* [2905] */
    (xdc_Char)0x75,  /* [2906] */
    (xdc_Char)0x6c,  /* [2907] */
    (xdc_Char)0x74,  /* [2908] */
    (xdc_Char)0x54,  /* [2909] */
    (xdc_Char)0x79,  /* [2910] */
    (xdc_Char)0x70,  /* [2911] */
    (xdc_Char)0x65,  /* [2912] */
    (xdc_Char)0x41,  /* [2913] */
    (xdc_Char)0x6c,  /* [2914] */
    (xdc_Char)0x69,  /* [2915] */
    (xdc_Char)0x67,  /* [2916] */
    (xdc_Char)0x6e,  /* [2917] */
    (xdc_Char)0x28,  /* [2918] */
    (xdc_Char)0x29,  /* [2919] */
    (xdc_Char)0x0,  /* [2920] */
    (xdc_Char)0x61,  /* [2921] */
    (xdc_Char)0x6c,  /* [2922] */
    (xdc_Char)0x69,  /* [2923] */
    (xdc_Char)0x67,  /* [2924] */
    (xdc_Char)0x6e,  /* [2925] */
    (xdc_Char)0x20,  /* [2926] */
    (xdc_Char)0x70,  /* [2927] */
    (xdc_Char)0x61,  /* [2928] */
    (xdc_Char)0x72,  /* [2929] */
    (xdc_Char)0x61,  /* [2930] */
    (xdc_Char)0x6d,  /* [2931] */
    (xdc_Char)0x65,  /* [2932] */
    (xdc_Char)0x74,  /* [2933] */
    (xdc_Char)0x65,  /* [2934] */
    (xdc_Char)0x72,  /* [2935] */
    (xdc_Char)0x20,  /* [2936] */
    (xdc_Char)0x31,  /* [2937] */
    (xdc_Char)0x29,  /* [2938] */
    (xdc_Char)0x20,  /* [2939] */
    (xdc_Char)0x6d,  /* [2940] */
    (xdc_Char)0x75,  /* [2941] */
    (xdc_Char)0x73,  /* [2942] */
    (xdc_Char)0x74,  /* [2943] */
    (xdc_Char)0x20,  /* [2944] */
    (xdc_Char)0x62,  /* [2945] */
    (xdc_Char)0x65,  /* [2946] */
    (xdc_Char)0x20,  /* [2947] */
    (xdc_Char)0x30,  /* [2948] */
    (xdc_Char)0x20,  /* [2949] */
    (xdc_Char)0x6f,  /* [2950] */
    (xdc_Char)0x72,  /* [2951] */
    (xdc_Char)0x20,  /* [2952] */
    (xdc_Char)0x61,  /* [2953] */
    (xdc_Char)0x20,  /* [2954] */
    (xdc_Char)0x70,  /* [2955] */
    (xdc_Char)0x6f,  /* [2956] */
    (xdc_Char)0x77,  /* [2957] */
    (xdc_Char)0x65,  /* [2958] */
    (xdc_Char)0x72,  /* [2959] */
    (xdc_Char)0x20,  /* [2960] */
    (xdc_Char)0x6f,  /* [2961] */
    (xdc_Char)0x66,  /* [2962] */
    (xdc_Char)0x20,  /* [2963] */
    (xdc_Char)0x32,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x61,  /* [2966] */
    (xdc_Char)0x6e,  /* [2967] */
    (xdc_Char)0x64,  /* [2968] */
    (xdc_Char)0x20,  /* [2969] */
    (xdc_Char)0x32,  /* [2970] */
    (xdc_Char)0x29,  /* [2971] */
    (xdc_Char)0x20,  /* [2972] */
    (xdc_Char)0x6e,  /* [2973] */
    (xdc_Char)0x6f,  /* [2974] */
    (xdc_Char)0x74,  /* [2975] */
    (xdc_Char)0x20,  /* [2976] */
    (xdc_Char)0x67,  /* [2977] */
    (xdc_Char)0x72,  /* [2978] */
    (xdc_Char)0x65,  /* [2979] */
    (xdc_Char)0x61,  /* [2980] */
    (xdc_Char)0x74,  /* [2981] */
    (xdc_Char)0x65,  /* [2982] */
    (xdc_Char)0x72,  /* [2983] */
    (xdc_Char)0x20,  /* [2984] */
    (xdc_Char)0x74,  /* [2985] */
    (xdc_Char)0x68,  /* [2986] */
    (xdc_Char)0x61,  /* [2987] */
    (xdc_Char)0x6e,  /* [2988] */
    (xdc_Char)0x20,  /* [2989] */
    (xdc_Char)0x74,  /* [2990] */
    (xdc_Char)0x68,  /* [2991] */
    (xdc_Char)0x65,  /* [2992] */
    (xdc_Char)0x20,  /* [2993] */
    (xdc_Char)0x68,  /* [2994] */
    (xdc_Char)0x65,  /* [2995] */
    (xdc_Char)0x61,  /* [2996] */
    (xdc_Char)0x70,  /* [2997] */
    (xdc_Char)0x73,  /* [2998] */
    (xdc_Char)0x20,  /* [2999] */
    (xdc_Char)0x61,  /* [3000] */
    (xdc_Char)0x6c,  /* [3001] */
    (xdc_Char)0x69,  /* [3002] */
    (xdc_Char)0x67,  /* [3003] */
    (xdc_Char)0x6e,  /* [3004] */
    (xdc_Char)0x6d,  /* [3005] */
    (xdc_Char)0x65,  /* [3006] */
    (xdc_Char)0x6e,  /* [3007] */
    (xdc_Char)0x74,  /* [3008] */
    (xdc_Char)0x0,  /* [3009] */
    (xdc_Char)0x62,  /* [3010] */
    (xdc_Char)0x6c,  /* [3011] */
    (xdc_Char)0x6f,  /* [3012] */
    (xdc_Char)0x63,  /* [3013] */
    (xdc_Char)0x6b,  /* [3014] */
    (xdc_Char)0x53,  /* [3015] */
    (xdc_Char)0x69,  /* [3016] */
    (xdc_Char)0x7a,  /* [3017] */
    (xdc_Char)0x65,  /* [3018] */
    (xdc_Char)0x20,  /* [3019] */
    (xdc_Char)0x6d,  /* [3020] */
    (xdc_Char)0x75,  /* [3021] */
    (xdc_Char)0x73,  /* [3022] */
    (xdc_Char)0x74,  /* [3023] */
    (xdc_Char)0x20,  /* [3024] */
    (xdc_Char)0x62,  /* [3025] */
    (xdc_Char)0x65,  /* [3026] */
    (xdc_Char)0x20,  /* [3027] */
    (xdc_Char)0x6c,  /* [3028] */
    (xdc_Char)0x61,  /* [3029] */
    (xdc_Char)0x72,  /* [3030] */
    (xdc_Char)0x67,  /* [3031] */
    (xdc_Char)0x65,  /* [3032] */
    (xdc_Char)0x20,  /* [3033] */
    (xdc_Char)0x65,  /* [3034] */
    (xdc_Char)0x6e,  /* [3035] */
    (xdc_Char)0x6f,  /* [3036] */
    (xdc_Char)0x75,  /* [3037] */
    (xdc_Char)0x67,  /* [3038] */
    (xdc_Char)0x68,  /* [3039] */
    (xdc_Char)0x20,  /* [3040] */
    (xdc_Char)0x74,  /* [3041] */
    (xdc_Char)0x6f,  /* [3042] */
    (xdc_Char)0x20,  /* [3043] */
    (xdc_Char)0x68,  /* [3044] */
    (xdc_Char)0x6f,  /* [3045] */
    (xdc_Char)0x6c,  /* [3046] */
    (xdc_Char)0x64,  /* [3047] */
    (xdc_Char)0x20,  /* [3048] */
    (xdc_Char)0x61,  /* [3049] */
    (xdc_Char)0x74,  /* [3050] */
    (xdc_Char)0x6c,  /* [3051] */
    (xdc_Char)0x65,  /* [3052] */
    (xdc_Char)0x61,  /* [3053] */
    (xdc_Char)0x73,  /* [3054] */
    (xdc_Char)0x74,  /* [3055] */
    (xdc_Char)0x20,  /* [3056] */
    (xdc_Char)0x74,  /* [3057] */
    (xdc_Char)0x77,  /* [3058] */
    (xdc_Char)0x6f,  /* [3059] */
    (xdc_Char)0x20,  /* [3060] */
    (xdc_Char)0x70,  /* [3061] */
    (xdc_Char)0x6f,  /* [3062] */
    (xdc_Char)0x69,  /* [3063] */
    (xdc_Char)0x6e,  /* [3064] */
    (xdc_Char)0x74,  /* [3065] */
    (xdc_Char)0x65,  /* [3066] */
    (xdc_Char)0x72,  /* [3067] */
    (xdc_Char)0x73,  /* [3068] */
    (xdc_Char)0x0,  /* [3069] */
    (xdc_Char)0x6e,  /* [3070] */
    (xdc_Char)0x75,  /* [3071] */
    (xdc_Char)0x6d,  /* [3072] */
    (xdc_Char)0x42,  /* [3073] */
    (xdc_Char)0x6c,  /* [3074] */
    (xdc_Char)0x6f,  /* [3075] */
    (xdc_Char)0x63,  /* [3076] */
    (xdc_Char)0x6b,  /* [3077] */
    (xdc_Char)0x73,  /* [3078] */
    (xdc_Char)0x20,  /* [3079] */
    (xdc_Char)0x63,  /* [3080] */
    (xdc_Char)0x61,  /* [3081] */
    (xdc_Char)0x6e,  /* [3082] */
    (xdc_Char)0x6e,  /* [3083] */
    (xdc_Char)0x6f,  /* [3084] */
    (xdc_Char)0x74,  /* [3085] */
    (xdc_Char)0x20,  /* [3086] */
    (xdc_Char)0x62,  /* [3087] */
    (xdc_Char)0x65,  /* [3088] */
    (xdc_Char)0x20,  /* [3089] */
    (xdc_Char)0x7a,  /* [3090] */
    (xdc_Char)0x65,  /* [3091] */
    (xdc_Char)0x72,  /* [3092] */
    (xdc_Char)0x6f,  /* [3093] */
    (xdc_Char)0x0,  /* [3094] */
    (xdc_Char)0x62,  /* [3095] */
    (xdc_Char)0x75,  /* [3096] */
    (xdc_Char)0x66,  /* [3097] */
    (xdc_Char)0x53,  /* [3098] */
    (xdc_Char)0x69,  /* [3099] */
    (xdc_Char)0x7a,  /* [3100] */
    (xdc_Char)0x65,  /* [3101] */
    (xdc_Char)0x20,  /* [3102] */
    (xdc_Char)0x63,  /* [3103] */
    (xdc_Char)0x61,  /* [3104] */
    (xdc_Char)0x6e,  /* [3105] */
    (xdc_Char)0x6e,  /* [3106] */
    (xdc_Char)0x6f,  /* [3107] */
    (xdc_Char)0x74,  /* [3108] */
    (xdc_Char)0x20,  /* [3109] */
    (xdc_Char)0x62,  /* [3110] */
    (xdc_Char)0x65,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x7a,  /* [3113] */
    (xdc_Char)0x65,  /* [3114] */
    (xdc_Char)0x72,  /* [3115] */
    (xdc_Char)0x6f,  /* [3116] */
    (xdc_Char)0x0,  /* [3117] */
    (xdc_Char)0x48,  /* [3118] */
    (xdc_Char)0x65,  /* [3119] */
    (xdc_Char)0x61,  /* [3120] */
    (xdc_Char)0x70,  /* [3121] */
    (xdc_Char)0x42,  /* [3122] */
    (xdc_Char)0x75,  /* [3123] */
    (xdc_Char)0x66,  /* [3124] */
    (xdc_Char)0x5f,  /* [3125] */
    (xdc_Char)0x63,  /* [3126] */
    (xdc_Char)0x72,  /* [3127] */
    (xdc_Char)0x65,  /* [3128] */
    (xdc_Char)0x61,  /* [3129] */
    (xdc_Char)0x74,  /* [3130] */
    (xdc_Char)0x65,  /* [3131] */
    (xdc_Char)0x27,  /* [3132] */
    (xdc_Char)0x73,  /* [3133] */
    (xdc_Char)0x20,  /* [3134] */
    (xdc_Char)0x62,  /* [3135] */
    (xdc_Char)0x75,  /* [3136] */
    (xdc_Char)0x66,  /* [3137] */
    (xdc_Char)0x53,  /* [3138] */
    (xdc_Char)0x69,  /* [3139] */
    (xdc_Char)0x7a,  /* [3140] */
    (xdc_Char)0x65,  /* [3141] */
    (xdc_Char)0x20,  /* [3142] */
    (xdc_Char)0x70,  /* [3143] */
    (xdc_Char)0x61,  /* [3144] */
    (xdc_Char)0x72,  /* [3145] */
    (xdc_Char)0x61,  /* [3146] */
    (xdc_Char)0x6d,  /* [3147] */
    (xdc_Char)0x65,  /* [3148] */
    (xdc_Char)0x74,  /* [3149] */
    (xdc_Char)0x65,  /* [3150] */
    (xdc_Char)0x72,  /* [3151] */
    (xdc_Char)0x20,  /* [3152] */
    (xdc_Char)0x69,  /* [3153] */
    (xdc_Char)0x73,  /* [3154] */
    (xdc_Char)0x20,  /* [3155] */
    (xdc_Char)0x69,  /* [3156] */
    (xdc_Char)0x6e,  /* [3157] */
    (xdc_Char)0x76,  /* [3158] */
    (xdc_Char)0x61,  /* [3159] */
    (xdc_Char)0x6c,  /* [3160] */
    (xdc_Char)0x69,  /* [3161] */
    (xdc_Char)0x64,  /* [3162] */
    (xdc_Char)0x20,  /* [3163] */
    (xdc_Char)0x28,  /* [3164] */
    (xdc_Char)0x74,  /* [3165] */
    (xdc_Char)0x6f,  /* [3166] */
    (xdc_Char)0x6f,  /* [3167] */
    (xdc_Char)0x20,  /* [3168] */
    (xdc_Char)0x73,  /* [3169] */
    (xdc_Char)0x6d,  /* [3170] */
    (xdc_Char)0x61,  /* [3171] */
    (xdc_Char)0x6c,  /* [3172] */
    (xdc_Char)0x6c,  /* [3173] */
    (xdc_Char)0x29,  /* [3174] */
    (xdc_Char)0x0,  /* [3175] */
    (xdc_Char)0x43,  /* [3176] */
    (xdc_Char)0x61,  /* [3177] */
    (xdc_Char)0x6e,  /* [3178] */
    (xdc_Char)0x6e,  /* [3179] */
    (xdc_Char)0x6f,  /* [3180] */
    (xdc_Char)0x74,  /* [3181] */
    (xdc_Char)0x20,  /* [3182] */
    (xdc_Char)0x63,  /* [3183] */
    (xdc_Char)0x61,  /* [3184] */
    (xdc_Char)0x6c,  /* [3185] */
    (xdc_Char)0x6c,  /* [3186] */
    (xdc_Char)0x20,  /* [3187] */
    (xdc_Char)0x48,  /* [3188] */
    (xdc_Char)0x65,  /* [3189] */
    (xdc_Char)0x61,  /* [3190] */
    (xdc_Char)0x70,  /* [3191] */
    (xdc_Char)0x42,  /* [3192] */
    (xdc_Char)0x75,  /* [3193] */
    (xdc_Char)0x66,  /* [3194] */
    (xdc_Char)0x5f,  /* [3195] */
    (xdc_Char)0x66,  /* [3196] */
    (xdc_Char)0x72,  /* [3197] */
    (xdc_Char)0x65,  /* [3198] */
    (xdc_Char)0x65,  /* [3199] */
    (xdc_Char)0x20,  /* [3200] */
    (xdc_Char)0x77,  /* [3201] */
    (xdc_Char)0x68,  /* [3202] */
    (xdc_Char)0x65,  /* [3203] */
    (xdc_Char)0x6e,  /* [3204] */
    (xdc_Char)0x20,  /* [3205] */
    (xdc_Char)0x6e,  /* [3206] */
    (xdc_Char)0x6f,  /* [3207] */
    (xdc_Char)0x20,  /* [3208] */
    (xdc_Char)0x62,  /* [3209] */
    (xdc_Char)0x6c,  /* [3210] */
    (xdc_Char)0x6f,  /* [3211] */
    (xdc_Char)0x63,  /* [3212] */
    (xdc_Char)0x6b,  /* [3213] */
    (xdc_Char)0x73,  /* [3214] */
    (xdc_Char)0x20,  /* [3215] */
    (xdc_Char)0x68,  /* [3216] */
    (xdc_Char)0x61,  /* [3217] */
    (xdc_Char)0x76,  /* [3218] */
    (xdc_Char)0x65,  /* [3219] */
    (xdc_Char)0x20,  /* [3220] */
    (xdc_Char)0x62,  /* [3221] */
    (xdc_Char)0x65,  /* [3222] */
    (xdc_Char)0x65,  /* [3223] */
    (xdc_Char)0x6e,  /* [3224] */
    (xdc_Char)0x20,  /* [3225] */
    (xdc_Char)0x61,  /* [3226] */
    (xdc_Char)0x6c,  /* [3227] */
    (xdc_Char)0x6c,  /* [3228] */
    (xdc_Char)0x6f,  /* [3229] */
    (xdc_Char)0x63,  /* [3230] */
    (xdc_Char)0x61,  /* [3231] */
    (xdc_Char)0x74,  /* [3232] */
    (xdc_Char)0x65,  /* [3233] */
    (xdc_Char)0x64,  /* [3234] */
    (xdc_Char)0x0,  /* [3235] */
    (xdc_Char)0x41,  /* [3236] */
    (xdc_Char)0x5f,  /* [3237] */
    (xdc_Char)0x69,  /* [3238] */
    (xdc_Char)0x6e,  /* [3239] */
    (xdc_Char)0x76,  /* [3240] */
    (xdc_Char)0x61,  /* [3241] */
    (xdc_Char)0x6c,  /* [3242] */
    (xdc_Char)0x69,  /* [3243] */
    (xdc_Char)0x64,  /* [3244] */
    (xdc_Char)0x46,  /* [3245] */
    (xdc_Char)0x72,  /* [3246] */
    (xdc_Char)0x65,  /* [3247] */
    (xdc_Char)0x65,  /* [3248] */
    (xdc_Char)0x3a,  /* [3249] */
    (xdc_Char)0x20,  /* [3250] */
    (xdc_Char)0x49,  /* [3251] */
    (xdc_Char)0x6e,  /* [3252] */
    (xdc_Char)0x76,  /* [3253] */
    (xdc_Char)0x61,  /* [3254] */
    (xdc_Char)0x6c,  /* [3255] */
    (xdc_Char)0x69,  /* [3256] */
    (xdc_Char)0x64,  /* [3257] */
    (xdc_Char)0x20,  /* [3258] */
    (xdc_Char)0x66,  /* [3259] */
    (xdc_Char)0x72,  /* [3260] */
    (xdc_Char)0x65,  /* [3261] */
    (xdc_Char)0x65,  /* [3262] */
    (xdc_Char)0x0,  /* [3263] */
    (xdc_Char)0x41,  /* [3264] */
    (xdc_Char)0x5f,  /* [3265] */
    (xdc_Char)0x7a,  /* [3266] */
    (xdc_Char)0x65,  /* [3267] */
    (xdc_Char)0x72,  /* [3268] */
    (xdc_Char)0x6f,  /* [3269] */
    (xdc_Char)0x42,  /* [3270] */
    (xdc_Char)0x6c,  /* [3271] */
    (xdc_Char)0x6f,  /* [3272] */
    (xdc_Char)0x63,  /* [3273] */
    (xdc_Char)0x6b,  /* [3274] */
    (xdc_Char)0x3a,  /* [3275] */
    (xdc_Char)0x20,  /* [3276] */
    (xdc_Char)0x43,  /* [3277] */
    (xdc_Char)0x61,  /* [3278] */
    (xdc_Char)0x6e,  /* [3279] */
    (xdc_Char)0x6e,  /* [3280] */
    (xdc_Char)0x6f,  /* [3281] */
    (xdc_Char)0x74,  /* [3282] */
    (xdc_Char)0x20,  /* [3283] */
    (xdc_Char)0x61,  /* [3284] */
    (xdc_Char)0x6c,  /* [3285] */
    (xdc_Char)0x6c,  /* [3286] */
    (xdc_Char)0x6f,  /* [3287] */
    (xdc_Char)0x63,  /* [3288] */
    (xdc_Char)0x61,  /* [3289] */
    (xdc_Char)0x74,  /* [3290] */
    (xdc_Char)0x65,  /* [3291] */
    (xdc_Char)0x20,  /* [3292] */
    (xdc_Char)0x73,  /* [3293] */
    (xdc_Char)0x69,  /* [3294] */
    (xdc_Char)0x7a,  /* [3295] */
    (xdc_Char)0x65,  /* [3296] */
    (xdc_Char)0x20,  /* [3297] */
    (xdc_Char)0x30,  /* [3298] */
    (xdc_Char)0x0,  /* [3299] */
    (xdc_Char)0x41,  /* [3300] */
    (xdc_Char)0x5f,  /* [3301] */
    (xdc_Char)0x68,  /* [3302] */
    (xdc_Char)0x65,  /* [3303] */
    (xdc_Char)0x61,  /* [3304] */
    (xdc_Char)0x70,  /* [3305] */
    (xdc_Char)0x53,  /* [3306] */
    (xdc_Char)0x69,  /* [3307] */
    (xdc_Char)0x7a,  /* [3308] */
    (xdc_Char)0x65,  /* [3309] */
    (xdc_Char)0x3a,  /* [3310] */
    (xdc_Char)0x20,  /* [3311] */
    (xdc_Char)0x52,  /* [3312] */
    (xdc_Char)0x65,  /* [3313] */
    (xdc_Char)0x71,  /* [3314] */
    (xdc_Char)0x75,  /* [3315] */
    (xdc_Char)0x65,  /* [3316] */
    (xdc_Char)0x73,  /* [3317] */
    (xdc_Char)0x74,  /* [3318] */
    (xdc_Char)0x65,  /* [3319] */
    (xdc_Char)0x64,  /* [3320] */
    (xdc_Char)0x20,  /* [3321] */
    (xdc_Char)0x68,  /* [3322] */
    (xdc_Char)0x65,  /* [3323] */
    (xdc_Char)0x61,  /* [3324] */
    (xdc_Char)0x70,  /* [3325] */
    (xdc_Char)0x20,  /* [3326] */
    (xdc_Char)0x73,  /* [3327] */
    (xdc_Char)0x69,  /* [3328] */
    (xdc_Char)0x7a,  /* [3329] */
    (xdc_Char)0x65,  /* [3330] */
    (xdc_Char)0x20,  /* [3331] */
    (xdc_Char)0x69,  /* [3332] */
    (xdc_Char)0x73,  /* [3333] */
    (xdc_Char)0x20,  /* [3334] */
    (xdc_Char)0x74,  /* [3335] */
    (xdc_Char)0x6f,  /* [3336] */
    (xdc_Char)0x6f,  /* [3337] */
    (xdc_Char)0x20,  /* [3338] */
    (xdc_Char)0x73,  /* [3339] */
    (xdc_Char)0x6d,  /* [3340] */
    (xdc_Char)0x61,  /* [3341] */
    (xdc_Char)0x6c,  /* [3342] */
    (xdc_Char)0x6c,  /* [3343] */
    (xdc_Char)0x0,  /* [3344] */
    (xdc_Char)0x41,  /* [3345] */
    (xdc_Char)0x5f,  /* [3346] */
    (xdc_Char)0x61,  /* [3347] */
    (xdc_Char)0x6c,  /* [3348] */
    (xdc_Char)0x69,  /* [3349] */
    (xdc_Char)0x67,  /* [3350] */
    (xdc_Char)0x6e,  /* [3351] */
    (xdc_Char)0x3a,  /* [3352] */
    (xdc_Char)0x20,  /* [3353] */
    (xdc_Char)0x52,  /* [3354] */
    (xdc_Char)0x65,  /* [3355] */
    (xdc_Char)0x71,  /* [3356] */
    (xdc_Char)0x75,  /* [3357] */
    (xdc_Char)0x65,  /* [3358] */
    (xdc_Char)0x73,  /* [3359] */
    (xdc_Char)0x74,  /* [3360] */
    (xdc_Char)0x65,  /* [3361] */
    (xdc_Char)0x64,  /* [3362] */
    (xdc_Char)0x20,  /* [3363] */
    (xdc_Char)0x61,  /* [3364] */
    (xdc_Char)0x6c,  /* [3365] */
    (xdc_Char)0x69,  /* [3366] */
    (xdc_Char)0x67,  /* [3367] */
    (xdc_Char)0x6e,  /* [3368] */
    (xdc_Char)0x20,  /* [3369] */
    (xdc_Char)0x69,  /* [3370] */
    (xdc_Char)0x73,  /* [3371] */
    (xdc_Char)0x20,  /* [3372] */
    (xdc_Char)0x6e,  /* [3373] */
    (xdc_Char)0x6f,  /* [3374] */
    (xdc_Char)0x74,  /* [3375] */
    (xdc_Char)0x20,  /* [3376] */
    (xdc_Char)0x61,  /* [3377] */
    (xdc_Char)0x20,  /* [3378] */
    (xdc_Char)0x70,  /* [3379] */
    (xdc_Char)0x6f,  /* [3380] */
    (xdc_Char)0x77,  /* [3381] */
    (xdc_Char)0x65,  /* [3382] */
    (xdc_Char)0x72,  /* [3383] */
    (xdc_Char)0x20,  /* [3384] */
    (xdc_Char)0x6f,  /* [3385] */
    (xdc_Char)0x66,  /* [3386] */
    (xdc_Char)0x20,  /* [3387] */
    (xdc_Char)0x32,  /* [3388] */
    (xdc_Char)0x0,  /* [3389] */
    (xdc_Char)0x49,  /* [3390] */
    (xdc_Char)0x6e,  /* [3391] */
    (xdc_Char)0x76,  /* [3392] */
    (xdc_Char)0x61,  /* [3393] */
    (xdc_Char)0x6c,  /* [3394] */
    (xdc_Char)0x69,  /* [3395] */
    (xdc_Char)0x64,  /* [3396] */
    (xdc_Char)0x20,  /* [3397] */
    (xdc_Char)0x62,  /* [3398] */
    (xdc_Char)0x6c,  /* [3399] */
    (xdc_Char)0x6f,  /* [3400] */
    (xdc_Char)0x63,  /* [3401] */
    (xdc_Char)0x6b,  /* [3402] */
    (xdc_Char)0x20,  /* [3403] */
    (xdc_Char)0x61,  /* [3404] */
    (xdc_Char)0x64,  /* [3405] */
    (xdc_Char)0x64,  /* [3406] */
    (xdc_Char)0x72,  /* [3407] */
    (xdc_Char)0x65,  /* [3408] */
    (xdc_Char)0x73,  /* [3409] */
    (xdc_Char)0x73,  /* [3410] */
    (xdc_Char)0x20,  /* [3411] */
    (xdc_Char)0x6f,  /* [3412] */
    (xdc_Char)0x6e,  /* [3413] */
    (xdc_Char)0x20,  /* [3414] */
    (xdc_Char)0x74,  /* [3415] */
    (xdc_Char)0x68,  /* [3416] */
    (xdc_Char)0x65,  /* [3417] */
    (xdc_Char)0x20,  /* [3418] */
    (xdc_Char)0x66,  /* [3419] */
    (xdc_Char)0x72,  /* [3420] */
    (xdc_Char)0x65,  /* [3421] */
    (xdc_Char)0x65,  /* [3422] */
    (xdc_Char)0x2e,  /* [3423] */
    (xdc_Char)0x20,  /* [3424] */
    (xdc_Char)0x46,  /* [3425] */
    (xdc_Char)0x61,  /* [3426] */
    (xdc_Char)0x69,  /* [3427] */
    (xdc_Char)0x6c,  /* [3428] */
    (xdc_Char)0x65,  /* [3429] */
    (xdc_Char)0x64,  /* [3430] */
    (xdc_Char)0x20,  /* [3431] */
    (xdc_Char)0x74,  /* [3432] */
    (xdc_Char)0x6f,  /* [3433] */
    (xdc_Char)0x20,  /* [3434] */
    (xdc_Char)0x66,  /* [3435] */
    (xdc_Char)0x72,  /* [3436] */
    (xdc_Char)0x65,  /* [3437] */
    (xdc_Char)0x65,  /* [3438] */
    (xdc_Char)0x20,  /* [3439] */
    (xdc_Char)0x62,  /* [3440] */
    (xdc_Char)0x6c,  /* [3441] */
    (xdc_Char)0x6f,  /* [3442] */
    (xdc_Char)0x63,  /* [3443] */
    (xdc_Char)0x6b,  /* [3444] */
    (xdc_Char)0x20,  /* [3445] */
    (xdc_Char)0x62,  /* [3446] */
    (xdc_Char)0x61,  /* [3447] */
    (xdc_Char)0x63,  /* [3448] */
    (xdc_Char)0x6b,  /* [3449] */
    (xdc_Char)0x20,  /* [3450] */
    (xdc_Char)0x74,  /* [3451] */
    (xdc_Char)0x6f,  /* [3452] */
    (xdc_Char)0x20,  /* [3453] */
    (xdc_Char)0x68,  /* [3454] */
    (xdc_Char)0x65,  /* [3455] */
    (xdc_Char)0x61,  /* [3456] */
    (xdc_Char)0x70,  /* [3457] */
    (xdc_Char)0x2e,  /* [3458] */
    (xdc_Char)0x0,  /* [3459] */
    (xdc_Char)0x41,  /* [3460] */
    (xdc_Char)0x5f,  /* [3461] */
    (xdc_Char)0x64,  /* [3462] */
    (xdc_Char)0x6f,  /* [3463] */
    (xdc_Char)0x75,  /* [3464] */
    (xdc_Char)0x62,  /* [3465] */
    (xdc_Char)0x6c,  /* [3466] */
    (xdc_Char)0x65,  /* [3467] */
    (xdc_Char)0x46,  /* [3468] */
    (xdc_Char)0x72,  /* [3469] */
    (xdc_Char)0x65,  /* [3470] */
    (xdc_Char)0x65,  /* [3471] */
    (xdc_Char)0x3a,  /* [3472] */
    (xdc_Char)0x20,  /* [3473] */
    (xdc_Char)0x42,  /* [3474] */
    (xdc_Char)0x75,  /* [3475] */
    (xdc_Char)0x66,  /* [3476] */
    (xdc_Char)0x66,  /* [3477] */
    (xdc_Char)0x65,  /* [3478] */
    (xdc_Char)0x72,  /* [3479] */
    (xdc_Char)0x20,  /* [3480] */
    (xdc_Char)0x61,  /* [3481] */
    (xdc_Char)0x6c,  /* [3482] */
    (xdc_Char)0x72,  /* [3483] */
    (xdc_Char)0x65,  /* [3484] */
    (xdc_Char)0x61,  /* [3485] */
    (xdc_Char)0x64,  /* [3486] */
    (xdc_Char)0x79,  /* [3487] */
    (xdc_Char)0x20,  /* [3488] */
    (xdc_Char)0x66,  /* [3489] */
    (xdc_Char)0x72,  /* [3490] */
    (xdc_Char)0x65,  /* [3491] */
    (xdc_Char)0x65,  /* [3492] */
    (xdc_Char)0x0,  /* [3493] */
    (xdc_Char)0x41,  /* [3494] */
    (xdc_Char)0x5f,  /* [3495] */
    (xdc_Char)0x62,  /* [3496] */
    (xdc_Char)0x75,  /* [3497] */
    (xdc_Char)0x66,  /* [3498] */
    (xdc_Char)0x4f,  /* [3499] */
    (xdc_Char)0x76,  /* [3500] */
    (xdc_Char)0x65,  /* [3501] */
    (xdc_Char)0x72,  /* [3502] */
    (xdc_Char)0x66,  /* [3503] */
    (xdc_Char)0x6c,  /* [3504] */
    (xdc_Char)0x6f,  /* [3505] */
    (xdc_Char)0x77,  /* [3506] */
    (xdc_Char)0x3a,  /* [3507] */
    (xdc_Char)0x20,  /* [3508] */
    (xdc_Char)0x42,  /* [3509] */
    (xdc_Char)0x75,  /* [3510] */
    (xdc_Char)0x66,  /* [3511] */
    (xdc_Char)0x66,  /* [3512] */
    (xdc_Char)0x65,  /* [3513] */
    (xdc_Char)0x72,  /* [3514] */
    (xdc_Char)0x20,  /* [3515] */
    (xdc_Char)0x6f,  /* [3516] */
    (xdc_Char)0x76,  /* [3517] */
    (xdc_Char)0x65,  /* [3518] */
    (xdc_Char)0x72,  /* [3519] */
    (xdc_Char)0x66,  /* [3520] */
    (xdc_Char)0x6c,  /* [3521] */
    (xdc_Char)0x6f,  /* [3522] */
    (xdc_Char)0x77,  /* [3523] */
    (xdc_Char)0x0,  /* [3524] */
    (xdc_Char)0x41,  /* [3525] */
    (xdc_Char)0x5f,  /* [3526] */
    (xdc_Char)0x6e,  /* [3527] */
    (xdc_Char)0x6f,  /* [3528] */
    (xdc_Char)0x74,  /* [3529] */
    (xdc_Char)0x45,  /* [3530] */
    (xdc_Char)0x6d,  /* [3531] */
    (xdc_Char)0x70,  /* [3532] */
    (xdc_Char)0x74,  /* [3533] */
    (xdc_Char)0x79,  /* [3534] */
    (xdc_Char)0x3a,  /* [3535] */
    (xdc_Char)0x20,  /* [3536] */
    (xdc_Char)0x48,  /* [3537] */
    (xdc_Char)0x65,  /* [3538] */
    (xdc_Char)0x61,  /* [3539] */
    (xdc_Char)0x70,  /* [3540] */
    (xdc_Char)0x20,  /* [3541] */
    (xdc_Char)0x6e,  /* [3542] */
    (xdc_Char)0x6f,  /* [3543] */
    (xdc_Char)0x74,  /* [3544] */
    (xdc_Char)0x20,  /* [3545] */
    (xdc_Char)0x65,  /* [3546] */
    (xdc_Char)0x6d,  /* [3547] */
    (xdc_Char)0x70,  /* [3548] */
    (xdc_Char)0x74,  /* [3549] */
    (xdc_Char)0x79,  /* [3550] */
    (xdc_Char)0x0,  /* [3551] */
    (xdc_Char)0x41,  /* [3552] */
    (xdc_Char)0x5f,  /* [3553] */
    (xdc_Char)0x6e,  /* [3554] */
    (xdc_Char)0x75,  /* [3555] */
    (xdc_Char)0x6c,  /* [3556] */
    (xdc_Char)0x6c,  /* [3557] */
    (xdc_Char)0x4f,  /* [3558] */
    (xdc_Char)0x62,  /* [3559] */
    (xdc_Char)0x6a,  /* [3560] */
    (xdc_Char)0x65,  /* [3561] */
    (xdc_Char)0x63,  /* [3562] */
    (xdc_Char)0x74,  /* [3563] */
    (xdc_Char)0x3a,  /* [3564] */
    (xdc_Char)0x20,  /* [3565] */
    (xdc_Char)0x48,  /* [3566] */
    (xdc_Char)0x65,  /* [3567] */
    (xdc_Char)0x61,  /* [3568] */
    (xdc_Char)0x70,  /* [3569] */
    (xdc_Char)0x54,  /* [3570] */
    (xdc_Char)0x72,  /* [3571] */
    (xdc_Char)0x61,  /* [3572] */
    (xdc_Char)0x63,  /* [3573] */
    (xdc_Char)0x6b,  /* [3574] */
    (xdc_Char)0x5f,  /* [3575] */
    (xdc_Char)0x70,  /* [3576] */
    (xdc_Char)0x72,  /* [3577] */
    (xdc_Char)0x69,  /* [3578] */
    (xdc_Char)0x6e,  /* [3579] */
    (xdc_Char)0x74,  /* [3580] */
    (xdc_Char)0x48,  /* [3581] */
    (xdc_Char)0x65,  /* [3582] */
    (xdc_Char)0x61,  /* [3583] */
    (xdc_Char)0x70,  /* [3584] */
    (xdc_Char)0x20,  /* [3585] */
    (xdc_Char)0x63,  /* [3586] */
    (xdc_Char)0x61,  /* [3587] */
    (xdc_Char)0x6c,  /* [3588] */
    (xdc_Char)0x6c,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x64,  /* [3591] */
    (xdc_Char)0x20,  /* [3592] */
    (xdc_Char)0x77,  /* [3593] */
    (xdc_Char)0x69,  /* [3594] */
    (xdc_Char)0x74,  /* [3595] */
    (xdc_Char)0x68,  /* [3596] */
    (xdc_Char)0x20,  /* [3597] */
    (xdc_Char)0x6e,  /* [3598] */
    (xdc_Char)0x75,  /* [3599] */
    (xdc_Char)0x6c,  /* [3600] */
    (xdc_Char)0x6c,  /* [3601] */
    (xdc_Char)0x20,  /* [3602] */
    (xdc_Char)0x6f,  /* [3603] */
    (xdc_Char)0x62,  /* [3604] */
    (xdc_Char)0x6a,  /* [3605] */
    (xdc_Char)0x0,  /* [3606] */
    (xdc_Char)0x41,  /* [3607] */
    (xdc_Char)0x5f,  /* [3608] */
    (xdc_Char)0x62,  /* [3609] */
    (xdc_Char)0x61,  /* [3610] */
    (xdc_Char)0x64,  /* [3611] */
    (xdc_Char)0x42,  /* [3612] */
    (xdc_Char)0x6c,  /* [3613] */
    (xdc_Char)0x6f,  /* [3614] */
    (xdc_Char)0x63,  /* [3615] */
    (xdc_Char)0x6b,  /* [3616] */
    (xdc_Char)0x4c,  /* [3617] */
    (xdc_Char)0x65,  /* [3618] */
    (xdc_Char)0x6e,  /* [3619] */
    (xdc_Char)0x67,  /* [3620] */
    (xdc_Char)0x74,  /* [3621] */
    (xdc_Char)0x68,  /* [3622] */
    (xdc_Char)0x3a,  /* [3623] */
    (xdc_Char)0x20,  /* [3624] */
    (xdc_Char)0x42,  /* [3625] */
    (xdc_Char)0x6c,  /* [3626] */
    (xdc_Char)0x6f,  /* [3627] */
    (xdc_Char)0x63,  /* [3628] */
    (xdc_Char)0x6b,  /* [3629] */
    (xdc_Char)0x20,  /* [3630] */
    (xdc_Char)0x6c,  /* [3631] */
    (xdc_Char)0x65,  /* [3632] */
    (xdc_Char)0x6e,  /* [3633] */
    (xdc_Char)0x67,  /* [3634] */
    (xdc_Char)0x74,  /* [3635] */
    (xdc_Char)0x68,  /* [3636] */
    (xdc_Char)0x20,  /* [3637] */
    (xdc_Char)0x74,  /* [3638] */
    (xdc_Char)0x6f,  /* [3639] */
    (xdc_Char)0x6f,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x6c,  /* [3642] */
    (xdc_Char)0x61,  /* [3643] */
    (xdc_Char)0x72,  /* [3644] */
    (xdc_Char)0x67,  /* [3645] */
    (xdc_Char)0x65,  /* [3646] */
    (xdc_Char)0x2e,  /* [3647] */
    (xdc_Char)0x20,  /* [3648] */
    (xdc_Char)0x4d,  /* [3649] */
    (xdc_Char)0x75,  /* [3650] */
    (xdc_Char)0x73,  /* [3651] */
    (xdc_Char)0x74,  /* [3652] */
    (xdc_Char)0x20,  /* [3653] */
    (xdc_Char)0x62,  /* [3654] */
    (xdc_Char)0x65,  /* [3655] */
    (xdc_Char)0x20,  /* [3656] */
    (xdc_Char)0x3c,  /* [3657] */
    (xdc_Char)0x3d,  /* [3658] */
    (xdc_Char)0x20,  /* [3659] */
    (xdc_Char)0x4c,  /* [3660] */
    (xdc_Char)0x32,  /* [3661] */
    (xdc_Char)0x20,  /* [3662] */
    (xdc_Char)0x77,  /* [3663] */
    (xdc_Char)0x61,  /* [3664] */
    (xdc_Char)0x79,  /* [3665] */
    (xdc_Char)0x20,  /* [3666] */
    (xdc_Char)0x73,  /* [3667] */
    (xdc_Char)0x69,  /* [3668] */
    (xdc_Char)0x7a,  /* [3669] */
    (xdc_Char)0x65,  /* [3670] */
    (xdc_Char)0x2e,  /* [3671] */
    (xdc_Char)0x0,  /* [3672] */
    (xdc_Char)0x41,  /* [3673] */
    (xdc_Char)0x5f,  /* [3674] */
    (xdc_Char)0x62,  /* [3675] */
    (xdc_Char)0x6c,  /* [3676] */
    (xdc_Char)0x6f,  /* [3677] */
    (xdc_Char)0x63,  /* [3678] */
    (xdc_Char)0x6b,  /* [3679] */
    (xdc_Char)0x43,  /* [3680] */
    (xdc_Char)0x72,  /* [3681] */
    (xdc_Char)0x6f,  /* [3682] */
    (xdc_Char)0x73,  /* [3683] */
    (xdc_Char)0x73,  /* [3684] */
    (xdc_Char)0x65,  /* [3685] */
    (xdc_Char)0x73,  /* [3686] */
    (xdc_Char)0x50,  /* [3687] */
    (xdc_Char)0x61,  /* [3688] */
    (xdc_Char)0x67,  /* [3689] */
    (xdc_Char)0x65,  /* [3690] */
    (xdc_Char)0x3a,  /* [3691] */
    (xdc_Char)0x20,  /* [3692] */
    (xdc_Char)0x4d,  /* [3693] */
    (xdc_Char)0x65,  /* [3694] */
    (xdc_Char)0x6d,  /* [3695] */
    (xdc_Char)0x6f,  /* [3696] */
    (xdc_Char)0x72,  /* [3697] */
    (xdc_Char)0x79,  /* [3698] */
    (xdc_Char)0x20,  /* [3699] */
    (xdc_Char)0x62,  /* [3700] */
    (xdc_Char)0x6c,  /* [3701] */
    (xdc_Char)0x6f,  /* [3702] */
    (xdc_Char)0x63,  /* [3703] */
    (xdc_Char)0x6b,  /* [3704] */
    (xdc_Char)0x20,  /* [3705] */
    (xdc_Char)0x63,  /* [3706] */
    (xdc_Char)0x72,  /* [3707] */
    (xdc_Char)0x6f,  /* [3708] */
    (xdc_Char)0x73,  /* [3709] */
    (xdc_Char)0x73,  /* [3710] */
    (xdc_Char)0x65,  /* [3711] */
    (xdc_Char)0x73,  /* [3712] */
    (xdc_Char)0x20,  /* [3713] */
    (xdc_Char)0x4c,  /* [3714] */
    (xdc_Char)0x32,  /* [3715] */
    (xdc_Char)0x20,  /* [3716] */
    (xdc_Char)0x77,  /* [3717] */
    (xdc_Char)0x61,  /* [3718] */
    (xdc_Char)0x79,  /* [3719] */
    (xdc_Char)0x20,  /* [3720] */
    (xdc_Char)0x70,  /* [3721] */
    (xdc_Char)0x61,  /* [3722] */
    (xdc_Char)0x67,  /* [3723] */
    (xdc_Char)0x65,  /* [3724] */
    (xdc_Char)0x20,  /* [3725] */
    (xdc_Char)0x62,  /* [3726] */
    (xdc_Char)0x6f,  /* [3727] */
    (xdc_Char)0x75,  /* [3728] */
    (xdc_Char)0x6e,  /* [3729] */
    (xdc_Char)0x64,  /* [3730] */
    (xdc_Char)0x61,  /* [3731] */
    (xdc_Char)0x72,  /* [3732] */
    (xdc_Char)0x79,  /* [3733] */
    (xdc_Char)0x2e,  /* [3734] */
    (xdc_Char)0x0,  /* [3735] */
    (xdc_Char)0x41,  /* [3736] */
    (xdc_Char)0x5f,  /* [3737] */
    (xdc_Char)0x62,  /* [3738] */
    (xdc_Char)0x61,  /* [3739] */
    (xdc_Char)0x64,  /* [3740] */
    (xdc_Char)0x49,  /* [3741] */
    (xdc_Char)0x6e,  /* [3742] */
    (xdc_Char)0x76,  /* [3743] */
    (xdc_Char)0x43,  /* [3744] */
    (xdc_Char)0x61,  /* [3745] */
    (xdc_Char)0x6c,  /* [3746] */
    (xdc_Char)0x6c,  /* [3747] */
    (xdc_Char)0x57,  /* [3748] */
    (xdc_Char)0x69,  /* [3749] */
    (xdc_Char)0x74,  /* [3750] */
    (xdc_Char)0x68,  /* [3751] */
    (xdc_Char)0x4c,  /* [3752] */
    (xdc_Char)0x32,  /* [3753] */
    (xdc_Char)0x45,  /* [3754] */
    (xdc_Char)0x6e,  /* [3755] */
    (xdc_Char)0x3a,  /* [3756] */
    (xdc_Char)0x20,  /* [3757] */
    (xdc_Char)0x43,  /* [3758] */
    (xdc_Char)0x61,  /* [3759] */
    (xdc_Char)0x6e,  /* [3760] */
    (xdc_Char)0x6e,  /* [3761] */
    (xdc_Char)0x6f,  /* [3762] */
    (xdc_Char)0x74,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x63,  /* [3765] */
    (xdc_Char)0x61,  /* [3766] */
    (xdc_Char)0x6c,  /* [3767] */
    (xdc_Char)0x6c,  /* [3768] */
    (xdc_Char)0x20,  /* [3769] */
    (xdc_Char)0x63,  /* [3770] */
    (xdc_Char)0x61,  /* [3771] */
    (xdc_Char)0x63,  /* [3772] */
    (xdc_Char)0x68,  /* [3773] */
    (xdc_Char)0x65,  /* [3774] */
    (xdc_Char)0x20,  /* [3775] */
    (xdc_Char)0x49,  /* [3776] */
    (xdc_Char)0x6e,  /* [3777] */
    (xdc_Char)0x76,  /* [3778] */
    (xdc_Char)0x61,  /* [3779] */
    (xdc_Char)0x6c,  /* [3780] */
    (xdc_Char)0x69,  /* [3781] */
    (xdc_Char)0x64,  /* [3782] */
    (xdc_Char)0x61,  /* [3783] */
    (xdc_Char)0x74,  /* [3784] */
    (xdc_Char)0x65,  /* [3785] */
    (xdc_Char)0x20,  /* [3786] */
    (xdc_Char)0x77,  /* [3787] */
    (xdc_Char)0x69,  /* [3788] */
    (xdc_Char)0x74,  /* [3789] */
    (xdc_Char)0x68,  /* [3790] */
    (xdc_Char)0x20,  /* [3791] */
    (xdc_Char)0x4c,  /* [3792] */
    (xdc_Char)0x32,  /* [3793] */
    (xdc_Char)0x20,  /* [3794] */
    (xdc_Char)0x63,  /* [3795] */
    (xdc_Char)0x61,  /* [3796] */
    (xdc_Char)0x63,  /* [3797] */
    (xdc_Char)0x68,  /* [3798] */
    (xdc_Char)0x65,  /* [3799] */
    (xdc_Char)0x20,  /* [3800] */
    (xdc_Char)0x65,  /* [3801] */
    (xdc_Char)0x6e,  /* [3802] */
    (xdc_Char)0x61,  /* [3803] */
    (xdc_Char)0x62,  /* [3804] */
    (xdc_Char)0x6c,  /* [3805] */
    (xdc_Char)0x65,  /* [3806] */
    (xdc_Char)0x64,  /* [3807] */
    (xdc_Char)0x2e,  /* [3808] */
    (xdc_Char)0x0,  /* [3809] */
    (xdc_Char)0x41,  /* [3810] */
    (xdc_Char)0x5f,  /* [3811] */
    (xdc_Char)0x6e,  /* [3812] */
    (xdc_Char)0x6f,  /* [3813] */
    (xdc_Char)0x4e,  /* [3814] */
    (xdc_Char)0x6f,  /* [3815] */
    (xdc_Char)0x6e,  /* [3816] */
    (xdc_Char)0x53,  /* [3817] */
    (xdc_Char)0x65,  /* [3818] */
    (xdc_Char)0x63,  /* [3819] */
    (xdc_Char)0x75,  /* [3820] */
    (xdc_Char)0x72,  /* [3821] */
    (xdc_Char)0x65,  /* [3822] */
    (xdc_Char)0x49,  /* [3823] */
    (xdc_Char)0x6e,  /* [3824] */
    (xdc_Char)0x74,  /* [3825] */
    (xdc_Char)0x65,  /* [3826] */
    (xdc_Char)0x72,  /* [3827] */
    (xdc_Char)0x72,  /* [3828] */
    (xdc_Char)0x75,  /* [3829] */
    (xdc_Char)0x70,  /* [3830] */
    (xdc_Char)0x74,  /* [3831] */
    (xdc_Char)0x41,  /* [3832] */
    (xdc_Char)0x63,  /* [3833] */
    (xdc_Char)0x63,  /* [3834] */
    (xdc_Char)0x65,  /* [3835] */
    (xdc_Char)0x73,  /* [3836] */
    (xdc_Char)0x73,  /* [3837] */
    (xdc_Char)0x3a,  /* [3838] */
    (xdc_Char)0x20,  /* [3839] */
    (xdc_Char)0x4e,  /* [3840] */
    (xdc_Char)0x6f,  /* [3841] */
    (xdc_Char)0x6e,  /* [3842] */
    (xdc_Char)0x2d,  /* [3843] */
    (xdc_Char)0x73,  /* [3844] */
    (xdc_Char)0x65,  /* [3845] */
    (xdc_Char)0x63,  /* [3846] */
    (xdc_Char)0x75,  /* [3847] */
    (xdc_Char)0x72,  /* [3848] */
    (xdc_Char)0x65,  /* [3849] */
    (xdc_Char)0x20,  /* [3850] */
    (xdc_Char)0x69,  /* [3851] */
    (xdc_Char)0x6e,  /* [3852] */
    (xdc_Char)0x74,  /* [3853] */
    (xdc_Char)0x65,  /* [3854] */
    (xdc_Char)0x72,  /* [3855] */
    (xdc_Char)0x72,  /* [3856] */
    (xdc_Char)0x75,  /* [3857] */
    (xdc_Char)0x70,  /* [3858] */
    (xdc_Char)0x74,  /* [3859] */
    (xdc_Char)0x20,  /* [3860] */
    (xdc_Char)0x61,  /* [3861] */
    (xdc_Char)0x63,  /* [3862] */
    (xdc_Char)0x63,  /* [3863] */
    (xdc_Char)0x65,  /* [3864] */
    (xdc_Char)0x73,  /* [3865] */
    (xdc_Char)0x73,  /* [3866] */
    (xdc_Char)0x20,  /* [3867] */
    (xdc_Char)0x63,  /* [3868] */
    (xdc_Char)0x6f,  /* [3869] */
    (xdc_Char)0x6e,  /* [3870] */
    (xdc_Char)0x74,  /* [3871] */
    (xdc_Char)0x72,  /* [3872] */
    (xdc_Char)0x6f,  /* [3873] */
    (xdc_Char)0x6c,  /* [3874] */
    (xdc_Char)0x20,  /* [3875] */
    (xdc_Char)0x64,  /* [3876] */
    (xdc_Char)0x69,  /* [3877] */
    (xdc_Char)0x73,  /* [3878] */
    (xdc_Char)0x61,  /* [3879] */
    (xdc_Char)0x62,  /* [3880] */
    (xdc_Char)0x6c,  /* [3881] */
    (xdc_Char)0x65,  /* [3882] */
    (xdc_Char)0x64,  /* [3883] */
    (xdc_Char)0x2e,  /* [3884] */
    (xdc_Char)0x0,  /* [3885] */
    (xdc_Char)0x41,  /* [3886] */
    (xdc_Char)0x5f,  /* [3887] */
    (xdc_Char)0x6e,  /* [3888] */
    (xdc_Char)0x6f,  /* [3889] */
    (xdc_Char)0x4e,  /* [3890] */
    (xdc_Char)0x6f,  /* [3891] */
    (xdc_Char)0x6e,  /* [3892] */
    (xdc_Char)0x53,  /* [3893] */
    (xdc_Char)0x65,  /* [3894] */
    (xdc_Char)0x63,  /* [3895] */
    (xdc_Char)0x75,  /* [3896] */
    (xdc_Char)0x72,  /* [3897] */
    (xdc_Char)0x65,  /* [3898] */
    (xdc_Char)0x4c,  /* [3899] */
    (xdc_Char)0x6f,  /* [3900] */
    (xdc_Char)0x63,  /* [3901] */
    (xdc_Char)0x6b,  /* [3902] */
    (xdc_Char)0x64,  /* [3903] */
    (xdc_Char)0x6f,  /* [3904] */
    (xdc_Char)0x77,  /* [3905] */
    (xdc_Char)0x6e,  /* [3906] */
    (xdc_Char)0x3a,  /* [3907] */
    (xdc_Char)0x20,  /* [3908] */
    (xdc_Char)0x4e,  /* [3909] */
    (xdc_Char)0x6f,  /* [3910] */
    (xdc_Char)0x6e,  /* [3911] */
    (xdc_Char)0x2d,  /* [3912] */
    (xdc_Char)0x73,  /* [3913] */
    (xdc_Char)0x65,  /* [3914] */
    (xdc_Char)0x63,  /* [3915] */
    (xdc_Char)0x75,  /* [3916] */
    (xdc_Char)0x72,  /* [3917] */
    (xdc_Char)0x65,  /* [3918] */
    (xdc_Char)0x20,  /* [3919] */
    (xdc_Char)0x6c,  /* [3920] */
    (xdc_Char)0x6f,  /* [3921] */
    (xdc_Char)0x63,  /* [3922] */
    (xdc_Char)0x6b,  /* [3923] */
    (xdc_Char)0x64,  /* [3924] */
    (xdc_Char)0x6f,  /* [3925] */
    (xdc_Char)0x77,  /* [3926] */
    (xdc_Char)0x6e,  /* [3927] */
    (xdc_Char)0x20,  /* [3928] */
    (xdc_Char)0x69,  /* [3929] */
    (xdc_Char)0x73,  /* [3930] */
    (xdc_Char)0x20,  /* [3931] */
    (xdc_Char)0x6e,  /* [3932] */
    (xdc_Char)0x6f,  /* [3933] */
    (xdc_Char)0x74,  /* [3934] */
    (xdc_Char)0x20,  /* [3935] */
    (xdc_Char)0x65,  /* [3936] */
    (xdc_Char)0x6e,  /* [3937] */
    (xdc_Char)0x61,  /* [3938] */
    (xdc_Char)0x62,  /* [3939] */
    (xdc_Char)0x6c,  /* [3940] */
    (xdc_Char)0x65,  /* [3941] */
    (xdc_Char)0x64,  /* [3942] */
    (xdc_Char)0x2e,  /* [3943] */
    (xdc_Char)0x0,  /* [3944] */
    (xdc_Char)0x41,  /* [3945] */
    (xdc_Char)0x5f,  /* [3946] */
    (xdc_Char)0x69,  /* [3947] */
    (xdc_Char)0x6e,  /* [3948] */
    (xdc_Char)0x76,  /* [3949] */
    (xdc_Char)0x61,  /* [3950] */
    (xdc_Char)0x6c,  /* [3951] */
    (xdc_Char)0x69,  /* [3952] */
    (xdc_Char)0x64,  /* [3953] */
    (xdc_Char)0x4c,  /* [3954] */
    (xdc_Char)0x32,  /* [3955] */
    (xdc_Char)0x43,  /* [3956] */
    (xdc_Char)0x6f,  /* [3957] */
    (xdc_Char)0x75,  /* [3958] */
    (xdc_Char)0x6e,  /* [3959] */
    (xdc_Char)0x74,  /* [3960] */
    (xdc_Char)0x65,  /* [3961] */
    (xdc_Char)0x72,  /* [3962] */
    (xdc_Char)0x49,  /* [3963] */
    (xdc_Char)0x64,  /* [3964] */
    (xdc_Char)0x3a,  /* [3965] */
    (xdc_Char)0x20,  /* [3966] */
    (xdc_Char)0x49,  /* [3967] */
    (xdc_Char)0x6e,  /* [3968] */
    (xdc_Char)0x76,  /* [3969] */
    (xdc_Char)0x61,  /* [3970] */
    (xdc_Char)0x6c,  /* [3971] */
    (xdc_Char)0x69,  /* [3972] */
    (xdc_Char)0x64,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x4c,  /* [3975] */
    (xdc_Char)0x32,  /* [3976] */
    (xdc_Char)0x20,  /* [3977] */
    (xdc_Char)0x63,  /* [3978] */
    (xdc_Char)0x61,  /* [3979] */
    (xdc_Char)0x63,  /* [3980] */
    (xdc_Char)0x68,  /* [3981] */
    (xdc_Char)0x65,  /* [3982] */
    (xdc_Char)0x20,  /* [3983] */
    (xdc_Char)0x65,  /* [3984] */
    (xdc_Char)0x76,  /* [3985] */
    (xdc_Char)0x65,  /* [3986] */
    (xdc_Char)0x6e,  /* [3987] */
    (xdc_Char)0x74,  /* [3988] */
    (xdc_Char)0x20,  /* [3989] */
    (xdc_Char)0x63,  /* [3990] */
    (xdc_Char)0x6f,  /* [3991] */
    (xdc_Char)0x75,  /* [3992] */
    (xdc_Char)0x6e,  /* [3993] */
    (xdc_Char)0x74,  /* [3994] */
    (xdc_Char)0x65,  /* [3995] */
    (xdc_Char)0x72,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x49,  /* [3998] */
    (xdc_Char)0x64,  /* [3999] */
    (xdc_Char)0x20,  /* [4000] */
    (xdc_Char)0x70,  /* [4001] */
    (xdc_Char)0x61,  /* [4002] */
    (xdc_Char)0x73,  /* [4003] */
    (xdc_Char)0x73,  /* [4004] */
    (xdc_Char)0x65,  /* [4005] */
    (xdc_Char)0x64,  /* [4006] */
    (xdc_Char)0x2e,  /* [4007] */
    (xdc_Char)0x0,  /* [4008] */
    (xdc_Char)0x41,  /* [4009] */
    (xdc_Char)0x5f,  /* [4010] */
    (xdc_Char)0x62,  /* [4011] */
    (xdc_Char)0x61,  /* [4012] */
    (xdc_Char)0x64,  /* [4013] */
    (xdc_Char)0x4c,  /* [4014] */
    (xdc_Char)0x32,  /* [4015] */
    (xdc_Char)0x43,  /* [4016] */
    (xdc_Char)0x61,  /* [4017] */
    (xdc_Char)0x63,  /* [4018] */
    (xdc_Char)0x68,  /* [4019] */
    (xdc_Char)0x65,  /* [4020] */
    (xdc_Char)0x4f,  /* [4021] */
    (xdc_Char)0x70,  /* [4022] */
    (xdc_Char)0x65,  /* [4023] */
    (xdc_Char)0x72,  /* [4024] */
    (xdc_Char)0x61,  /* [4025] */
    (xdc_Char)0x74,  /* [4026] */
    (xdc_Char)0x69,  /* [4027] */
    (xdc_Char)0x6f,  /* [4028] */
    (xdc_Char)0x6e,  /* [4029] */
    (xdc_Char)0x3a,  /* [4030] */
    (xdc_Char)0x20,  /* [4031] */
    (xdc_Char)0x43,  /* [4032] */
    (xdc_Char)0x61,  /* [4033] */
    (xdc_Char)0x6e,  /* [4034] */
    (xdc_Char)0x6e,  /* [4035] */
    (xdc_Char)0x6f,  /* [4036] */
    (xdc_Char)0x74,  /* [4037] */
    (xdc_Char)0x20,  /* [4038] */
    (xdc_Char)0x70,  /* [4039] */
    (xdc_Char)0x65,  /* [4040] */
    (xdc_Char)0x72,  /* [4041] */
    (xdc_Char)0x66,  /* [4042] */
    (xdc_Char)0x6f,  /* [4043] */
    (xdc_Char)0x72,  /* [4044] */
    (xdc_Char)0x6d,  /* [4045] */
    (xdc_Char)0x20,  /* [4046] */
    (xdc_Char)0x4c,  /* [4047] */
    (xdc_Char)0x32,  /* [4048] */
    (xdc_Char)0x20,  /* [4049] */
    (xdc_Char)0x43,  /* [4050] */
    (xdc_Char)0x61,  /* [4051] */
    (xdc_Char)0x63,  /* [4052] */
    (xdc_Char)0x68,  /* [4053] */
    (xdc_Char)0x65,  /* [4054] */
    (xdc_Char)0x20,  /* [4055] */
    (xdc_Char)0x6d,  /* [4056] */
    (xdc_Char)0x61,  /* [4057] */
    (xdc_Char)0x69,  /* [4058] */
    (xdc_Char)0x6e,  /* [4059] */
    (xdc_Char)0x74,  /* [4060] */
    (xdc_Char)0x65,  /* [4061] */
    (xdc_Char)0x6e,  /* [4062] */
    (xdc_Char)0x61,  /* [4063] */
    (xdc_Char)0x6e,  /* [4064] */
    (xdc_Char)0x63,  /* [4065] */
    (xdc_Char)0x65,  /* [4066] */
    (xdc_Char)0x20,  /* [4067] */
    (xdc_Char)0x77,  /* [4068] */
    (xdc_Char)0x68,  /* [4069] */
    (xdc_Char)0x65,  /* [4070] */
    (xdc_Char)0x6e,  /* [4071] */
    (xdc_Char)0x20,  /* [4072] */
    (xdc_Char)0x4c,  /* [4073] */
    (xdc_Char)0x32,  /* [4074] */
    (xdc_Char)0x20,  /* [4075] */
    (xdc_Char)0x63,  /* [4076] */
    (xdc_Char)0x6f,  /* [4077] */
    (xdc_Char)0x6e,  /* [4078] */
    (xdc_Char)0x66,  /* [4079] */
    (xdc_Char)0x69,  /* [4080] */
    (xdc_Char)0x67,  /* [4081] */
    (xdc_Char)0x75,  /* [4082] */
    (xdc_Char)0x72,  /* [4083] */
    (xdc_Char)0x65,  /* [4084] */
    (xdc_Char)0x64,  /* [4085] */
    (xdc_Char)0x20,  /* [4086] */
    (xdc_Char)0x61,  /* [4087] */
    (xdc_Char)0x73,  /* [4088] */
    (xdc_Char)0x20,  /* [4089] */
    (xdc_Char)0x53,  /* [4090] */
    (xdc_Char)0x52,  /* [4091] */
    (xdc_Char)0x41,  /* [4092] */
    (xdc_Char)0x4d,  /* [4093] */
    (xdc_Char)0x2e,  /* [4094] */
    (xdc_Char)0x0,  /* [4095] */
    (xdc_Char)0x41,  /* [4096] */
    (xdc_Char)0x5f,  /* [4097] */
    (xdc_Char)0x6c,  /* [4098] */
    (xdc_Char)0x31,  /* [4099] */
    (xdc_Char)0x50,  /* [4100] */
    (xdc_Char)0x72,  /* [4101] */
    (xdc_Char)0x65,  /* [4102] */
    (xdc_Char)0x66,  /* [4103] */
    (xdc_Char)0x65,  /* [4104] */
    (xdc_Char)0x74,  /* [4105] */
    (xdc_Char)0x63,  /* [4106] */
    (xdc_Char)0x68,  /* [4107] */
    (xdc_Char)0x41,  /* [4108] */
    (xdc_Char)0x70,  /* [4109] */
    (xdc_Char)0x69,  /* [4110] */
    (xdc_Char)0x4e,  /* [4111] */
    (xdc_Char)0x6f,  /* [4112] */
    (xdc_Char)0x74,  /* [4113] */
    (xdc_Char)0x53,  /* [4114] */
    (xdc_Char)0x75,  /* [4115] */
    (xdc_Char)0x70,  /* [4116] */
    (xdc_Char)0x70,  /* [4117] */
    (xdc_Char)0x6f,  /* [4118] */
    (xdc_Char)0x72,  /* [4119] */
    (xdc_Char)0x74,  /* [4120] */
    (xdc_Char)0x65,  /* [4121] */
    (xdc_Char)0x64,  /* [4122] */
    (xdc_Char)0x3a,  /* [4123] */
    (xdc_Char)0x20,  /* [4124] */
    (xdc_Char)0x43,  /* [4125] */
    (xdc_Char)0x61,  /* [4126] */
    (xdc_Char)0x63,  /* [4127] */
    (xdc_Char)0x68,  /* [4128] */
    (xdc_Char)0x65,  /* [4129] */
    (xdc_Char)0x5f,  /* [4130] */
    (xdc_Char)0x65,  /* [4131] */
    (xdc_Char)0x6e,  /* [4132] */
    (xdc_Char)0x61,  /* [4133] */
    (xdc_Char)0x62,  /* [4134] */
    (xdc_Char)0x6c,  /* [4135] */
    (xdc_Char)0x65,  /* [4136] */
    (xdc_Char)0x4c,  /* [4137] */
    (xdc_Char)0x31,  /* [4138] */
    (xdc_Char)0x50,  /* [4139] */
    (xdc_Char)0x72,  /* [4140] */
    (xdc_Char)0x65,  /* [4141] */
    (xdc_Char)0x66,  /* [4142] */
    (xdc_Char)0x65,  /* [4143] */
    (xdc_Char)0x74,  /* [4144] */
    (xdc_Char)0x63,  /* [4145] */
    (xdc_Char)0x68,  /* [4146] */
    (xdc_Char)0x28,  /* [4147] */
    (xdc_Char)0x29,  /* [4148] */
    (xdc_Char)0x2f,  /* [4149] */
    (xdc_Char)0x43,  /* [4150] */
    (xdc_Char)0x61,  /* [4151] */
    (xdc_Char)0x63,  /* [4152] */
    (xdc_Char)0x68,  /* [4153] */
    (xdc_Char)0x65,  /* [4154] */
    (xdc_Char)0x5f,  /* [4155] */
    (xdc_Char)0x64,  /* [4156] */
    (xdc_Char)0x69,  /* [4157] */
    (xdc_Char)0x73,  /* [4158] */
    (xdc_Char)0x61,  /* [4159] */
    (xdc_Char)0x62,  /* [4160] */
    (xdc_Char)0x6c,  /* [4161] */
    (xdc_Char)0x65,  /* [4162] */
    (xdc_Char)0x4c,  /* [4163] */
    (xdc_Char)0x31,  /* [4164] */
    (xdc_Char)0x50,  /* [4165] */
    (xdc_Char)0x72,  /* [4166] */
    (xdc_Char)0x65,  /* [4167] */
    (xdc_Char)0x66,  /* [4168] */
    (xdc_Char)0x65,  /* [4169] */
    (xdc_Char)0x74,  /* [4170] */
    (xdc_Char)0x63,  /* [4171] */
    (xdc_Char)0x68,  /* [4172] */
    (xdc_Char)0x28,  /* [4173] */
    (xdc_Char)0x29,  /* [4174] */
    (xdc_Char)0x20,  /* [4175] */
    (xdc_Char)0x41,  /* [4176] */
    (xdc_Char)0x50,  /* [4177] */
    (xdc_Char)0x49,  /* [4178] */
    (xdc_Char)0x73,  /* [4179] */
    (xdc_Char)0x20,  /* [4180] */
    (xdc_Char)0x6e,  /* [4181] */
    (xdc_Char)0x6f,  /* [4182] */
    (xdc_Char)0x74,  /* [4183] */
    (xdc_Char)0x20,  /* [4184] */
    (xdc_Char)0x73,  /* [4185] */
    (xdc_Char)0x75,  /* [4186] */
    (xdc_Char)0x70,  /* [4187] */
    (xdc_Char)0x70,  /* [4188] */
    (xdc_Char)0x6f,  /* [4189] */
    (xdc_Char)0x72,  /* [4190] */
    (xdc_Char)0x74,  /* [4191] */
    (xdc_Char)0x65,  /* [4192] */
    (xdc_Char)0x64,  /* [4193] */
    (xdc_Char)0x20,  /* [4194] */
    (xdc_Char)0x6f,  /* [4195] */
    (xdc_Char)0x6e,  /* [4196] */
    (xdc_Char)0x20,  /* [4197] */
    (xdc_Char)0x74,  /* [4198] */
    (xdc_Char)0x68,  /* [4199] */
    (xdc_Char)0x69,  /* [4200] */
    (xdc_Char)0x73,  /* [4201] */
    (xdc_Char)0x20,  /* [4202] */
    (xdc_Char)0x64,  /* [4203] */
    (xdc_Char)0x65,  /* [4204] */
    (xdc_Char)0x76,  /* [4205] */
    (xdc_Char)0x69,  /* [4206] */
    (xdc_Char)0x63,  /* [4207] */
    (xdc_Char)0x65,  /* [4208] */
    (xdc_Char)0x2e,  /* [4209] */
    (xdc_Char)0x0,  /* [4210] */
    (xdc_Char)0x41,  /* [4211] */
    (xdc_Char)0x5f,  /* [4212] */
    (xdc_Char)0x75,  /* [4213] */
    (xdc_Char)0x6e,  /* [4214] */
    (xdc_Char)0x6b,  /* [4215] */
    (xdc_Char)0x6e,  /* [4216] */
    (xdc_Char)0x6f,  /* [4217] */
    (xdc_Char)0x77,  /* [4218] */
    (xdc_Char)0x6e,  /* [4219] */
    (xdc_Char)0x44,  /* [4220] */
    (xdc_Char)0x65,  /* [4221] */
    (xdc_Char)0x73,  /* [4222] */
    (xdc_Char)0x63,  /* [4223] */
    (xdc_Char)0x54,  /* [4224] */
    (xdc_Char)0x79,  /* [4225] */
    (xdc_Char)0x70,  /* [4226] */
    (xdc_Char)0x65,  /* [4227] */
    (xdc_Char)0x3a,  /* [4228] */
    (xdc_Char)0x20,  /* [4229] */
    (xdc_Char)0x44,  /* [4230] */
    (xdc_Char)0x65,  /* [4231] */
    (xdc_Char)0x73,  /* [4232] */
    (xdc_Char)0x63,  /* [4233] */
    (xdc_Char)0x72,  /* [4234] */
    (xdc_Char)0x69,  /* [4235] */
    (xdc_Char)0x70,  /* [4236] */
    (xdc_Char)0x74,  /* [4237] */
    (xdc_Char)0x6f,  /* [4238] */
    (xdc_Char)0x72,  /* [4239] */
    (xdc_Char)0x20,  /* [4240] */
    (xdc_Char)0x74,  /* [4241] */
    (xdc_Char)0x79,  /* [4242] */
    (xdc_Char)0x70,  /* [4243] */
    (xdc_Char)0x65,  /* [4244] */
    (xdc_Char)0x20,  /* [4245] */
    (xdc_Char)0x69,  /* [4246] */
    (xdc_Char)0x73,  /* [4247] */
    (xdc_Char)0x20,  /* [4248] */
    (xdc_Char)0x6e,  /* [4249] */
    (xdc_Char)0x6f,  /* [4250] */
    (xdc_Char)0x74,  /* [4251] */
    (xdc_Char)0x20,  /* [4252] */
    (xdc_Char)0x72,  /* [4253] */
    (xdc_Char)0x65,  /* [4254] */
    (xdc_Char)0x63,  /* [4255] */
    (xdc_Char)0x6f,  /* [4256] */
    (xdc_Char)0x67,  /* [4257] */
    (xdc_Char)0x6e,  /* [4258] */
    (xdc_Char)0x69,  /* [4259] */
    (xdc_Char)0x7a,  /* [4260] */
    (xdc_Char)0x65,  /* [4261] */
    (xdc_Char)0x64,  /* [4262] */
    (xdc_Char)0x0,  /* [4263] */
    (xdc_Char)0x41,  /* [4264] */
    (xdc_Char)0x5f,  /* [4265] */
    (xdc_Char)0x64,  /* [4266] */
    (xdc_Char)0x69,  /* [4267] */
    (xdc_Char)0x73,  /* [4268] */
    (xdc_Char)0x61,  /* [4269] */
    (xdc_Char)0x62,  /* [4270] */
    (xdc_Char)0x6c,  /* [4271] */
    (xdc_Char)0x65,  /* [4272] */
    (xdc_Char)0x55,  /* [4273] */
    (xdc_Char)0x6e,  /* [4274] */
    (xdc_Char)0x73,  /* [4275] */
    (xdc_Char)0x75,  /* [4276] */
    (xdc_Char)0x70,  /* [4277] */
    (xdc_Char)0x70,  /* [4278] */
    (xdc_Char)0x6f,  /* [4279] */
    (xdc_Char)0x72,  /* [4280] */
    (xdc_Char)0x74,  /* [4281] */
    (xdc_Char)0x65,  /* [4282] */
    (xdc_Char)0x64,  /* [4283] */
    (xdc_Char)0x3a,  /* [4284] */
    (xdc_Char)0x20,  /* [4285] */
    (xdc_Char)0x4d,  /* [4286] */
    (xdc_Char)0x4d,  /* [4287] */
    (xdc_Char)0x55,  /* [4288] */
    (xdc_Char)0x20,  /* [4289] */
    (xdc_Char)0x64,  /* [4290] */
    (xdc_Char)0x69,  /* [4291] */
    (xdc_Char)0x73,  /* [4292] */
    (xdc_Char)0x61,  /* [4293] */
    (xdc_Char)0x62,  /* [4294] */
    (xdc_Char)0x6c,  /* [4295] */
    (xdc_Char)0x65,  /* [4296] */
    (xdc_Char)0x20,  /* [4297] */
    (xdc_Char)0x69,  /* [4298] */
    (xdc_Char)0x73,  /* [4299] */
    (xdc_Char)0x20,  /* [4300] */
    (xdc_Char)0x6e,  /* [4301] */
    (xdc_Char)0x6f,  /* [4302] */
    (xdc_Char)0x74,  /* [4303] */
    (xdc_Char)0x20,  /* [4304] */
    (xdc_Char)0x73,  /* [4305] */
    (xdc_Char)0x75,  /* [4306] */
    (xdc_Char)0x70,  /* [4307] */
    (xdc_Char)0x70,  /* [4308] */
    (xdc_Char)0x6f,  /* [4309] */
    (xdc_Char)0x72,  /* [4310] */
    (xdc_Char)0x74,  /* [4311] */
    (xdc_Char)0x65,  /* [4312] */
    (xdc_Char)0x64,  /* [4313] */
    (xdc_Char)0x20,  /* [4314] */
    (xdc_Char)0x69,  /* [4315] */
    (xdc_Char)0x6e,  /* [4316] */
    (xdc_Char)0x20,  /* [4317] */
    (xdc_Char)0x53,  /* [4318] */
    (xdc_Char)0x4d,  /* [4319] */
    (xdc_Char)0x50,  /* [4320] */
    (xdc_Char)0x20,  /* [4321] */
    (xdc_Char)0x6d,  /* [4322] */
    (xdc_Char)0x6f,  /* [4323] */
    (xdc_Char)0x64,  /* [4324] */
    (xdc_Char)0x65,  /* [4325] */
    (xdc_Char)0x2e,  /* [4326] */
    (xdc_Char)0x0,  /* [4327] */
    (xdc_Char)0x61,  /* [4328] */
    (xdc_Char)0x73,  /* [4329] */
    (xdc_Char)0x73,  /* [4330] */
    (xdc_Char)0x65,  /* [4331] */
    (xdc_Char)0x72,  /* [4332] */
    (xdc_Char)0x74,  /* [4333] */
    (xdc_Char)0x69,  /* [4334] */
    (xdc_Char)0x6f,  /* [4335] */
    (xdc_Char)0x6e,  /* [4336] */
    (xdc_Char)0x20,  /* [4337] */
    (xdc_Char)0x66,  /* [4338] */
    (xdc_Char)0x61,  /* [4339] */
    (xdc_Char)0x69,  /* [4340] */
    (xdc_Char)0x6c,  /* [4341] */
    (xdc_Char)0x75,  /* [4342] */
    (xdc_Char)0x72,  /* [4343] */
    (xdc_Char)0x65,  /* [4344] */
    (xdc_Char)0x25,  /* [4345] */
    (xdc_Char)0x73,  /* [4346] */
    (xdc_Char)0x25,  /* [4347] */
    (xdc_Char)0x73,  /* [4348] */
    (xdc_Char)0x0,  /* [4349] */
    (xdc_Char)0x25,  /* [4350] */
    (xdc_Char)0x24,  /* [4351] */
    (xdc_Char)0x53,  /* [4352] */
    (xdc_Char)0x0,  /* [4353] */
    (xdc_Char)0x6f,  /* [4354] */
    (xdc_Char)0x75,  /* [4355] */
    (xdc_Char)0x74,  /* [4356] */
    (xdc_Char)0x20,  /* [4357] */
    (xdc_Char)0x6f,  /* [4358] */
    (xdc_Char)0x66,  /* [4359] */
    (xdc_Char)0x20,  /* [4360] */
    (xdc_Char)0x6d,  /* [4361] */
    (xdc_Char)0x65,  /* [4362] */
    (xdc_Char)0x6d,  /* [4363] */
    (xdc_Char)0x6f,  /* [4364] */
    (xdc_Char)0x72,  /* [4365] */
    (xdc_Char)0x79,  /* [4366] */
    (xdc_Char)0x3a,  /* [4367] */
    (xdc_Char)0x20,  /* [4368] */
    (xdc_Char)0x68,  /* [4369] */
    (xdc_Char)0x65,  /* [4370] */
    (xdc_Char)0x61,  /* [4371] */
    (xdc_Char)0x70,  /* [4372] */
    (xdc_Char)0x3d,  /* [4373] */
    (xdc_Char)0x30,  /* [4374] */
    (xdc_Char)0x78,  /* [4375] */
    (xdc_Char)0x25,  /* [4376] */
    (xdc_Char)0x78,  /* [4377] */
    (xdc_Char)0x2c,  /* [4378] */
    (xdc_Char)0x20,  /* [4379] */
    (xdc_Char)0x73,  /* [4380] */
    (xdc_Char)0x69,  /* [4381] */
    (xdc_Char)0x7a,  /* [4382] */
    (xdc_Char)0x65,  /* [4383] */
    (xdc_Char)0x3d,  /* [4384] */
    (xdc_Char)0x25,  /* [4385] */
    (xdc_Char)0x75,  /* [4386] */
    (xdc_Char)0x0,  /* [4387] */
    (xdc_Char)0x25,  /* [4388] */
    (xdc_Char)0x73,  /* [4389] */
    (xdc_Char)0x20,  /* [4390] */
    (xdc_Char)0x30,  /* [4391] */
    (xdc_Char)0x78,  /* [4392] */
    (xdc_Char)0x25,  /* [4393] */
    (xdc_Char)0x78,  /* [4394] */
    (xdc_Char)0x0,  /* [4395] */
    (xdc_Char)0x45,  /* [4396] */
    (xdc_Char)0x5f,  /* [4397] */
    (xdc_Char)0x62,  /* [4398] */
    (xdc_Char)0x61,  /* [4399] */
    (xdc_Char)0x64,  /* [4400] */
    (xdc_Char)0x4c,  /* [4401] */
    (xdc_Char)0x65,  /* [4402] */
    (xdc_Char)0x76,  /* [4403] */
    (xdc_Char)0x65,  /* [4404] */
    (xdc_Char)0x6c,  /* [4405] */
    (xdc_Char)0x3a,  /* [4406] */
    (xdc_Char)0x20,  /* [4407] */
    (xdc_Char)0x42,  /* [4408] */
    (xdc_Char)0x61,  /* [4409] */
    (xdc_Char)0x64,  /* [4410] */
    (xdc_Char)0x20,  /* [4411] */
    (xdc_Char)0x66,  /* [4412] */
    (xdc_Char)0x69,  /* [4413] */
    (xdc_Char)0x6c,  /* [4414] */
    (xdc_Char)0x74,  /* [4415] */
    (xdc_Char)0x65,  /* [4416] */
    (xdc_Char)0x72,  /* [4417] */
    (xdc_Char)0x20,  /* [4418] */
    (xdc_Char)0x6c,  /* [4419] */
    (xdc_Char)0x65,  /* [4420] */
    (xdc_Char)0x76,  /* [4421] */
    (xdc_Char)0x65,  /* [4422] */
    (xdc_Char)0x6c,  /* [4423] */
    (xdc_Char)0x20,  /* [4424] */
    (xdc_Char)0x76,  /* [4425] */
    (xdc_Char)0x61,  /* [4426] */
    (xdc_Char)0x6c,  /* [4427] */
    (xdc_Char)0x75,  /* [4428] */
    (xdc_Char)0x65,  /* [4429] */
    (xdc_Char)0x3a,  /* [4430] */
    (xdc_Char)0x20,  /* [4431] */
    (xdc_Char)0x25,  /* [4432] */
    (xdc_Char)0x64,  /* [4433] */
    (xdc_Char)0x0,  /* [4434] */
    (xdc_Char)0x66,  /* [4435] */
    (xdc_Char)0x72,  /* [4436] */
    (xdc_Char)0x65,  /* [4437] */
    (xdc_Char)0x65,  /* [4438] */
    (xdc_Char)0x28,  /* [4439] */
    (xdc_Char)0x29,  /* [4440] */
    (xdc_Char)0x20,  /* [4441] */
    (xdc_Char)0x69,  /* [4442] */
    (xdc_Char)0x6e,  /* [4443] */
    (xdc_Char)0x76,  /* [4444] */
    (xdc_Char)0x61,  /* [4445] */
    (xdc_Char)0x6c,  /* [4446] */
    (xdc_Char)0x69,  /* [4447] */
    (xdc_Char)0x64,  /* [4448] */
    (xdc_Char)0x20,  /* [4449] */
    (xdc_Char)0x69,  /* [4450] */
    (xdc_Char)0x6e,  /* [4451] */
    (xdc_Char)0x20,  /* [4452] */
    (xdc_Char)0x67,  /* [4453] */
    (xdc_Char)0x72,  /* [4454] */
    (xdc_Char)0x6f,  /* [4455] */
    (xdc_Char)0x77,  /* [4456] */
    (xdc_Char)0x74,  /* [4457] */
    (xdc_Char)0x68,  /* [4458] */
    (xdc_Char)0x2d,  /* [4459] */
    (xdc_Char)0x6f,  /* [4460] */
    (xdc_Char)0x6e,  /* [4461] */
    (xdc_Char)0x6c,  /* [4462] */
    (xdc_Char)0x79,  /* [4463] */
    (xdc_Char)0x20,  /* [4464] */
    (xdc_Char)0x48,  /* [4465] */
    (xdc_Char)0x65,  /* [4466] */
    (xdc_Char)0x61,  /* [4467] */
    (xdc_Char)0x70,  /* [4468] */
    (xdc_Char)0x4d,  /* [4469] */
    (xdc_Char)0x69,  /* [4470] */
    (xdc_Char)0x6e,  /* [4471] */
    (xdc_Char)0x0,  /* [4472] */
    (xdc_Char)0x54,  /* [4473] */
    (xdc_Char)0x68,  /* [4474] */
    (xdc_Char)0x65,  /* [4475] */
    (xdc_Char)0x20,  /* [4476] */
    (xdc_Char)0x52,  /* [4477] */
    (xdc_Char)0x54,  /* [4478] */
    (xdc_Char)0x53,  /* [4479] */
    (xdc_Char)0x20,  /* [4480] */
    (xdc_Char)0x68,  /* [4481] */
    (xdc_Char)0x65,  /* [4482] */
    (xdc_Char)0x61,  /* [4483] */
    (xdc_Char)0x70,  /* [4484] */
    (xdc_Char)0x20,  /* [4485] */
    (xdc_Char)0x69,  /* [4486] */
    (xdc_Char)0x73,  /* [4487] */
    (xdc_Char)0x20,  /* [4488] */
    (xdc_Char)0x75,  /* [4489] */
    (xdc_Char)0x73,  /* [4490] */
    (xdc_Char)0x65,  /* [4491] */
    (xdc_Char)0x64,  /* [4492] */
    (xdc_Char)0x20,  /* [4493] */
    (xdc_Char)0x75,  /* [4494] */
    (xdc_Char)0x70,  /* [4495] */
    (xdc_Char)0x2e,  /* [4496] */
    (xdc_Char)0x20,  /* [4497] */
    (xdc_Char)0x45,  /* [4498] */
    (xdc_Char)0x78,  /* [4499] */
    (xdc_Char)0x61,  /* [4500] */
    (xdc_Char)0x6d,  /* [4501] */
    (xdc_Char)0x69,  /* [4502] */
    (xdc_Char)0x6e,  /* [4503] */
    (xdc_Char)0x65,  /* [4504] */
    (xdc_Char)0x20,  /* [4505] */
    (xdc_Char)0x50,  /* [4506] */
    (xdc_Char)0x72,  /* [4507] */
    (xdc_Char)0x6f,  /* [4508] */
    (xdc_Char)0x67,  /* [4509] */
    (xdc_Char)0x72,  /* [4510] */
    (xdc_Char)0x61,  /* [4511] */
    (xdc_Char)0x6d,  /* [4512] */
    (xdc_Char)0x2e,  /* [4513] */
    (xdc_Char)0x68,  /* [4514] */
    (xdc_Char)0x65,  /* [4515] */
    (xdc_Char)0x61,  /* [4516] */
    (xdc_Char)0x70,  /* [4517] */
    (xdc_Char)0x2e,  /* [4518] */
    (xdc_Char)0x0,  /* [4519] */
    (xdc_Char)0x45,  /* [4520] */
    (xdc_Char)0x5f,  /* [4521] */
    (xdc_Char)0x62,  /* [4522] */
    (xdc_Char)0x61,  /* [4523] */
    (xdc_Char)0x64,  /* [4524] */
    (xdc_Char)0x43,  /* [4525] */
    (xdc_Char)0x6f,  /* [4526] */
    (xdc_Char)0x6d,  /* [4527] */
    (xdc_Char)0x6d,  /* [4528] */
    (xdc_Char)0x61,  /* [4529] */
    (xdc_Char)0x6e,  /* [4530] */
    (xdc_Char)0x64,  /* [4531] */
    (xdc_Char)0x3a,  /* [4532] */
    (xdc_Char)0x20,  /* [4533] */
    (xdc_Char)0x52,  /* [4534] */
    (xdc_Char)0x65,  /* [4535] */
    (xdc_Char)0x63,  /* [4536] */
    (xdc_Char)0x65,  /* [4537] */
    (xdc_Char)0x69,  /* [4538] */
    (xdc_Char)0x76,  /* [4539] */
    (xdc_Char)0x65,  /* [4540] */
    (xdc_Char)0x64,  /* [4541] */
    (xdc_Char)0x20,  /* [4542] */
    (xdc_Char)0x69,  /* [4543] */
    (xdc_Char)0x6e,  /* [4544] */
    (xdc_Char)0x76,  /* [4545] */
    (xdc_Char)0x61,  /* [4546] */
    (xdc_Char)0x6c,  /* [4547] */
    (xdc_Char)0x69,  /* [4548] */
    (xdc_Char)0x64,  /* [4549] */
    (xdc_Char)0x20,  /* [4550] */
    (xdc_Char)0x63,  /* [4551] */
    (xdc_Char)0x6f,  /* [4552] */
    (xdc_Char)0x6d,  /* [4553] */
    (xdc_Char)0x6d,  /* [4554] */
    (xdc_Char)0x61,  /* [4555] */
    (xdc_Char)0x6e,  /* [4556] */
    (xdc_Char)0x64,  /* [4557] */
    (xdc_Char)0x2c,  /* [4558] */
    (xdc_Char)0x20,  /* [4559] */
    (xdc_Char)0x69,  /* [4560] */
    (xdc_Char)0x64,  /* [4561] */
    (xdc_Char)0x3a,  /* [4562] */
    (xdc_Char)0x20,  /* [4563] */
    (xdc_Char)0x25,  /* [4564] */
    (xdc_Char)0x64,  /* [4565] */
    (xdc_Char)0x2e,  /* [4566] */
    (xdc_Char)0x0,  /* [4567] */
    (xdc_Char)0x45,  /* [4568] */
    (xdc_Char)0x5f,  /* [4569] */
    (xdc_Char)0x6f,  /* [4570] */
    (xdc_Char)0x62,  /* [4571] */
    (xdc_Char)0x6a,  /* [4572] */
    (xdc_Char)0x65,  /* [4573] */
    (xdc_Char)0x63,  /* [4574] */
    (xdc_Char)0x74,  /* [4575] */
    (xdc_Char)0x4e,  /* [4576] */
    (xdc_Char)0x6f,  /* [4577] */
    (xdc_Char)0x74,  /* [4578] */
    (xdc_Char)0x49,  /* [4579] */
    (xdc_Char)0x6e,  /* [4580] */
    (xdc_Char)0x4b,  /* [4581] */
    (xdc_Char)0x65,  /* [4582] */
    (xdc_Char)0x72,  /* [4583] */
    (xdc_Char)0x6e,  /* [4584] */
    (xdc_Char)0x65,  /* [4585] */
    (xdc_Char)0x6c,  /* [4586] */
    (xdc_Char)0x53,  /* [4587] */
    (xdc_Char)0x70,  /* [4588] */
    (xdc_Char)0x61,  /* [4589] */
    (xdc_Char)0x63,  /* [4590] */
    (xdc_Char)0x65,  /* [4591] */
    (xdc_Char)0x3a,  /* [4592] */
    (xdc_Char)0x20,  /* [4593] */
    (xdc_Char)0x53,  /* [4594] */
    (xdc_Char)0x65,  /* [4595] */
    (xdc_Char)0x6d,  /* [4596] */
    (xdc_Char)0x61,  /* [4597] */
    (xdc_Char)0x70,  /* [4598] */
    (xdc_Char)0x68,  /* [4599] */
    (xdc_Char)0x6f,  /* [4600] */
    (xdc_Char)0x72,  /* [4601] */
    (xdc_Char)0x65,  /* [4602] */
    (xdc_Char)0x20,  /* [4603] */
    (xdc_Char)0x6f,  /* [4604] */
    (xdc_Char)0x62,  /* [4605] */
    (xdc_Char)0x6a,  /* [4606] */
    (xdc_Char)0x65,  /* [4607] */
    (xdc_Char)0x63,  /* [4608] */
    (xdc_Char)0x74,  /* [4609] */
    (xdc_Char)0x20,  /* [4610] */
    (xdc_Char)0x70,  /* [4611] */
    (xdc_Char)0x61,  /* [4612] */
    (xdc_Char)0x73,  /* [4613] */
    (xdc_Char)0x73,  /* [4614] */
    (xdc_Char)0x65,  /* [4615] */
    (xdc_Char)0x64,  /* [4616] */
    (xdc_Char)0x20,  /* [4617] */
    (xdc_Char)0x6e,  /* [4618] */
    (xdc_Char)0x6f,  /* [4619] */
    (xdc_Char)0x74,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x69,  /* [4622] */
    (xdc_Char)0x6e,  /* [4623] */
    (xdc_Char)0x20,  /* [4624] */
    (xdc_Char)0x4b,  /* [4625] */
    (xdc_Char)0x65,  /* [4626] */
    (xdc_Char)0x72,  /* [4627] */
    (xdc_Char)0x6e,  /* [4628] */
    (xdc_Char)0x65,  /* [4629] */
    (xdc_Char)0x6c,  /* [4630] */
    (xdc_Char)0x20,  /* [4631] */
    (xdc_Char)0x61,  /* [4632] */
    (xdc_Char)0x64,  /* [4633] */
    (xdc_Char)0x64,  /* [4634] */
    (xdc_Char)0x72,  /* [4635] */
    (xdc_Char)0x65,  /* [4636] */
    (xdc_Char)0x73,  /* [4637] */
    (xdc_Char)0x73,  /* [4638] */
    (xdc_Char)0x20,  /* [4639] */
    (xdc_Char)0x73,  /* [4640] */
    (xdc_Char)0x70,  /* [4641] */
    (xdc_Char)0x61,  /* [4642] */
    (xdc_Char)0x63,  /* [4643] */
    (xdc_Char)0x65,  /* [4644] */
    (xdc_Char)0x2e,  /* [4645] */
    (xdc_Char)0x0,  /* [4646] */
    (xdc_Char)0x45,  /* [4647] */
    (xdc_Char)0x5f,  /* [4648] */
    (xdc_Char)0x73,  /* [4649] */
    (xdc_Char)0x74,  /* [4650] */
    (xdc_Char)0x61,  /* [4651] */
    (xdc_Char)0x63,  /* [4652] */
    (xdc_Char)0x6b,  /* [4653] */
    (xdc_Char)0x4f,  /* [4654] */
    (xdc_Char)0x76,  /* [4655] */
    (xdc_Char)0x65,  /* [4656] */
    (xdc_Char)0x72,  /* [4657] */
    (xdc_Char)0x66,  /* [4658] */
    (xdc_Char)0x6c,  /* [4659] */
    (xdc_Char)0x6f,  /* [4660] */
    (xdc_Char)0x77,  /* [4661] */
    (xdc_Char)0x3a,  /* [4662] */
    (xdc_Char)0x20,  /* [4663] */
    (xdc_Char)0x54,  /* [4664] */
    (xdc_Char)0x61,  /* [4665] */
    (xdc_Char)0x73,  /* [4666] */
    (xdc_Char)0x6b,  /* [4667] */
    (xdc_Char)0x20,  /* [4668] */
    (xdc_Char)0x30,  /* [4669] */
    (xdc_Char)0x78,  /* [4670] */
    (xdc_Char)0x25,  /* [4671] */
    (xdc_Char)0x78,  /* [4672] */
    (xdc_Char)0x20,  /* [4673] */
    (xdc_Char)0x73,  /* [4674] */
    (xdc_Char)0x74,  /* [4675] */
    (xdc_Char)0x61,  /* [4676] */
    (xdc_Char)0x63,  /* [4677] */
    (xdc_Char)0x6b,  /* [4678] */
    (xdc_Char)0x20,  /* [4679] */
    (xdc_Char)0x6f,  /* [4680] */
    (xdc_Char)0x76,  /* [4681] */
    (xdc_Char)0x65,  /* [4682] */
    (xdc_Char)0x72,  /* [4683] */
    (xdc_Char)0x66,  /* [4684] */
    (xdc_Char)0x6c,  /* [4685] */
    (xdc_Char)0x6f,  /* [4686] */
    (xdc_Char)0x77,  /* [4687] */
    (xdc_Char)0x2e,  /* [4688] */
    (xdc_Char)0x0,  /* [4689] */
    (xdc_Char)0x45,  /* [4690] */
    (xdc_Char)0x5f,  /* [4691] */
    (xdc_Char)0x73,  /* [4692] */
    (xdc_Char)0x70,  /* [4693] */
    (xdc_Char)0x4f,  /* [4694] */
    (xdc_Char)0x75,  /* [4695] */
    (xdc_Char)0x74,  /* [4696] */
    (xdc_Char)0x4f,  /* [4697] */
    (xdc_Char)0x66,  /* [4698] */
    (xdc_Char)0x42,  /* [4699] */
    (xdc_Char)0x6f,  /* [4700] */
    (xdc_Char)0x75,  /* [4701] */
    (xdc_Char)0x6e,  /* [4702] */
    (xdc_Char)0x64,  /* [4703] */
    (xdc_Char)0x73,  /* [4704] */
    (xdc_Char)0x3a,  /* [4705] */
    (xdc_Char)0x20,  /* [4706] */
    (xdc_Char)0x54,  /* [4707] */
    (xdc_Char)0x61,  /* [4708] */
    (xdc_Char)0x73,  /* [4709] */
    (xdc_Char)0x6b,  /* [4710] */
    (xdc_Char)0x20,  /* [4711] */
    (xdc_Char)0x30,  /* [4712] */
    (xdc_Char)0x78,  /* [4713] */
    (xdc_Char)0x25,  /* [4714] */
    (xdc_Char)0x78,  /* [4715] */
    (xdc_Char)0x20,  /* [4716] */
    (xdc_Char)0x73,  /* [4717] */
    (xdc_Char)0x74,  /* [4718] */
    (xdc_Char)0x61,  /* [4719] */
    (xdc_Char)0x63,  /* [4720] */
    (xdc_Char)0x6b,  /* [4721] */
    (xdc_Char)0x20,  /* [4722] */
    (xdc_Char)0x65,  /* [4723] */
    (xdc_Char)0x72,  /* [4724] */
    (xdc_Char)0x72,  /* [4725] */
    (xdc_Char)0x6f,  /* [4726] */
    (xdc_Char)0x72,  /* [4727] */
    (xdc_Char)0x2c,  /* [4728] */
    (xdc_Char)0x20,  /* [4729] */
    (xdc_Char)0x53,  /* [4730] */
    (xdc_Char)0x50,  /* [4731] */
    (xdc_Char)0x20,  /* [4732] */
    (xdc_Char)0x3d,  /* [4733] */
    (xdc_Char)0x20,  /* [4734] */
    (xdc_Char)0x30,  /* [4735] */
    (xdc_Char)0x78,  /* [4736] */
    (xdc_Char)0x25,  /* [4737] */
    (xdc_Char)0x78,  /* [4738] */
    (xdc_Char)0x2e,  /* [4739] */
    (xdc_Char)0x0,  /* [4740] */
    (xdc_Char)0x45,  /* [4741] */
    (xdc_Char)0x5f,  /* [4742] */
    (xdc_Char)0x64,  /* [4743] */
    (xdc_Char)0x65,  /* [4744] */
    (xdc_Char)0x6c,  /* [4745] */
    (xdc_Char)0x65,  /* [4746] */
    (xdc_Char)0x74,  /* [4747] */
    (xdc_Char)0x65,  /* [4748] */
    (xdc_Char)0x4e,  /* [4749] */
    (xdc_Char)0x6f,  /* [4750] */
    (xdc_Char)0x74,  /* [4751] */
    (xdc_Char)0x41,  /* [4752] */
    (xdc_Char)0x6c,  /* [4753] */
    (xdc_Char)0x6c,  /* [4754] */
    (xdc_Char)0x6f,  /* [4755] */
    (xdc_Char)0x77,  /* [4756] */
    (xdc_Char)0x65,  /* [4757] */
    (xdc_Char)0x64,  /* [4758] */
    (xdc_Char)0x3a,  /* [4759] */
    (xdc_Char)0x20,  /* [4760] */
    (xdc_Char)0x54,  /* [4761] */
    (xdc_Char)0x61,  /* [4762] */
    (xdc_Char)0x73,  /* [4763] */
    (xdc_Char)0x6b,  /* [4764] */
    (xdc_Char)0x20,  /* [4765] */
    (xdc_Char)0x30,  /* [4766] */
    (xdc_Char)0x78,  /* [4767] */
    (xdc_Char)0x25,  /* [4768] */
    (xdc_Char)0x78,  /* [4769] */
    (xdc_Char)0x2e,  /* [4770] */
    (xdc_Char)0x0,  /* [4771] */
    (xdc_Char)0x45,  /* [4772] */
    (xdc_Char)0x5f,  /* [4773] */
    (xdc_Char)0x6d,  /* [4774] */
    (xdc_Char)0x6f,  /* [4775] */
    (xdc_Char)0x64,  /* [4776] */
    (xdc_Char)0x75,  /* [4777] */
    (xdc_Char)0x6c,  /* [4778] */
    (xdc_Char)0x65,  /* [4779] */
    (xdc_Char)0x53,  /* [4780] */
    (xdc_Char)0x74,  /* [4781] */
    (xdc_Char)0x61,  /* [4782] */
    (xdc_Char)0x74,  /* [4783] */
    (xdc_Char)0x65,  /* [4784] */
    (xdc_Char)0x43,  /* [4785] */
    (xdc_Char)0x68,  /* [4786] */
    (xdc_Char)0x65,  /* [4787] */
    (xdc_Char)0x63,  /* [4788] */
    (xdc_Char)0x6b,  /* [4789] */
    (xdc_Char)0x46,  /* [4790] */
    (xdc_Char)0x61,  /* [4791] */
    (xdc_Char)0x69,  /* [4792] */
    (xdc_Char)0x6c,  /* [4793] */
    (xdc_Char)0x65,  /* [4794] */
    (xdc_Char)0x64,  /* [4795] */
    (xdc_Char)0x3a,  /* [4796] */
    (xdc_Char)0x20,  /* [4797] */
    (xdc_Char)0x54,  /* [4798] */
    (xdc_Char)0x61,  /* [4799] */
    (xdc_Char)0x73,  /* [4800] */
    (xdc_Char)0x6b,  /* [4801] */
    (xdc_Char)0x20,  /* [4802] */
    (xdc_Char)0x6d,  /* [4803] */
    (xdc_Char)0x6f,  /* [4804] */
    (xdc_Char)0x64,  /* [4805] */
    (xdc_Char)0x75,  /* [4806] */
    (xdc_Char)0x6c,  /* [4807] */
    (xdc_Char)0x65,  /* [4808] */
    (xdc_Char)0x20,  /* [4809] */
    (xdc_Char)0x73,  /* [4810] */
    (xdc_Char)0x74,  /* [4811] */
    (xdc_Char)0x61,  /* [4812] */
    (xdc_Char)0x74,  /* [4813] */
    (xdc_Char)0x65,  /* [4814] */
    (xdc_Char)0x20,  /* [4815] */
    (xdc_Char)0x64,  /* [4816] */
    (xdc_Char)0x61,  /* [4817] */
    (xdc_Char)0x74,  /* [4818] */
    (xdc_Char)0x61,  /* [4819] */
    (xdc_Char)0x20,  /* [4820] */
    (xdc_Char)0x69,  /* [4821] */
    (xdc_Char)0x6e,  /* [4822] */
    (xdc_Char)0x74,  /* [4823] */
    (xdc_Char)0x65,  /* [4824] */
    (xdc_Char)0x67,  /* [4825] */
    (xdc_Char)0x72,  /* [4826] */
    (xdc_Char)0x69,  /* [4827] */
    (xdc_Char)0x74,  /* [4828] */
    (xdc_Char)0x79,  /* [4829] */
    (xdc_Char)0x20,  /* [4830] */
    (xdc_Char)0x63,  /* [4831] */
    (xdc_Char)0x68,  /* [4832] */
    (xdc_Char)0x65,  /* [4833] */
    (xdc_Char)0x63,  /* [4834] */
    (xdc_Char)0x6b,  /* [4835] */
    (xdc_Char)0x20,  /* [4836] */
    (xdc_Char)0x66,  /* [4837] */
    (xdc_Char)0x61,  /* [4838] */
    (xdc_Char)0x69,  /* [4839] */
    (xdc_Char)0x6c,  /* [4840] */
    (xdc_Char)0x65,  /* [4841] */
    (xdc_Char)0x64,  /* [4842] */
    (xdc_Char)0x2e,  /* [4843] */
    (xdc_Char)0x0,  /* [4844] */
    (xdc_Char)0x45,  /* [4845] */
    (xdc_Char)0x5f,  /* [4846] */
    (xdc_Char)0x6f,  /* [4847] */
    (xdc_Char)0x62,  /* [4848] */
    (xdc_Char)0x6a,  /* [4849] */
    (xdc_Char)0x65,  /* [4850] */
    (xdc_Char)0x63,  /* [4851] */
    (xdc_Char)0x74,  /* [4852] */
    (xdc_Char)0x43,  /* [4853] */
    (xdc_Char)0x68,  /* [4854] */
    (xdc_Char)0x65,  /* [4855] */
    (xdc_Char)0x63,  /* [4856] */
    (xdc_Char)0x6b,  /* [4857] */
    (xdc_Char)0x46,  /* [4858] */
    (xdc_Char)0x61,  /* [4859] */
    (xdc_Char)0x69,  /* [4860] */
    (xdc_Char)0x6c,  /* [4861] */
    (xdc_Char)0x65,  /* [4862] */
    (xdc_Char)0x64,  /* [4863] */
    (xdc_Char)0x3a,  /* [4864] */
    (xdc_Char)0x20,  /* [4865] */
    (xdc_Char)0x54,  /* [4866] */
    (xdc_Char)0x61,  /* [4867] */
    (xdc_Char)0x73,  /* [4868] */
    (xdc_Char)0x6b,  /* [4869] */
    (xdc_Char)0x20,  /* [4870] */
    (xdc_Char)0x30,  /* [4871] */
    (xdc_Char)0x78,  /* [4872] */
    (xdc_Char)0x25,  /* [4873] */
    (xdc_Char)0x78,  /* [4874] */
    (xdc_Char)0x20,  /* [4875] */
    (xdc_Char)0x6f,  /* [4876] */
    (xdc_Char)0x62,  /* [4877] */
    (xdc_Char)0x6a,  /* [4878] */
    (xdc_Char)0x65,  /* [4879] */
    (xdc_Char)0x63,  /* [4880] */
    (xdc_Char)0x74,  /* [4881] */
    (xdc_Char)0x20,  /* [4882] */
    (xdc_Char)0x64,  /* [4883] */
    (xdc_Char)0x61,  /* [4884] */
    (xdc_Char)0x74,  /* [4885] */
    (xdc_Char)0x61,  /* [4886] */
    (xdc_Char)0x20,  /* [4887] */
    (xdc_Char)0x69,  /* [4888] */
    (xdc_Char)0x6e,  /* [4889] */
    (xdc_Char)0x74,  /* [4890] */
    (xdc_Char)0x65,  /* [4891] */
    (xdc_Char)0x67,  /* [4892] */
    (xdc_Char)0x72,  /* [4893] */
    (xdc_Char)0x69,  /* [4894] */
    (xdc_Char)0x74,  /* [4895] */
    (xdc_Char)0x79,  /* [4896] */
    (xdc_Char)0x20,  /* [4897] */
    (xdc_Char)0x63,  /* [4898] */
    (xdc_Char)0x68,  /* [4899] */
    (xdc_Char)0x65,  /* [4900] */
    (xdc_Char)0x63,  /* [4901] */
    (xdc_Char)0x6b,  /* [4902] */
    (xdc_Char)0x20,  /* [4903] */
    (xdc_Char)0x66,  /* [4904] */
    (xdc_Char)0x61,  /* [4905] */
    (xdc_Char)0x69,  /* [4906] */
    (xdc_Char)0x6c,  /* [4907] */
    (xdc_Char)0x65,  /* [4908] */
    (xdc_Char)0x64,  /* [4909] */
    (xdc_Char)0x2e,  /* [4910] */
    (xdc_Char)0x0,  /* [4911] */
    (xdc_Char)0x45,  /* [4912] */
    (xdc_Char)0x5f,  /* [4913] */
    (xdc_Char)0x6f,  /* [4914] */
    (xdc_Char)0x62,  /* [4915] */
    (xdc_Char)0x6a,  /* [4916] */
    (xdc_Char)0x65,  /* [4917] */
    (xdc_Char)0x63,  /* [4918] */
    (xdc_Char)0x74,  /* [4919] */
    (xdc_Char)0x4e,  /* [4920] */
    (xdc_Char)0x6f,  /* [4921] */
    (xdc_Char)0x74,  /* [4922] */
    (xdc_Char)0x49,  /* [4923] */
    (xdc_Char)0x6e,  /* [4924] */
    (xdc_Char)0x4b,  /* [4925] */
    (xdc_Char)0x65,  /* [4926] */
    (xdc_Char)0x72,  /* [4927] */
    (xdc_Char)0x6e,  /* [4928] */
    (xdc_Char)0x65,  /* [4929] */
    (xdc_Char)0x6c,  /* [4930] */
    (xdc_Char)0x53,  /* [4931] */
    (xdc_Char)0x70,  /* [4932] */
    (xdc_Char)0x61,  /* [4933] */
    (xdc_Char)0x63,  /* [4934] */
    (xdc_Char)0x65,  /* [4935] */
    (xdc_Char)0x3a,  /* [4936] */
    (xdc_Char)0x20,  /* [4937] */
    (xdc_Char)0x54,  /* [4938] */
    (xdc_Char)0x61,  /* [4939] */
    (xdc_Char)0x73,  /* [4940] */
    (xdc_Char)0x6b,  /* [4941] */
    (xdc_Char)0x20,  /* [4942] */
    (xdc_Char)0x6f,  /* [4943] */
    (xdc_Char)0x62,  /* [4944] */
    (xdc_Char)0x6a,  /* [4945] */
    (xdc_Char)0x65,  /* [4946] */
    (xdc_Char)0x63,  /* [4947] */
    (xdc_Char)0x74,  /* [4948] */
    (xdc_Char)0x20,  /* [4949] */
    (xdc_Char)0x70,  /* [4950] */
    (xdc_Char)0x61,  /* [4951] */
    (xdc_Char)0x73,  /* [4952] */
    (xdc_Char)0x73,  /* [4953] */
    (xdc_Char)0x65,  /* [4954] */
    (xdc_Char)0x64,  /* [4955] */
    (xdc_Char)0x20,  /* [4956] */
    (xdc_Char)0x6e,  /* [4957] */
    (xdc_Char)0x6f,  /* [4958] */
    (xdc_Char)0x74,  /* [4959] */
    (xdc_Char)0x20,  /* [4960] */
    (xdc_Char)0x69,  /* [4961] */
    (xdc_Char)0x6e,  /* [4962] */
    (xdc_Char)0x20,  /* [4963] */
    (xdc_Char)0x4b,  /* [4964] */
    (xdc_Char)0x65,  /* [4965] */
    (xdc_Char)0x72,  /* [4966] */
    (xdc_Char)0x6e,  /* [4967] */
    (xdc_Char)0x65,  /* [4968] */
    (xdc_Char)0x6c,  /* [4969] */
    (xdc_Char)0x20,  /* [4970] */
    (xdc_Char)0x61,  /* [4971] */
    (xdc_Char)0x64,  /* [4972] */
    (xdc_Char)0x64,  /* [4973] */
    (xdc_Char)0x72,  /* [4974] */
    (xdc_Char)0x65,  /* [4975] */
    (xdc_Char)0x73,  /* [4976] */
    (xdc_Char)0x73,  /* [4977] */
    (xdc_Char)0x20,  /* [4978] */
    (xdc_Char)0x73,  /* [4979] */
    (xdc_Char)0x70,  /* [4980] */
    (xdc_Char)0x61,  /* [4981] */
    (xdc_Char)0x63,  /* [4982] */
    (xdc_Char)0x65,  /* [4983] */
    (xdc_Char)0x2e,  /* [4984] */
    (xdc_Char)0x0,  /* [4985] */
    (xdc_Char)0x45,  /* [4986] */
    (xdc_Char)0x5f,  /* [4987] */
    (xdc_Char)0x73,  /* [4988] */
    (xdc_Char)0x74,  /* [4989] */
    (xdc_Char)0x61,  /* [4990] */
    (xdc_Char)0x63,  /* [4991] */
    (xdc_Char)0x6b,  /* [4992] */
    (xdc_Char)0x4f,  /* [4993] */
    (xdc_Char)0x76,  /* [4994] */
    (xdc_Char)0x65,  /* [4995] */
    (xdc_Char)0x72,  /* [4996] */
    (xdc_Char)0x66,  /* [4997] */
    (xdc_Char)0x6c,  /* [4998] */
    (xdc_Char)0x6f,  /* [4999] */
    (xdc_Char)0x77,  /* [5000] */
    (xdc_Char)0x3a,  /* [5001] */
    (xdc_Char)0x20,  /* [5002] */
    (xdc_Char)0x49,  /* [5003] */
    (xdc_Char)0x53,  /* [5004] */
    (xdc_Char)0x52,  /* [5005] */
    (xdc_Char)0x20,  /* [5006] */
    (xdc_Char)0x73,  /* [5007] */
    (xdc_Char)0x74,  /* [5008] */
    (xdc_Char)0x61,  /* [5009] */
    (xdc_Char)0x63,  /* [5010] */
    (xdc_Char)0x6b,  /* [5011] */
    (xdc_Char)0x20,  /* [5012] */
    (xdc_Char)0x6f,  /* [5013] */
    (xdc_Char)0x76,  /* [5014] */
    (xdc_Char)0x65,  /* [5015] */
    (xdc_Char)0x72,  /* [5016] */
    (xdc_Char)0x66,  /* [5017] */
    (xdc_Char)0x6c,  /* [5018] */
    (xdc_Char)0x6f,  /* [5019] */
    (xdc_Char)0x77,  /* [5020] */
    (xdc_Char)0x2e,  /* [5021] */
    (xdc_Char)0x0,  /* [5022] */
    (xdc_Char)0x45,  /* [5023] */
    (xdc_Char)0x5f,  /* [5024] */
    (xdc_Char)0x61,  /* [5025] */
    (xdc_Char)0x6c,  /* [5026] */
    (xdc_Char)0x72,  /* [5027] */
    (xdc_Char)0x65,  /* [5028] */
    (xdc_Char)0x61,  /* [5029] */
    (xdc_Char)0x64,  /* [5030] */
    (xdc_Char)0x79,  /* [5031] */
    (xdc_Char)0x44,  /* [5032] */
    (xdc_Char)0x65,  /* [5033] */
    (xdc_Char)0x66,  /* [5034] */
    (xdc_Char)0x69,  /* [5035] */
    (xdc_Char)0x6e,  /* [5036] */
    (xdc_Char)0x65,  /* [5037] */
    (xdc_Char)0x64,  /* [5038] */
    (xdc_Char)0x3a,  /* [5039] */
    (xdc_Char)0x20,  /* [5040] */
    (xdc_Char)0x48,  /* [5041] */
    (xdc_Char)0x77,  /* [5042] */
    (xdc_Char)0x69,  /* [5043] */
    (xdc_Char)0x20,  /* [5044] */
    (xdc_Char)0x61,  /* [5045] */
    (xdc_Char)0x6c,  /* [5046] */
    (xdc_Char)0x72,  /* [5047] */
    (xdc_Char)0x65,  /* [5048] */
    (xdc_Char)0x61,  /* [5049] */
    (xdc_Char)0x64,  /* [5050] */
    (xdc_Char)0x79,  /* [5051] */
    (xdc_Char)0x20,  /* [5052] */
    (xdc_Char)0x64,  /* [5053] */
    (xdc_Char)0x65,  /* [5054] */
    (xdc_Char)0x66,  /* [5055] */
    (xdc_Char)0x69,  /* [5056] */
    (xdc_Char)0x6e,  /* [5057] */
    (xdc_Char)0x65,  /* [5058] */
    (xdc_Char)0x64,  /* [5059] */
    (xdc_Char)0x2c,  /* [5060] */
    (xdc_Char)0x20,  /* [5061] */
    (xdc_Char)0x69,  /* [5062] */
    (xdc_Char)0x6e,  /* [5063] */
    (xdc_Char)0x74,  /* [5064] */
    (xdc_Char)0x6e,  /* [5065] */
    (xdc_Char)0x75,  /* [5066] */
    (xdc_Char)0x6d,  /* [5067] */
    (xdc_Char)0x3a,  /* [5068] */
    (xdc_Char)0x20,  /* [5069] */
    (xdc_Char)0x25,  /* [5070] */
    (xdc_Char)0x64,  /* [5071] */
    (xdc_Char)0x0,  /* [5072] */
    (xdc_Char)0x45,  /* [5073] */
    (xdc_Char)0x5f,  /* [5074] */
    (xdc_Char)0x68,  /* [5075] */
    (xdc_Char)0x61,  /* [5076] */
    (xdc_Char)0x6e,  /* [5077] */
    (xdc_Char)0x64,  /* [5078] */
    (xdc_Char)0x6c,  /* [5079] */
    (xdc_Char)0x65,  /* [5080] */
    (xdc_Char)0x4e,  /* [5081] */
    (xdc_Char)0x6f,  /* [5082] */
    (xdc_Char)0x74,  /* [5083] */
    (xdc_Char)0x46,  /* [5084] */
    (xdc_Char)0x6f,  /* [5085] */
    (xdc_Char)0x75,  /* [5086] */
    (xdc_Char)0x6e,  /* [5087] */
    (xdc_Char)0x64,  /* [5088] */
    (xdc_Char)0x3a,  /* [5089] */
    (xdc_Char)0x20,  /* [5090] */
    (xdc_Char)0x48,  /* [5091] */
    (xdc_Char)0x77,  /* [5092] */
    (xdc_Char)0x69,  /* [5093] */
    (xdc_Char)0x20,  /* [5094] */
    (xdc_Char)0x68,  /* [5095] */
    (xdc_Char)0x61,  /* [5096] */
    (xdc_Char)0x6e,  /* [5097] */
    (xdc_Char)0x64,  /* [5098] */
    (xdc_Char)0x6c,  /* [5099] */
    (xdc_Char)0x65,  /* [5100] */
    (xdc_Char)0x20,  /* [5101] */
    (xdc_Char)0x6e,  /* [5102] */
    (xdc_Char)0x6f,  /* [5103] */
    (xdc_Char)0x74,  /* [5104] */
    (xdc_Char)0x20,  /* [5105] */
    (xdc_Char)0x66,  /* [5106] */
    (xdc_Char)0x6f,  /* [5107] */
    (xdc_Char)0x75,  /* [5108] */
    (xdc_Char)0x6e,  /* [5109] */
    (xdc_Char)0x64,  /* [5110] */
    (xdc_Char)0x3a,  /* [5111] */
    (xdc_Char)0x20,  /* [5112] */
    (xdc_Char)0x30,  /* [5113] */
    (xdc_Char)0x78,  /* [5114] */
    (xdc_Char)0x25,  /* [5115] */
    (xdc_Char)0x78,  /* [5116] */
    (xdc_Char)0x0,  /* [5117] */
    (xdc_Char)0x45,  /* [5118] */
    (xdc_Char)0x5f,  /* [5119] */
    (xdc_Char)0x75,  /* [5120] */
    (xdc_Char)0x6e,  /* [5121] */
    (xdc_Char)0x64,  /* [5122] */
    (xdc_Char)0x65,  /* [5123] */
    (xdc_Char)0x66,  /* [5124] */
    (xdc_Char)0x69,  /* [5125] */
    (xdc_Char)0x6e,  /* [5126] */
    (xdc_Char)0x65,  /* [5127] */
    (xdc_Char)0x64,  /* [5128] */
    (xdc_Char)0x3a,  /* [5129] */
    (xdc_Char)0x20,  /* [5130] */
    (xdc_Char)0x48,  /* [5131] */
    (xdc_Char)0x77,  /* [5132] */
    (xdc_Char)0x69,  /* [5133] */
    (xdc_Char)0x20,  /* [5134] */
    (xdc_Char)0x75,  /* [5135] */
    (xdc_Char)0x6e,  /* [5136] */
    (xdc_Char)0x64,  /* [5137] */
    (xdc_Char)0x65,  /* [5138] */
    (xdc_Char)0x66,  /* [5139] */
    (xdc_Char)0x69,  /* [5140] */
    (xdc_Char)0x6e,  /* [5141] */
    (xdc_Char)0x65,  /* [5142] */
    (xdc_Char)0x64,  /* [5143] */
    (xdc_Char)0x2c,  /* [5144] */
    (xdc_Char)0x20,  /* [5145] */
    (xdc_Char)0x69,  /* [5146] */
    (xdc_Char)0x6e,  /* [5147] */
    (xdc_Char)0x74,  /* [5148] */
    (xdc_Char)0x6e,  /* [5149] */
    (xdc_Char)0x75,  /* [5150] */
    (xdc_Char)0x6d,  /* [5151] */
    (xdc_Char)0x3a,  /* [5152] */
    (xdc_Char)0x20,  /* [5153] */
    (xdc_Char)0x25,  /* [5154] */
    (xdc_Char)0x64,  /* [5155] */
    (xdc_Char)0x0,  /* [5156] */
    (xdc_Char)0x45,  /* [5157] */
    (xdc_Char)0x5f,  /* [5158] */
    (xdc_Char)0x62,  /* [5159] */
    (xdc_Char)0x61,  /* [5160] */
    (xdc_Char)0x64,  /* [5161] */
    (xdc_Char)0x49,  /* [5162] */
    (xdc_Char)0x6e,  /* [5163] */
    (xdc_Char)0x74,  /* [5164] */
    (xdc_Char)0x4e,  /* [5165] */
    (xdc_Char)0x75,  /* [5166] */
    (xdc_Char)0x6d,  /* [5167] */
    (xdc_Char)0x2c,  /* [5168] */
    (xdc_Char)0x20,  /* [5169] */
    (xdc_Char)0x69,  /* [5170] */
    (xdc_Char)0x6e,  /* [5171] */
    (xdc_Char)0x74,  /* [5172] */
    (xdc_Char)0x6e,  /* [5173] */
    (xdc_Char)0x75,  /* [5174] */
    (xdc_Char)0x6d,  /* [5175] */
    (xdc_Char)0x3a,  /* [5176] */
    (xdc_Char)0x20,  /* [5177] */
    (xdc_Char)0x25,  /* [5178] */
    (xdc_Char)0x64,  /* [5179] */
    (xdc_Char)0x20,  /* [5180] */
    (xdc_Char)0x69,  /* [5181] */
    (xdc_Char)0x73,  /* [5182] */
    (xdc_Char)0x20,  /* [5183] */
    (xdc_Char)0x6f,  /* [5184] */
    (xdc_Char)0x75,  /* [5185] */
    (xdc_Char)0x74,  /* [5186] */
    (xdc_Char)0x20,  /* [5187] */
    (xdc_Char)0x6f,  /* [5188] */
    (xdc_Char)0x66,  /* [5189] */
    (xdc_Char)0x20,  /* [5190] */
    (xdc_Char)0x72,  /* [5191] */
    (xdc_Char)0x61,  /* [5192] */
    (xdc_Char)0x6e,  /* [5193] */
    (xdc_Char)0x67,  /* [5194] */
    (xdc_Char)0x65,  /* [5195] */
    (xdc_Char)0x0,  /* [5196] */
    (xdc_Char)0x45,  /* [5197] */
    (xdc_Char)0x5f,  /* [5198] */
    (xdc_Char)0x73,  /* [5199] */
    (xdc_Char)0x77,  /* [5200] */
    (xdc_Char)0x69,  /* [5201] */
    (xdc_Char)0x3a,  /* [5202] */
    (xdc_Char)0x20,  /* [5203] */
    (xdc_Char)0x70,  /* [5204] */
    (xdc_Char)0x63,  /* [5205] */
    (xdc_Char)0x20,  /* [5206] */
    (xdc_Char)0x3d,  /* [5207] */
    (xdc_Char)0x20,  /* [5208] */
    (xdc_Char)0x30,  /* [5209] */
    (xdc_Char)0x78,  /* [5210] */
    (xdc_Char)0x25,  /* [5211] */
    (xdc_Char)0x30,  /* [5212] */
    (xdc_Char)0x38,  /* [5213] */
    (xdc_Char)0x78,  /* [5214] */
    (xdc_Char)0x2c,  /* [5215] */
    (xdc_Char)0x20,  /* [5216] */
    (xdc_Char)0x6c,  /* [5217] */
    (xdc_Char)0x72,  /* [5218] */
    (xdc_Char)0x20,  /* [5219] */
    (xdc_Char)0x3d,  /* [5220] */
    (xdc_Char)0x20,  /* [5221] */
    (xdc_Char)0x30,  /* [5222] */
    (xdc_Char)0x78,  /* [5223] */
    (xdc_Char)0x25,  /* [5224] */
    (xdc_Char)0x30,  /* [5225] */
    (xdc_Char)0x38,  /* [5226] */
    (xdc_Char)0x78,  /* [5227] */
    (xdc_Char)0x2e,  /* [5228] */
    (xdc_Char)0x0,  /* [5229] */
    (xdc_Char)0x45,  /* [5230] */
    (xdc_Char)0x5f,  /* [5231] */
    (xdc_Char)0x70,  /* [5232] */
    (xdc_Char)0x72,  /* [5233] */
    (xdc_Char)0x65,  /* [5234] */
    (xdc_Char)0x66,  /* [5235] */
    (xdc_Char)0x65,  /* [5236] */
    (xdc_Char)0x74,  /* [5237] */
    (xdc_Char)0x63,  /* [5238] */
    (xdc_Char)0x68,  /* [5239] */
    (xdc_Char)0x41,  /* [5240] */
    (xdc_Char)0x62,  /* [5241] */
    (xdc_Char)0x6f,  /* [5242] */
    (xdc_Char)0x72,  /* [5243] */
    (xdc_Char)0x74,  /* [5244] */
    (xdc_Char)0x3a,  /* [5245] */
    (xdc_Char)0x20,  /* [5246] */
    (xdc_Char)0x70,  /* [5247] */
    (xdc_Char)0x63,  /* [5248] */
    (xdc_Char)0x20,  /* [5249] */
    (xdc_Char)0x3d,  /* [5250] */
    (xdc_Char)0x20,  /* [5251] */
    (xdc_Char)0x30,  /* [5252] */
    (xdc_Char)0x78,  /* [5253] */
    (xdc_Char)0x25,  /* [5254] */
    (xdc_Char)0x30,  /* [5255] */
    (xdc_Char)0x38,  /* [5256] */
    (xdc_Char)0x78,  /* [5257] */
    (xdc_Char)0x2c,  /* [5258] */
    (xdc_Char)0x20,  /* [5259] */
    (xdc_Char)0x6c,  /* [5260] */
    (xdc_Char)0x72,  /* [5261] */
    (xdc_Char)0x20,  /* [5262] */
    (xdc_Char)0x3d,  /* [5263] */
    (xdc_Char)0x20,  /* [5264] */
    (xdc_Char)0x30,  /* [5265] */
    (xdc_Char)0x78,  /* [5266] */
    (xdc_Char)0x25,  /* [5267] */
    (xdc_Char)0x30,  /* [5268] */
    (xdc_Char)0x38,  /* [5269] */
    (xdc_Char)0x78,  /* [5270] */
    (xdc_Char)0x2e,  /* [5271] */
    (xdc_Char)0x0,  /* [5272] */
    (xdc_Char)0x45,  /* [5273] */
    (xdc_Char)0x5f,  /* [5274] */
    (xdc_Char)0x64,  /* [5275] */
    (xdc_Char)0x61,  /* [5276] */
    (xdc_Char)0x74,  /* [5277] */
    (xdc_Char)0x61,  /* [5278] */
    (xdc_Char)0x41,  /* [5279] */
    (xdc_Char)0x62,  /* [5280] */
    (xdc_Char)0x6f,  /* [5281] */
    (xdc_Char)0x72,  /* [5282] */
    (xdc_Char)0x74,  /* [5283] */
    (xdc_Char)0x3a,  /* [5284] */
    (xdc_Char)0x20,  /* [5285] */
    (xdc_Char)0x70,  /* [5286] */
    (xdc_Char)0x63,  /* [5287] */
    (xdc_Char)0x20,  /* [5288] */
    (xdc_Char)0x3d,  /* [5289] */
    (xdc_Char)0x20,  /* [5290] */
    (xdc_Char)0x30,  /* [5291] */
    (xdc_Char)0x78,  /* [5292] */
    (xdc_Char)0x25,  /* [5293] */
    (xdc_Char)0x30,  /* [5294] */
    (xdc_Char)0x38,  /* [5295] */
    (xdc_Char)0x78,  /* [5296] */
    (xdc_Char)0x2c,  /* [5297] */
    (xdc_Char)0x20,  /* [5298] */
    (xdc_Char)0x6c,  /* [5299] */
    (xdc_Char)0x72,  /* [5300] */
    (xdc_Char)0x20,  /* [5301] */
    (xdc_Char)0x3d,  /* [5302] */
    (xdc_Char)0x20,  /* [5303] */
    (xdc_Char)0x30,  /* [5304] */
    (xdc_Char)0x78,  /* [5305] */
    (xdc_Char)0x25,  /* [5306] */
    (xdc_Char)0x30,  /* [5307] */
    (xdc_Char)0x38,  /* [5308] */
    (xdc_Char)0x78,  /* [5309] */
    (xdc_Char)0x2e,  /* [5310] */
    (xdc_Char)0x0,  /* [5311] */
    (xdc_Char)0x45,  /* [5312] */
    (xdc_Char)0x5f,  /* [5313] */
    (xdc_Char)0x75,  /* [5314] */
    (xdc_Char)0x6e,  /* [5315] */
    (xdc_Char)0x64,  /* [5316] */
    (xdc_Char)0x65,  /* [5317] */
    (xdc_Char)0x66,  /* [5318] */
    (xdc_Char)0x69,  /* [5319] */
    (xdc_Char)0x6e,  /* [5320] */
    (xdc_Char)0x65,  /* [5321] */
    (xdc_Char)0x64,  /* [5322] */
    (xdc_Char)0x49,  /* [5323] */
    (xdc_Char)0x6e,  /* [5324] */
    (xdc_Char)0x73,  /* [5325] */
    (xdc_Char)0x74,  /* [5326] */
    (xdc_Char)0x72,  /* [5327] */
    (xdc_Char)0x75,  /* [5328] */
    (xdc_Char)0x63,  /* [5329] */
    (xdc_Char)0x74,  /* [5330] */
    (xdc_Char)0x69,  /* [5331] */
    (xdc_Char)0x6f,  /* [5332] */
    (xdc_Char)0x6e,  /* [5333] */
    (xdc_Char)0x3a,  /* [5334] */
    (xdc_Char)0x20,  /* [5335] */
    (xdc_Char)0x70,  /* [5336] */
    (xdc_Char)0x63,  /* [5337] */
    (xdc_Char)0x20,  /* [5338] */
    (xdc_Char)0x3d,  /* [5339] */
    (xdc_Char)0x20,  /* [5340] */
    (xdc_Char)0x30,  /* [5341] */
    (xdc_Char)0x78,  /* [5342] */
    (xdc_Char)0x25,  /* [5343] */
    (xdc_Char)0x30,  /* [5344] */
    (xdc_Char)0x38,  /* [5345] */
    (xdc_Char)0x78,  /* [5346] */
    (xdc_Char)0x2c,  /* [5347] */
    (xdc_Char)0x20,  /* [5348] */
    (xdc_Char)0x6c,  /* [5349] */
    (xdc_Char)0x72,  /* [5350] */
    (xdc_Char)0x20,  /* [5351] */
    (xdc_Char)0x3d,  /* [5352] */
    (xdc_Char)0x20,  /* [5353] */
    (xdc_Char)0x30,  /* [5354] */
    (xdc_Char)0x78,  /* [5355] */
    (xdc_Char)0x25,  /* [5356] */
    (xdc_Char)0x30,  /* [5357] */
    (xdc_Char)0x38,  /* [5358] */
    (xdc_Char)0x78,  /* [5359] */
    (xdc_Char)0x2e,  /* [5360] */
    (xdc_Char)0x0,  /* [5361] */
    (xdc_Char)0x45,  /* [5362] */
    (xdc_Char)0x5f,  /* [5363] */
    (xdc_Char)0x70,  /* [5364] */
    (xdc_Char)0x72,  /* [5365] */
    (xdc_Char)0x69,  /* [5366] */
    (xdc_Char)0x6f,  /* [5367] */
    (xdc_Char)0x72,  /* [5368] */
    (xdc_Char)0x69,  /* [5369] */
    (xdc_Char)0x74,  /* [5370] */
    (xdc_Char)0x79,  /* [5371] */
    (xdc_Char)0x3a,  /* [5372] */
    (xdc_Char)0x20,  /* [5373] */
    (xdc_Char)0x54,  /* [5374] */
    (xdc_Char)0x68,  /* [5375] */
    (xdc_Char)0x72,  /* [5376] */
    (xdc_Char)0x65,  /* [5377] */
    (xdc_Char)0x61,  /* [5378] */
    (xdc_Char)0x64,  /* [5379] */
    (xdc_Char)0x20,  /* [5380] */
    (xdc_Char)0x70,  /* [5381] */
    (xdc_Char)0x72,  /* [5382] */
    (xdc_Char)0x69,  /* [5383] */
    (xdc_Char)0x6f,  /* [5384] */
    (xdc_Char)0x72,  /* [5385] */
    (xdc_Char)0x69,  /* [5386] */
    (xdc_Char)0x74,  /* [5387] */
    (xdc_Char)0x79,  /* [5388] */
    (xdc_Char)0x20,  /* [5389] */
    (xdc_Char)0x69,  /* [5390] */
    (xdc_Char)0x73,  /* [5391] */
    (xdc_Char)0x20,  /* [5392] */
    (xdc_Char)0x69,  /* [5393] */
    (xdc_Char)0x6e,  /* [5394] */
    (xdc_Char)0x76,  /* [5395] */
    (xdc_Char)0x61,  /* [5396] */
    (xdc_Char)0x6c,  /* [5397] */
    (xdc_Char)0x69,  /* [5398] */
    (xdc_Char)0x64,  /* [5399] */
    (xdc_Char)0x20,  /* [5400] */
    (xdc_Char)0x25,  /* [5401] */
    (xdc_Char)0x64,  /* [5402] */
    (xdc_Char)0x0,  /* [5403] */
    (xdc_Char)0x72,  /* [5404] */
    (xdc_Char)0x65,  /* [5405] */
    (xdc_Char)0x71,  /* [5406] */
    (xdc_Char)0x75,  /* [5407] */
    (xdc_Char)0x65,  /* [5408] */
    (xdc_Char)0x73,  /* [5409] */
    (xdc_Char)0x74,  /* [5410] */
    (xdc_Char)0x65,  /* [5411] */
    (xdc_Char)0x64,  /* [5412] */
    (xdc_Char)0x20,  /* [5413] */
    (xdc_Char)0x73,  /* [5414] */
    (xdc_Char)0x69,  /* [5415] */
    (xdc_Char)0x7a,  /* [5416] */
    (xdc_Char)0x65,  /* [5417] */
    (xdc_Char)0x20,  /* [5418] */
    (xdc_Char)0x69,  /* [5419] */
    (xdc_Char)0x73,  /* [5420] */
    (xdc_Char)0x20,  /* [5421] */
    (xdc_Char)0x74,  /* [5422] */
    (xdc_Char)0x6f,  /* [5423] */
    (xdc_Char)0x6f,  /* [5424] */
    (xdc_Char)0x20,  /* [5425] */
    (xdc_Char)0x62,  /* [5426] */
    (xdc_Char)0x69,  /* [5427] */
    (xdc_Char)0x67,  /* [5428] */
    (xdc_Char)0x3a,  /* [5429] */
    (xdc_Char)0x20,  /* [5430] */
    (xdc_Char)0x68,  /* [5431] */
    (xdc_Char)0x61,  /* [5432] */
    (xdc_Char)0x6e,  /* [5433] */
    (xdc_Char)0x64,  /* [5434] */
    (xdc_Char)0x6c,  /* [5435] */
    (xdc_Char)0x65,  /* [5436] */
    (xdc_Char)0x3d,  /* [5437] */
    (xdc_Char)0x30,  /* [5438] */
    (xdc_Char)0x78,  /* [5439] */
    (xdc_Char)0x25,  /* [5440] */
    (xdc_Char)0x78,  /* [5441] */
    (xdc_Char)0x2c,  /* [5442] */
    (xdc_Char)0x20,  /* [5443] */
    (xdc_Char)0x73,  /* [5444] */
    (xdc_Char)0x69,  /* [5445] */
    (xdc_Char)0x7a,  /* [5446] */
    (xdc_Char)0x65,  /* [5447] */
    (xdc_Char)0x3d,  /* [5448] */
    (xdc_Char)0x25,  /* [5449] */
    (xdc_Char)0x75,  /* [5450] */
    (xdc_Char)0x0,  /* [5451] */
    (xdc_Char)0x6f,  /* [5452] */
    (xdc_Char)0x75,  /* [5453] */
    (xdc_Char)0x74,  /* [5454] */
    (xdc_Char)0x20,  /* [5455] */
    (xdc_Char)0x6f,  /* [5456] */
    (xdc_Char)0x66,  /* [5457] */
    (xdc_Char)0x20,  /* [5458] */
    (xdc_Char)0x6d,  /* [5459] */
    (xdc_Char)0x65,  /* [5460] */
    (xdc_Char)0x6d,  /* [5461] */
    (xdc_Char)0x6f,  /* [5462] */
    (xdc_Char)0x72,  /* [5463] */
    (xdc_Char)0x79,  /* [5464] */
    (xdc_Char)0x3a,  /* [5465] */
    (xdc_Char)0x20,  /* [5466] */
    (xdc_Char)0x68,  /* [5467] */
    (xdc_Char)0x61,  /* [5468] */
    (xdc_Char)0x6e,  /* [5469] */
    (xdc_Char)0x64,  /* [5470] */
    (xdc_Char)0x6c,  /* [5471] */
    (xdc_Char)0x65,  /* [5472] */
    (xdc_Char)0x3d,  /* [5473] */
    (xdc_Char)0x30,  /* [5474] */
    (xdc_Char)0x78,  /* [5475] */
    (xdc_Char)0x25,  /* [5476] */
    (xdc_Char)0x78,  /* [5477] */
    (xdc_Char)0x2c,  /* [5478] */
    (xdc_Char)0x20,  /* [5479] */
    (xdc_Char)0x73,  /* [5480] */
    (xdc_Char)0x69,  /* [5481] */
    (xdc_Char)0x7a,  /* [5482] */
    (xdc_Char)0x65,  /* [5483] */
    (xdc_Char)0x3d,  /* [5484] */
    (xdc_Char)0x25,  /* [5485] */
    (xdc_Char)0x75,  /* [5486] */
    (xdc_Char)0x0,  /* [5487] */
    (xdc_Char)0x45,  /* [5488] */
    (xdc_Char)0x5f,  /* [5489] */
    (xdc_Char)0x69,  /* [5490] */
    (xdc_Char)0x6e,  /* [5491] */
    (xdc_Char)0x76,  /* [5492] */
    (xdc_Char)0x61,  /* [5493] */
    (xdc_Char)0x6c,  /* [5494] */
    (xdc_Char)0x69,  /* [5495] */
    (xdc_Char)0x64,  /* [5496] */
    (xdc_Char)0x54,  /* [5497] */
    (xdc_Char)0x69,  /* [5498] */
    (xdc_Char)0x6d,  /* [5499] */
    (xdc_Char)0x65,  /* [5500] */
    (xdc_Char)0x72,  /* [5501] */
    (xdc_Char)0x3a,  /* [5502] */
    (xdc_Char)0x20,  /* [5503] */
    (xdc_Char)0x49,  /* [5504] */
    (xdc_Char)0x6e,  /* [5505] */
    (xdc_Char)0x76,  /* [5506] */
    (xdc_Char)0x61,  /* [5507] */
    (xdc_Char)0x6c,  /* [5508] */
    (xdc_Char)0x69,  /* [5509] */
    (xdc_Char)0x64,  /* [5510] */
    (xdc_Char)0x20,  /* [5511] */
    (xdc_Char)0x54,  /* [5512] */
    (xdc_Char)0x69,  /* [5513] */
    (xdc_Char)0x6d,  /* [5514] */
    (xdc_Char)0x65,  /* [5515] */
    (xdc_Char)0x72,  /* [5516] */
    (xdc_Char)0x20,  /* [5517] */
    (xdc_Char)0x49,  /* [5518] */
    (xdc_Char)0x64,  /* [5519] */
    (xdc_Char)0x20,  /* [5520] */
    (xdc_Char)0x25,  /* [5521] */
    (xdc_Char)0x64,  /* [5522] */
    (xdc_Char)0x0,  /* [5523] */
    (xdc_Char)0x45,  /* [5524] */
    (xdc_Char)0x5f,  /* [5525] */
    (xdc_Char)0x6e,  /* [5526] */
    (xdc_Char)0x6f,  /* [5527] */
    (xdc_Char)0x74,  /* [5528] */
    (xdc_Char)0x41,  /* [5529] */
    (xdc_Char)0x76,  /* [5530] */
    (xdc_Char)0x61,  /* [5531] */
    (xdc_Char)0x69,  /* [5532] */
    (xdc_Char)0x6c,  /* [5533] */
    (xdc_Char)0x61,  /* [5534] */
    (xdc_Char)0x62,  /* [5535] */
    (xdc_Char)0x6c,  /* [5536] */
    (xdc_Char)0x65,  /* [5537] */
    (xdc_Char)0x3a,  /* [5538] */
    (xdc_Char)0x20,  /* [5539] */
    (xdc_Char)0x54,  /* [5540] */
    (xdc_Char)0x69,  /* [5541] */
    (xdc_Char)0x6d,  /* [5542] */
    (xdc_Char)0x65,  /* [5543] */
    (xdc_Char)0x72,  /* [5544] */
    (xdc_Char)0x20,  /* [5545] */
    (xdc_Char)0x6e,  /* [5546] */
    (xdc_Char)0x6f,  /* [5547] */
    (xdc_Char)0x74,  /* [5548] */
    (xdc_Char)0x20,  /* [5549] */
    (xdc_Char)0x61,  /* [5550] */
    (xdc_Char)0x76,  /* [5551] */
    (xdc_Char)0x61,  /* [5552] */
    (xdc_Char)0x69,  /* [5553] */
    (xdc_Char)0x6c,  /* [5554] */
    (xdc_Char)0x61,  /* [5555] */
    (xdc_Char)0x62,  /* [5556] */
    (xdc_Char)0x6c,  /* [5557] */
    (xdc_Char)0x65,  /* [5558] */
    (xdc_Char)0x20,  /* [5559] */
    (xdc_Char)0x25,  /* [5560] */
    (xdc_Char)0x64,  /* [5561] */
    (xdc_Char)0x0,  /* [5562] */
    (xdc_Char)0x45,  /* [5563] */
    (xdc_Char)0x5f,  /* [5564] */
    (xdc_Char)0x63,  /* [5565] */
    (xdc_Char)0x61,  /* [5566] */
    (xdc_Char)0x6e,  /* [5567] */
    (xdc_Char)0x6e,  /* [5568] */
    (xdc_Char)0x6f,  /* [5569] */
    (xdc_Char)0x74,  /* [5570] */
    (xdc_Char)0x53,  /* [5571] */
    (xdc_Char)0x75,  /* [5572] */
    (xdc_Char)0x70,  /* [5573] */
    (xdc_Char)0x70,  /* [5574] */
    (xdc_Char)0x6f,  /* [5575] */
    (xdc_Char)0x72,  /* [5576] */
    (xdc_Char)0x74,  /* [5577] */
    (xdc_Char)0x3a,  /* [5578] */
    (xdc_Char)0x20,  /* [5579] */
    (xdc_Char)0x54,  /* [5580] */
    (xdc_Char)0x69,  /* [5581] */
    (xdc_Char)0x6d,  /* [5582] */
    (xdc_Char)0x65,  /* [5583] */
    (xdc_Char)0x72,  /* [5584] */
    (xdc_Char)0x20,  /* [5585] */
    (xdc_Char)0x63,  /* [5586] */
    (xdc_Char)0x61,  /* [5587] */
    (xdc_Char)0x6e,  /* [5588] */
    (xdc_Char)0x6e,  /* [5589] */
    (xdc_Char)0x6f,  /* [5590] */
    (xdc_Char)0x74,  /* [5591] */
    (xdc_Char)0x20,  /* [5592] */
    (xdc_Char)0x73,  /* [5593] */
    (xdc_Char)0x75,  /* [5594] */
    (xdc_Char)0x70,  /* [5595] */
    (xdc_Char)0x70,  /* [5596] */
    (xdc_Char)0x6f,  /* [5597] */
    (xdc_Char)0x72,  /* [5598] */
    (xdc_Char)0x74,  /* [5599] */
    (xdc_Char)0x20,  /* [5600] */
    (xdc_Char)0x72,  /* [5601] */
    (xdc_Char)0x65,  /* [5602] */
    (xdc_Char)0x71,  /* [5603] */
    (xdc_Char)0x75,  /* [5604] */
    (xdc_Char)0x65,  /* [5605] */
    (xdc_Char)0x73,  /* [5606] */
    (xdc_Char)0x74,  /* [5607] */
    (xdc_Char)0x65,  /* [5608] */
    (xdc_Char)0x64,  /* [5609] */
    (xdc_Char)0x20,  /* [5610] */
    (xdc_Char)0x70,  /* [5611] */
    (xdc_Char)0x65,  /* [5612] */
    (xdc_Char)0x72,  /* [5613] */
    (xdc_Char)0x69,  /* [5614] */
    (xdc_Char)0x6f,  /* [5615] */
    (xdc_Char)0x64,  /* [5616] */
    (xdc_Char)0x20,  /* [5617] */
    (xdc_Char)0x25,  /* [5618] */
    (xdc_Char)0x64,  /* [5619] */
    (xdc_Char)0x0,  /* [5620] */
    (xdc_Char)0x3c,  /* [5621] */
    (xdc_Char)0x2d,  /* [5622] */
    (xdc_Char)0x2d,  /* [5623] */
    (xdc_Char)0x20,  /* [5624] */
    (xdc_Char)0x63,  /* [5625] */
    (xdc_Char)0x6f,  /* [5626] */
    (xdc_Char)0x6e,  /* [5627] */
    (xdc_Char)0x73,  /* [5628] */
    (xdc_Char)0x74,  /* [5629] */
    (xdc_Char)0x72,  /* [5630] */
    (xdc_Char)0x75,  /* [5631] */
    (xdc_Char)0x63,  /* [5632] */
    (xdc_Char)0x74,  /* [5633] */
    (xdc_Char)0x3a,  /* [5634] */
    (xdc_Char)0x20,  /* [5635] */
    (xdc_Char)0x25,  /* [5636] */
    (xdc_Char)0x70,  /* [5637] */
    (xdc_Char)0x28,  /* [5638] */
    (xdc_Char)0x27,  /* [5639] */
    (xdc_Char)0x25,  /* [5640] */
    (xdc_Char)0x73,  /* [5641] */
    (xdc_Char)0x27,  /* [5642] */
    (xdc_Char)0x29,  /* [5643] */
    (xdc_Char)0x0,  /* [5644] */
    (xdc_Char)0x3c,  /* [5645] */
    (xdc_Char)0x2d,  /* [5646] */
    (xdc_Char)0x2d,  /* [5647] */
    (xdc_Char)0x20,  /* [5648] */
    (xdc_Char)0x63,  /* [5649] */
    (xdc_Char)0x72,  /* [5650] */
    (xdc_Char)0x65,  /* [5651] */
    (xdc_Char)0x61,  /* [5652] */
    (xdc_Char)0x74,  /* [5653] */
    (xdc_Char)0x65,  /* [5654] */
    (xdc_Char)0x3a,  /* [5655] */
    (xdc_Char)0x20,  /* [5656] */
    (xdc_Char)0x25,  /* [5657] */
    (xdc_Char)0x70,  /* [5658] */
    (xdc_Char)0x28,  /* [5659] */
    (xdc_Char)0x27,  /* [5660] */
    (xdc_Char)0x25,  /* [5661] */
    (xdc_Char)0x73,  /* [5662] */
    (xdc_Char)0x27,  /* [5663] */
    (xdc_Char)0x29,  /* [5664] */
    (xdc_Char)0x0,  /* [5665] */
    (xdc_Char)0x2d,  /* [5666] */
    (xdc_Char)0x2d,  /* [5667] */
    (xdc_Char)0x3e,  /* [5668] */
    (xdc_Char)0x20,  /* [5669] */
    (xdc_Char)0x64,  /* [5670] */
    (xdc_Char)0x65,  /* [5671] */
    (xdc_Char)0x73,  /* [5672] */
    (xdc_Char)0x74,  /* [5673] */
    (xdc_Char)0x72,  /* [5674] */
    (xdc_Char)0x75,  /* [5675] */
    (xdc_Char)0x63,  /* [5676] */
    (xdc_Char)0x74,  /* [5677] */
    (xdc_Char)0x3a,  /* [5678] */
    (xdc_Char)0x20,  /* [5679] */
    (xdc_Char)0x28,  /* [5680] */
    (xdc_Char)0x25,  /* [5681] */
    (xdc_Char)0x70,  /* [5682] */
    (xdc_Char)0x29,  /* [5683] */
    (xdc_Char)0x0,  /* [5684] */
    (xdc_Char)0x2d,  /* [5685] */
    (xdc_Char)0x2d,  /* [5686] */
    (xdc_Char)0x3e,  /* [5687] */
    (xdc_Char)0x20,  /* [5688] */
    (xdc_Char)0x64,  /* [5689] */
    (xdc_Char)0x65,  /* [5690] */
    (xdc_Char)0x6c,  /* [5691] */
    (xdc_Char)0x65,  /* [5692] */
    (xdc_Char)0x74,  /* [5693] */
    (xdc_Char)0x65,  /* [5694] */
    (xdc_Char)0x3a,  /* [5695] */
    (xdc_Char)0x20,  /* [5696] */
    (xdc_Char)0x28,  /* [5697] */
    (xdc_Char)0x25,  /* [5698] */
    (xdc_Char)0x70,  /* [5699] */
    (xdc_Char)0x29,  /* [5700] */
    (xdc_Char)0x0,  /* [5701] */
    (xdc_Char)0x45,  /* [5702] */
    (xdc_Char)0x52,  /* [5703] */
    (xdc_Char)0x52,  /* [5704] */
    (xdc_Char)0x4f,  /* [5705] */
    (xdc_Char)0x52,  /* [5706] */
    (xdc_Char)0x3a,  /* [5707] */
    (xdc_Char)0x20,  /* [5708] */
    (xdc_Char)0x25,  /* [5709] */
    (xdc_Char)0x24,  /* [5710] */
    (xdc_Char)0x46,  /* [5711] */
    (xdc_Char)0x25,  /* [5712] */
    (xdc_Char)0x24,  /* [5713] */
    (xdc_Char)0x53,  /* [5714] */
    (xdc_Char)0x0,  /* [5715] */
    (xdc_Char)0x57,  /* [5716] */
    (xdc_Char)0x41,  /* [5717] */
    (xdc_Char)0x52,  /* [5718] */
    (xdc_Char)0x4e,  /* [5719] */
    (xdc_Char)0x49,  /* [5720] */
    (xdc_Char)0x4e,  /* [5721] */
    (xdc_Char)0x47,  /* [5722] */
    (xdc_Char)0x3a,  /* [5723] */
    (xdc_Char)0x20,  /* [5724] */
    (xdc_Char)0x25,  /* [5725] */
    (xdc_Char)0x24,  /* [5726] */
    (xdc_Char)0x46,  /* [5727] */
    (xdc_Char)0x25,  /* [5728] */
    (xdc_Char)0x24,  /* [5729] */
    (xdc_Char)0x53,  /* [5730] */
    (xdc_Char)0x0,  /* [5731] */
    (xdc_Char)0x25,  /* [5732] */
    (xdc_Char)0x24,  /* [5733] */
    (xdc_Char)0x46,  /* [5734] */
    (xdc_Char)0x25,  /* [5735] */
    (xdc_Char)0x24,  /* [5736] */
    (xdc_Char)0x53,  /* [5737] */
    (xdc_Char)0x0,  /* [5738] */
    (xdc_Char)0x53,  /* [5739] */
    (xdc_Char)0x74,  /* [5740] */
    (xdc_Char)0x61,  /* [5741] */
    (xdc_Char)0x72,  /* [5742] */
    (xdc_Char)0x74,  /* [5743] */
    (xdc_Char)0x3a,  /* [5744] */
    (xdc_Char)0x20,  /* [5745] */
    (xdc_Char)0x25,  /* [5746] */
    (xdc_Char)0x24,  /* [5747] */
    (xdc_Char)0x53,  /* [5748] */
    (xdc_Char)0x0,  /* [5749] */
    (xdc_Char)0x53,  /* [5750] */
    (xdc_Char)0x74,  /* [5751] */
    (xdc_Char)0x6f,  /* [5752] */
    (xdc_Char)0x70,  /* [5753] */
    (xdc_Char)0x3a,  /* [5754] */
    (xdc_Char)0x20,  /* [5755] */
    (xdc_Char)0x25,  /* [5756] */
    (xdc_Char)0x24,  /* [5757] */
    (xdc_Char)0x53,  /* [5758] */
    (xdc_Char)0x0,  /* [5759] */
    (xdc_Char)0x53,  /* [5760] */
    (xdc_Char)0x74,  /* [5761] */
    (xdc_Char)0x61,  /* [5762] */
    (xdc_Char)0x72,  /* [5763] */
    (xdc_Char)0x74,  /* [5764] */
    (xdc_Char)0x49,  /* [5765] */
    (xdc_Char)0x6e,  /* [5766] */
    (xdc_Char)0x73,  /* [5767] */
    (xdc_Char)0x74,  /* [5768] */
    (xdc_Char)0x61,  /* [5769] */
    (xdc_Char)0x6e,  /* [5770] */
    (xdc_Char)0x63,  /* [5771] */
    (xdc_Char)0x65,  /* [5772] */
    (xdc_Char)0x3a,  /* [5773] */
    (xdc_Char)0x20,  /* [5774] */
    (xdc_Char)0x25,  /* [5775] */
    (xdc_Char)0x24,  /* [5776] */
    (xdc_Char)0x53,  /* [5777] */
    (xdc_Char)0x0,  /* [5778] */
    (xdc_Char)0x53,  /* [5779] */
    (xdc_Char)0x74,  /* [5780] */
    (xdc_Char)0x6f,  /* [5781] */
    (xdc_Char)0x70,  /* [5782] */
    (xdc_Char)0x49,  /* [5783] */
    (xdc_Char)0x6e,  /* [5784] */
    (xdc_Char)0x73,  /* [5785] */
    (xdc_Char)0x74,  /* [5786] */
    (xdc_Char)0x61,  /* [5787] */
    (xdc_Char)0x6e,  /* [5788] */
    (xdc_Char)0x63,  /* [5789] */
    (xdc_Char)0x65,  /* [5790] */
    (xdc_Char)0x3a,  /* [5791] */
    (xdc_Char)0x20,  /* [5792] */
    (xdc_Char)0x25,  /* [5793] */
    (xdc_Char)0x24,  /* [5794] */
    (xdc_Char)0x53,  /* [5795] */
    (xdc_Char)0x0,  /* [5796] */
    (xdc_Char)0x4c,  /* [5797] */
    (xdc_Char)0x57,  /* [5798] */
    (xdc_Char)0x5f,  /* [5799] */
    (xdc_Char)0x64,  /* [5800] */
    (xdc_Char)0x65,  /* [5801] */
    (xdc_Char)0x6c,  /* [5802] */
    (xdc_Char)0x61,  /* [5803] */
    (xdc_Char)0x79,  /* [5804] */
    (xdc_Char)0x65,  /* [5805] */
    (xdc_Char)0x64,  /* [5806] */
    (xdc_Char)0x3a,  /* [5807] */
    (xdc_Char)0x20,  /* [5808] */
    (xdc_Char)0x64,  /* [5809] */
    (xdc_Char)0x65,  /* [5810] */
    (xdc_Char)0x6c,  /* [5811] */
    (xdc_Char)0x61,  /* [5812] */
    (xdc_Char)0x79,  /* [5813] */
    (xdc_Char)0x3a,  /* [5814] */
    (xdc_Char)0x20,  /* [5815] */
    (xdc_Char)0x25,  /* [5816] */
    (xdc_Char)0x64,  /* [5817] */
    (xdc_Char)0x0,  /* [5818] */
    (xdc_Char)0x4c,  /* [5819] */
    (xdc_Char)0x4d,  /* [5820] */
    (xdc_Char)0x5f,  /* [5821] */
    (xdc_Char)0x74,  /* [5822] */
    (xdc_Char)0x69,  /* [5823] */
    (xdc_Char)0x63,  /* [5824] */
    (xdc_Char)0x6b,  /* [5825] */
    (xdc_Char)0x3a,  /* [5826] */
    (xdc_Char)0x20,  /* [5827] */
    (xdc_Char)0x74,  /* [5828] */
    (xdc_Char)0x69,  /* [5829] */
    (xdc_Char)0x63,  /* [5830] */
    (xdc_Char)0x6b,  /* [5831] */
    (xdc_Char)0x3a,  /* [5832] */
    (xdc_Char)0x20,  /* [5833] */
    (xdc_Char)0x25,  /* [5834] */
    (xdc_Char)0x64,  /* [5835] */
    (xdc_Char)0x0,  /* [5836] */
    (xdc_Char)0x4c,  /* [5837] */
    (xdc_Char)0x4d,  /* [5838] */
    (xdc_Char)0x5f,  /* [5839] */
    (xdc_Char)0x62,  /* [5840] */
    (xdc_Char)0x65,  /* [5841] */
    (xdc_Char)0x67,  /* [5842] */
    (xdc_Char)0x69,  /* [5843] */
    (xdc_Char)0x6e,  /* [5844] */
    (xdc_Char)0x3a,  /* [5845] */
    (xdc_Char)0x20,  /* [5846] */
    (xdc_Char)0x63,  /* [5847] */
    (xdc_Char)0x6c,  /* [5848] */
    (xdc_Char)0x6b,  /* [5849] */
    (xdc_Char)0x3a,  /* [5850] */
    (xdc_Char)0x20,  /* [5851] */
    (xdc_Char)0x30,  /* [5852] */
    (xdc_Char)0x78,  /* [5853] */
    (xdc_Char)0x25,  /* [5854] */
    (xdc_Char)0x78,  /* [5855] */
    (xdc_Char)0x2c,  /* [5856] */
    (xdc_Char)0x20,  /* [5857] */
    (xdc_Char)0x66,  /* [5858] */
    (xdc_Char)0x75,  /* [5859] */
    (xdc_Char)0x6e,  /* [5860] */
    (xdc_Char)0x63,  /* [5861] */
    (xdc_Char)0x3a,  /* [5862] */
    (xdc_Char)0x20,  /* [5863] */
    (xdc_Char)0x30,  /* [5864] */
    (xdc_Char)0x78,  /* [5865] */
    (xdc_Char)0x25,  /* [5866] */
    (xdc_Char)0x78,  /* [5867] */
    (xdc_Char)0x0,  /* [5868] */
    (xdc_Char)0x4c,  /* [5869] */
    (xdc_Char)0x4d,  /* [5870] */
    (xdc_Char)0x5f,  /* [5871] */
    (xdc_Char)0x70,  /* [5872] */
    (xdc_Char)0x6f,  /* [5873] */
    (xdc_Char)0x73,  /* [5874] */
    (xdc_Char)0x74,  /* [5875] */
    (xdc_Char)0x3a,  /* [5876] */
    (xdc_Char)0x20,  /* [5877] */
    (xdc_Char)0x65,  /* [5878] */
    (xdc_Char)0x76,  /* [5879] */
    (xdc_Char)0x65,  /* [5880] */
    (xdc_Char)0x6e,  /* [5881] */
    (xdc_Char)0x74,  /* [5882] */
    (xdc_Char)0x3a,  /* [5883] */
    (xdc_Char)0x20,  /* [5884] */
    (xdc_Char)0x30,  /* [5885] */
    (xdc_Char)0x78,  /* [5886] */
    (xdc_Char)0x25,  /* [5887] */
    (xdc_Char)0x78,  /* [5888] */
    (xdc_Char)0x2c,  /* [5889] */
    (xdc_Char)0x20,  /* [5890] */
    (xdc_Char)0x63,  /* [5891] */
    (xdc_Char)0x75,  /* [5892] */
    (xdc_Char)0x72,  /* [5893] */
    (xdc_Char)0x72,  /* [5894] */
    (xdc_Char)0x45,  /* [5895] */
    (xdc_Char)0x76,  /* [5896] */
    (xdc_Char)0x65,  /* [5897] */
    (xdc_Char)0x6e,  /* [5898] */
    (xdc_Char)0x74,  /* [5899] */
    (xdc_Char)0x73,  /* [5900] */
    (xdc_Char)0x3a,  /* [5901] */
    (xdc_Char)0x20,  /* [5902] */
    (xdc_Char)0x30,  /* [5903] */
    (xdc_Char)0x78,  /* [5904] */
    (xdc_Char)0x25,  /* [5905] */
    (xdc_Char)0x78,  /* [5906] */
    (xdc_Char)0x2c,  /* [5907] */
    (xdc_Char)0x20,  /* [5908] */
    (xdc_Char)0x65,  /* [5909] */
    (xdc_Char)0x76,  /* [5910] */
    (xdc_Char)0x65,  /* [5911] */
    (xdc_Char)0x6e,  /* [5912] */
    (xdc_Char)0x74,  /* [5913] */
    (xdc_Char)0x49,  /* [5914] */
    (xdc_Char)0x64,  /* [5915] */
    (xdc_Char)0x3a,  /* [5916] */
    (xdc_Char)0x20,  /* [5917] */
    (xdc_Char)0x30,  /* [5918] */
    (xdc_Char)0x78,  /* [5919] */
    (xdc_Char)0x25,  /* [5920] */
    (xdc_Char)0x78,  /* [5921] */
    (xdc_Char)0x0,  /* [5922] */
    (xdc_Char)0x4c,  /* [5923] */
    (xdc_Char)0x4d,  /* [5924] */
    (xdc_Char)0x5f,  /* [5925] */
    (xdc_Char)0x70,  /* [5926] */
    (xdc_Char)0x65,  /* [5927] */
    (xdc_Char)0x6e,  /* [5928] */
    (xdc_Char)0x64,  /* [5929] */
    (xdc_Char)0x3a,  /* [5930] */
    (xdc_Char)0x20,  /* [5931] */
    (xdc_Char)0x65,  /* [5932] */
    (xdc_Char)0x76,  /* [5933] */
    (xdc_Char)0x65,  /* [5934] */
    (xdc_Char)0x6e,  /* [5935] */
    (xdc_Char)0x74,  /* [5936] */
    (xdc_Char)0x3a,  /* [5937] */
    (xdc_Char)0x20,  /* [5938] */
    (xdc_Char)0x30,  /* [5939] */
    (xdc_Char)0x78,  /* [5940] */
    (xdc_Char)0x25,  /* [5941] */
    (xdc_Char)0x78,  /* [5942] */
    (xdc_Char)0x2c,  /* [5943] */
    (xdc_Char)0x20,  /* [5944] */
    (xdc_Char)0x63,  /* [5945] */
    (xdc_Char)0x75,  /* [5946] */
    (xdc_Char)0x72,  /* [5947] */
    (xdc_Char)0x72,  /* [5948] */
    (xdc_Char)0x45,  /* [5949] */
    (xdc_Char)0x76,  /* [5950] */
    (xdc_Char)0x65,  /* [5951] */
    (xdc_Char)0x6e,  /* [5952] */
    (xdc_Char)0x74,  /* [5953] */
    (xdc_Char)0x73,  /* [5954] */
    (xdc_Char)0x3a,  /* [5955] */
    (xdc_Char)0x20,  /* [5956] */
    (xdc_Char)0x30,  /* [5957] */
    (xdc_Char)0x78,  /* [5958] */
    (xdc_Char)0x25,  /* [5959] */
    (xdc_Char)0x78,  /* [5960] */
    (xdc_Char)0x2c,  /* [5961] */
    (xdc_Char)0x20,  /* [5962] */
    (xdc_Char)0x61,  /* [5963] */
    (xdc_Char)0x6e,  /* [5964] */
    (xdc_Char)0x64,  /* [5965] */
    (xdc_Char)0x4d,  /* [5966] */
    (xdc_Char)0x61,  /* [5967] */
    (xdc_Char)0x73,  /* [5968] */
    (xdc_Char)0x6b,  /* [5969] */
    (xdc_Char)0x3a,  /* [5970] */
    (xdc_Char)0x20,  /* [5971] */
    (xdc_Char)0x30,  /* [5972] */
    (xdc_Char)0x78,  /* [5973] */
    (xdc_Char)0x25,  /* [5974] */
    (xdc_Char)0x78,  /* [5975] */
    (xdc_Char)0x2c,  /* [5976] */
    (xdc_Char)0x20,  /* [5977] */
    (xdc_Char)0x6f,  /* [5978] */
    (xdc_Char)0x72,  /* [5979] */
    (xdc_Char)0x4d,  /* [5980] */
    (xdc_Char)0x61,  /* [5981] */
    (xdc_Char)0x73,  /* [5982] */
    (xdc_Char)0x6b,  /* [5983] */
    (xdc_Char)0x3a,  /* [5984] */
    (xdc_Char)0x20,  /* [5985] */
    (xdc_Char)0x30,  /* [5986] */
    (xdc_Char)0x78,  /* [5987] */
    (xdc_Char)0x25,  /* [5988] */
    (xdc_Char)0x78,  /* [5989] */
    (xdc_Char)0x2c,  /* [5990] */
    (xdc_Char)0x20,  /* [5991] */
    (xdc_Char)0x74,  /* [5992] */
    (xdc_Char)0x69,  /* [5993] */
    (xdc_Char)0x6d,  /* [5994] */
    (xdc_Char)0x65,  /* [5995] */
    (xdc_Char)0x6f,  /* [5996] */
    (xdc_Char)0x75,  /* [5997] */
    (xdc_Char)0x74,  /* [5998] */
    (xdc_Char)0x3a,  /* [5999] */
    (xdc_Char)0x20,  /* [6000] */
    (xdc_Char)0x25,  /* [6001] */
    (xdc_Char)0x64,  /* [6002] */
    (xdc_Char)0x0,  /* [6003] */
    (xdc_Char)0x4c,  /* [6004] */
    (xdc_Char)0x4d,  /* [6005] */
    (xdc_Char)0x5f,  /* [6006] */
    (xdc_Char)0x70,  /* [6007] */
    (xdc_Char)0x6f,  /* [6008] */
    (xdc_Char)0x73,  /* [6009] */
    (xdc_Char)0x74,  /* [6010] */
    (xdc_Char)0x3a,  /* [6011] */
    (xdc_Char)0x20,  /* [6012] */
    (xdc_Char)0x73,  /* [6013] */
    (xdc_Char)0x65,  /* [6014] */
    (xdc_Char)0x6d,  /* [6015] */
    (xdc_Char)0x3a,  /* [6016] */
    (xdc_Char)0x20,  /* [6017] */
    (xdc_Char)0x30,  /* [6018] */
    (xdc_Char)0x78,  /* [6019] */
    (xdc_Char)0x25,  /* [6020] */
    (xdc_Char)0x78,  /* [6021] */
    (xdc_Char)0x2c,  /* [6022] */
    (xdc_Char)0x20,  /* [6023] */
    (xdc_Char)0x63,  /* [6024] */
    (xdc_Char)0x6f,  /* [6025] */
    (xdc_Char)0x75,  /* [6026] */
    (xdc_Char)0x6e,  /* [6027] */
    (xdc_Char)0x74,  /* [6028] */
    (xdc_Char)0x3a,  /* [6029] */
    (xdc_Char)0x20,  /* [6030] */
    (xdc_Char)0x25,  /* [6031] */
    (xdc_Char)0x64,  /* [6032] */
    (xdc_Char)0x0,  /* [6033] */
    (xdc_Char)0x4c,  /* [6034] */
    (xdc_Char)0x4d,  /* [6035] */
    (xdc_Char)0x5f,  /* [6036] */
    (xdc_Char)0x70,  /* [6037] */
    (xdc_Char)0x65,  /* [6038] */
    (xdc_Char)0x6e,  /* [6039] */
    (xdc_Char)0x64,  /* [6040] */
    (xdc_Char)0x3a,  /* [6041] */
    (xdc_Char)0x20,  /* [6042] */
    (xdc_Char)0x73,  /* [6043] */
    (xdc_Char)0x65,  /* [6044] */
    (xdc_Char)0x6d,  /* [6045] */
    (xdc_Char)0x3a,  /* [6046] */
    (xdc_Char)0x20,  /* [6047] */
    (xdc_Char)0x30,  /* [6048] */
    (xdc_Char)0x78,  /* [6049] */
    (xdc_Char)0x25,  /* [6050] */
    (xdc_Char)0x78,  /* [6051] */
    (xdc_Char)0x2c,  /* [6052] */
    (xdc_Char)0x20,  /* [6053] */
    (xdc_Char)0x63,  /* [6054] */
    (xdc_Char)0x6f,  /* [6055] */
    (xdc_Char)0x75,  /* [6056] */
    (xdc_Char)0x6e,  /* [6057] */
    (xdc_Char)0x74,  /* [6058] */
    (xdc_Char)0x3a,  /* [6059] */
    (xdc_Char)0x20,  /* [6060] */
    (xdc_Char)0x25,  /* [6061] */
    (xdc_Char)0x64,  /* [6062] */
    (xdc_Char)0x2c,  /* [6063] */
    (xdc_Char)0x20,  /* [6064] */
    (xdc_Char)0x74,  /* [6065] */
    (xdc_Char)0x69,  /* [6066] */
    (xdc_Char)0x6d,  /* [6067] */
    (xdc_Char)0x65,  /* [6068] */
    (xdc_Char)0x6f,  /* [6069] */
    (xdc_Char)0x75,  /* [6070] */
    (xdc_Char)0x74,  /* [6071] */
    (xdc_Char)0x3a,  /* [6072] */
    (xdc_Char)0x20,  /* [6073] */
    (xdc_Char)0x25,  /* [6074] */
    (xdc_Char)0x64,  /* [6075] */
    (xdc_Char)0x0,  /* [6076] */
    (xdc_Char)0x4c,  /* [6077] */
    (xdc_Char)0x4d,  /* [6078] */
    (xdc_Char)0x5f,  /* [6079] */
    (xdc_Char)0x62,  /* [6080] */
    (xdc_Char)0x65,  /* [6081] */
    (xdc_Char)0x67,  /* [6082] */
    (xdc_Char)0x69,  /* [6083] */
    (xdc_Char)0x6e,  /* [6084] */
    (xdc_Char)0x3a,  /* [6085] */
    (xdc_Char)0x20,  /* [6086] */
    (xdc_Char)0x73,  /* [6087] */
    (xdc_Char)0x77,  /* [6088] */
    (xdc_Char)0x69,  /* [6089] */
    (xdc_Char)0x3a,  /* [6090] */
    (xdc_Char)0x20,  /* [6091] */
    (xdc_Char)0x30,  /* [6092] */
    (xdc_Char)0x78,  /* [6093] */
    (xdc_Char)0x25,  /* [6094] */
    (xdc_Char)0x78,  /* [6095] */
    (xdc_Char)0x2c,  /* [6096] */
    (xdc_Char)0x20,  /* [6097] */
    (xdc_Char)0x66,  /* [6098] */
    (xdc_Char)0x75,  /* [6099] */
    (xdc_Char)0x6e,  /* [6100] */
    (xdc_Char)0x63,  /* [6101] */
    (xdc_Char)0x3a,  /* [6102] */
    (xdc_Char)0x20,  /* [6103] */
    (xdc_Char)0x30,  /* [6104] */
    (xdc_Char)0x78,  /* [6105] */
    (xdc_Char)0x25,  /* [6106] */
    (xdc_Char)0x78,  /* [6107] */
    (xdc_Char)0x2c,  /* [6108] */
    (xdc_Char)0x20,  /* [6109] */
    (xdc_Char)0x70,  /* [6110] */
    (xdc_Char)0x72,  /* [6111] */
    (xdc_Char)0x65,  /* [6112] */
    (xdc_Char)0x54,  /* [6113] */
    (xdc_Char)0x68,  /* [6114] */
    (xdc_Char)0x72,  /* [6115] */
    (xdc_Char)0x65,  /* [6116] */
    (xdc_Char)0x61,  /* [6117] */
    (xdc_Char)0x64,  /* [6118] */
    (xdc_Char)0x3a,  /* [6119] */
    (xdc_Char)0x20,  /* [6120] */
    (xdc_Char)0x25,  /* [6121] */
    (xdc_Char)0x64,  /* [6122] */
    (xdc_Char)0x0,  /* [6123] */
    (xdc_Char)0x4c,  /* [6124] */
    (xdc_Char)0x44,  /* [6125] */
    (xdc_Char)0x5f,  /* [6126] */
    (xdc_Char)0x65,  /* [6127] */
    (xdc_Char)0x6e,  /* [6128] */
    (xdc_Char)0x64,  /* [6129] */
    (xdc_Char)0x3a,  /* [6130] */
    (xdc_Char)0x20,  /* [6131] */
    (xdc_Char)0x73,  /* [6132] */
    (xdc_Char)0x77,  /* [6133] */
    (xdc_Char)0x69,  /* [6134] */
    (xdc_Char)0x3a,  /* [6135] */
    (xdc_Char)0x20,  /* [6136] */
    (xdc_Char)0x30,  /* [6137] */
    (xdc_Char)0x78,  /* [6138] */
    (xdc_Char)0x25,  /* [6139] */
    (xdc_Char)0x78,  /* [6140] */
    (xdc_Char)0x0,  /* [6141] */
    (xdc_Char)0x4c,  /* [6142] */
    (xdc_Char)0x4d,  /* [6143] */
    (xdc_Char)0x5f,  /* [6144] */
    (xdc_Char)0x70,  /* [6145] */
    (xdc_Char)0x6f,  /* [6146] */
    (xdc_Char)0x73,  /* [6147] */
    (xdc_Char)0x74,  /* [6148] */
    (xdc_Char)0x3a,  /* [6149] */
    (xdc_Char)0x20,  /* [6150] */
    (xdc_Char)0x73,  /* [6151] */
    (xdc_Char)0x77,  /* [6152] */
    (xdc_Char)0x69,  /* [6153] */
    (xdc_Char)0x3a,  /* [6154] */
    (xdc_Char)0x20,  /* [6155] */
    (xdc_Char)0x30,  /* [6156] */
    (xdc_Char)0x78,  /* [6157] */
    (xdc_Char)0x25,  /* [6158] */
    (xdc_Char)0x78,  /* [6159] */
    (xdc_Char)0x2c,  /* [6160] */
    (xdc_Char)0x20,  /* [6161] */
    (xdc_Char)0x66,  /* [6162] */
    (xdc_Char)0x75,  /* [6163] */
    (xdc_Char)0x6e,  /* [6164] */
    (xdc_Char)0x63,  /* [6165] */
    (xdc_Char)0x3a,  /* [6166] */
    (xdc_Char)0x20,  /* [6167] */
    (xdc_Char)0x30,  /* [6168] */
    (xdc_Char)0x78,  /* [6169] */
    (xdc_Char)0x25,  /* [6170] */
    (xdc_Char)0x78,  /* [6171] */
    (xdc_Char)0x2c,  /* [6172] */
    (xdc_Char)0x20,  /* [6173] */
    (xdc_Char)0x70,  /* [6174] */
    (xdc_Char)0x72,  /* [6175] */
    (xdc_Char)0x69,  /* [6176] */
    (xdc_Char)0x3a,  /* [6177] */
    (xdc_Char)0x20,  /* [6178] */
    (xdc_Char)0x25,  /* [6179] */
    (xdc_Char)0x64,  /* [6180] */
    (xdc_Char)0x0,  /* [6181] */
    (xdc_Char)0x4c,  /* [6182] */
    (xdc_Char)0x4d,  /* [6183] */
    (xdc_Char)0x5f,  /* [6184] */
    (xdc_Char)0x73,  /* [6185] */
    (xdc_Char)0x77,  /* [6186] */
    (xdc_Char)0x69,  /* [6187] */
    (xdc_Char)0x74,  /* [6188] */
    (xdc_Char)0x63,  /* [6189] */
    (xdc_Char)0x68,  /* [6190] */
    (xdc_Char)0x3a,  /* [6191] */
    (xdc_Char)0x20,  /* [6192] */
    (xdc_Char)0x6f,  /* [6193] */
    (xdc_Char)0x6c,  /* [6194] */
    (xdc_Char)0x64,  /* [6195] */
    (xdc_Char)0x74,  /* [6196] */
    (xdc_Char)0x73,  /* [6197] */
    (xdc_Char)0x6b,  /* [6198] */
    (xdc_Char)0x3a,  /* [6199] */
    (xdc_Char)0x20,  /* [6200] */
    (xdc_Char)0x30,  /* [6201] */
    (xdc_Char)0x78,  /* [6202] */
    (xdc_Char)0x25,  /* [6203] */
    (xdc_Char)0x78,  /* [6204] */
    (xdc_Char)0x2c,  /* [6205] */
    (xdc_Char)0x20,  /* [6206] */
    (xdc_Char)0x6f,  /* [6207] */
    (xdc_Char)0x6c,  /* [6208] */
    (xdc_Char)0x64,  /* [6209] */
    (xdc_Char)0x66,  /* [6210] */
    (xdc_Char)0x75,  /* [6211] */
    (xdc_Char)0x6e,  /* [6212] */
    (xdc_Char)0x63,  /* [6213] */
    (xdc_Char)0x3a,  /* [6214] */
    (xdc_Char)0x20,  /* [6215] */
    (xdc_Char)0x30,  /* [6216] */
    (xdc_Char)0x78,  /* [6217] */
    (xdc_Char)0x25,  /* [6218] */
    (xdc_Char)0x78,  /* [6219] */
    (xdc_Char)0x2c,  /* [6220] */
    (xdc_Char)0x20,  /* [6221] */
    (xdc_Char)0x6e,  /* [6222] */
    (xdc_Char)0x65,  /* [6223] */
    (xdc_Char)0x77,  /* [6224] */
    (xdc_Char)0x74,  /* [6225] */
    (xdc_Char)0x73,  /* [6226] */
    (xdc_Char)0x6b,  /* [6227] */
    (xdc_Char)0x3a,  /* [6228] */
    (xdc_Char)0x20,  /* [6229] */
    (xdc_Char)0x30,  /* [6230] */
    (xdc_Char)0x78,  /* [6231] */
    (xdc_Char)0x25,  /* [6232] */
    (xdc_Char)0x78,  /* [6233] */
    (xdc_Char)0x2c,  /* [6234] */
    (xdc_Char)0x20,  /* [6235] */
    (xdc_Char)0x6e,  /* [6236] */
    (xdc_Char)0x65,  /* [6237] */
    (xdc_Char)0x77,  /* [6238] */
    (xdc_Char)0x66,  /* [6239] */
    (xdc_Char)0x75,  /* [6240] */
    (xdc_Char)0x6e,  /* [6241] */
    (xdc_Char)0x63,  /* [6242] */
    (xdc_Char)0x3a,  /* [6243] */
    (xdc_Char)0x20,  /* [6244] */
    (xdc_Char)0x30,  /* [6245] */
    (xdc_Char)0x78,  /* [6246] */
    (xdc_Char)0x25,  /* [6247] */
    (xdc_Char)0x78,  /* [6248] */
    (xdc_Char)0x0,  /* [6249] */
    (xdc_Char)0x4c,  /* [6250] */
    (xdc_Char)0x4d,  /* [6251] */
    (xdc_Char)0x5f,  /* [6252] */
    (xdc_Char)0x73,  /* [6253] */
    (xdc_Char)0x6c,  /* [6254] */
    (xdc_Char)0x65,  /* [6255] */
    (xdc_Char)0x65,  /* [6256] */
    (xdc_Char)0x70,  /* [6257] */
    (xdc_Char)0x3a,  /* [6258] */
    (xdc_Char)0x20,  /* [6259] */
    (xdc_Char)0x74,  /* [6260] */
    (xdc_Char)0x73,  /* [6261] */
    (xdc_Char)0x6b,  /* [6262] */
    (xdc_Char)0x3a,  /* [6263] */
    (xdc_Char)0x20,  /* [6264] */
    (xdc_Char)0x30,  /* [6265] */
    (xdc_Char)0x78,  /* [6266] */
    (xdc_Char)0x25,  /* [6267] */
    (xdc_Char)0x78,  /* [6268] */
    (xdc_Char)0x2c,  /* [6269] */
    (xdc_Char)0x20,  /* [6270] */
    (xdc_Char)0x66,  /* [6271] */
    (xdc_Char)0x75,  /* [6272] */
    (xdc_Char)0x6e,  /* [6273] */
    (xdc_Char)0x63,  /* [6274] */
    (xdc_Char)0x3a,  /* [6275] */
    (xdc_Char)0x20,  /* [6276] */
    (xdc_Char)0x30,  /* [6277] */
    (xdc_Char)0x78,  /* [6278] */
    (xdc_Char)0x25,  /* [6279] */
    (xdc_Char)0x78,  /* [6280] */
    (xdc_Char)0x2c,  /* [6281] */
    (xdc_Char)0x20,  /* [6282] */
    (xdc_Char)0x74,  /* [6283] */
    (xdc_Char)0x69,  /* [6284] */
    (xdc_Char)0x6d,  /* [6285] */
    (xdc_Char)0x65,  /* [6286] */
    (xdc_Char)0x6f,  /* [6287] */
    (xdc_Char)0x75,  /* [6288] */
    (xdc_Char)0x74,  /* [6289] */
    (xdc_Char)0x3a,  /* [6290] */
    (xdc_Char)0x20,  /* [6291] */
    (xdc_Char)0x25,  /* [6292] */
    (xdc_Char)0x64,  /* [6293] */
    (xdc_Char)0x0,  /* [6294] */
    (xdc_Char)0x4c,  /* [6295] */
    (xdc_Char)0x44,  /* [6296] */
    (xdc_Char)0x5f,  /* [6297] */
    (xdc_Char)0x72,  /* [6298] */
    (xdc_Char)0x65,  /* [6299] */
    (xdc_Char)0x61,  /* [6300] */
    (xdc_Char)0x64,  /* [6301] */
    (xdc_Char)0x79,  /* [6302] */
    (xdc_Char)0x3a,  /* [6303] */
    (xdc_Char)0x20,  /* [6304] */
    (xdc_Char)0x74,  /* [6305] */
    (xdc_Char)0x73,  /* [6306] */
    (xdc_Char)0x6b,  /* [6307] */
    (xdc_Char)0x3a,  /* [6308] */
    (xdc_Char)0x20,  /* [6309] */
    (xdc_Char)0x30,  /* [6310] */
    (xdc_Char)0x78,  /* [6311] */
    (xdc_Char)0x25,  /* [6312] */
    (xdc_Char)0x78,  /* [6313] */
    (xdc_Char)0x2c,  /* [6314] */
    (xdc_Char)0x20,  /* [6315] */
    (xdc_Char)0x66,  /* [6316] */
    (xdc_Char)0x75,  /* [6317] */
    (xdc_Char)0x6e,  /* [6318] */
    (xdc_Char)0x63,  /* [6319] */
    (xdc_Char)0x3a,  /* [6320] */
    (xdc_Char)0x20,  /* [6321] */
    (xdc_Char)0x30,  /* [6322] */
    (xdc_Char)0x78,  /* [6323] */
    (xdc_Char)0x25,  /* [6324] */
    (xdc_Char)0x78,  /* [6325] */
    (xdc_Char)0x2c,  /* [6326] */
    (xdc_Char)0x20,  /* [6327] */
    (xdc_Char)0x70,  /* [6328] */
    (xdc_Char)0x72,  /* [6329] */
    (xdc_Char)0x69,  /* [6330] */
    (xdc_Char)0x3a,  /* [6331] */
    (xdc_Char)0x20,  /* [6332] */
    (xdc_Char)0x25,  /* [6333] */
    (xdc_Char)0x64,  /* [6334] */
    (xdc_Char)0x0,  /* [6335] */
    (xdc_Char)0x4c,  /* [6336] */
    (xdc_Char)0x44,  /* [6337] */
    (xdc_Char)0x5f,  /* [6338] */
    (xdc_Char)0x62,  /* [6339] */
    (xdc_Char)0x6c,  /* [6340] */
    (xdc_Char)0x6f,  /* [6341] */
    (xdc_Char)0x63,  /* [6342] */
    (xdc_Char)0x6b,  /* [6343] */
    (xdc_Char)0x3a,  /* [6344] */
    (xdc_Char)0x20,  /* [6345] */
    (xdc_Char)0x74,  /* [6346] */
    (xdc_Char)0x73,  /* [6347] */
    (xdc_Char)0x6b,  /* [6348] */
    (xdc_Char)0x3a,  /* [6349] */
    (xdc_Char)0x20,  /* [6350] */
    (xdc_Char)0x30,  /* [6351] */
    (xdc_Char)0x78,  /* [6352] */
    (xdc_Char)0x25,  /* [6353] */
    (xdc_Char)0x78,  /* [6354] */
    (xdc_Char)0x2c,  /* [6355] */
    (xdc_Char)0x20,  /* [6356] */
    (xdc_Char)0x66,  /* [6357] */
    (xdc_Char)0x75,  /* [6358] */
    (xdc_Char)0x6e,  /* [6359] */
    (xdc_Char)0x63,  /* [6360] */
    (xdc_Char)0x3a,  /* [6361] */
    (xdc_Char)0x20,  /* [6362] */
    (xdc_Char)0x30,  /* [6363] */
    (xdc_Char)0x78,  /* [6364] */
    (xdc_Char)0x25,  /* [6365] */
    (xdc_Char)0x78,  /* [6366] */
    (xdc_Char)0x0,  /* [6367] */
    (xdc_Char)0x4c,  /* [6368] */
    (xdc_Char)0x4d,  /* [6369] */
    (xdc_Char)0x5f,  /* [6370] */
    (xdc_Char)0x79,  /* [6371] */
    (xdc_Char)0x69,  /* [6372] */
    (xdc_Char)0x65,  /* [6373] */
    (xdc_Char)0x6c,  /* [6374] */
    (xdc_Char)0x64,  /* [6375] */
    (xdc_Char)0x3a,  /* [6376] */
    (xdc_Char)0x20,  /* [6377] */
    (xdc_Char)0x74,  /* [6378] */
    (xdc_Char)0x73,  /* [6379] */
    (xdc_Char)0x6b,  /* [6380] */
    (xdc_Char)0x3a,  /* [6381] */
    (xdc_Char)0x20,  /* [6382] */
    (xdc_Char)0x30,  /* [6383] */
    (xdc_Char)0x78,  /* [6384] */
    (xdc_Char)0x25,  /* [6385] */
    (xdc_Char)0x78,  /* [6386] */
    (xdc_Char)0x2c,  /* [6387] */
    (xdc_Char)0x20,  /* [6388] */
    (xdc_Char)0x66,  /* [6389] */
    (xdc_Char)0x75,  /* [6390] */
    (xdc_Char)0x6e,  /* [6391] */
    (xdc_Char)0x63,  /* [6392] */
    (xdc_Char)0x3a,  /* [6393] */
    (xdc_Char)0x20,  /* [6394] */
    (xdc_Char)0x30,  /* [6395] */
    (xdc_Char)0x78,  /* [6396] */
    (xdc_Char)0x25,  /* [6397] */
    (xdc_Char)0x78,  /* [6398] */
    (xdc_Char)0x2c,  /* [6399] */
    (xdc_Char)0x20,  /* [6400] */
    (xdc_Char)0x63,  /* [6401] */
    (xdc_Char)0x75,  /* [6402] */
    (xdc_Char)0x72,  /* [6403] */
    (xdc_Char)0x72,  /* [6404] */
    (xdc_Char)0x54,  /* [6405] */
    (xdc_Char)0x68,  /* [6406] */
    (xdc_Char)0x72,  /* [6407] */
    (xdc_Char)0x65,  /* [6408] */
    (xdc_Char)0x61,  /* [6409] */
    (xdc_Char)0x64,  /* [6410] */
    (xdc_Char)0x3a,  /* [6411] */
    (xdc_Char)0x20,  /* [6412] */
    (xdc_Char)0x25,  /* [6413] */
    (xdc_Char)0x64,  /* [6414] */
    (xdc_Char)0x0,  /* [6415] */
    (xdc_Char)0x4c,  /* [6416] */
    (xdc_Char)0x4d,  /* [6417] */
    (xdc_Char)0x5f,  /* [6418] */
    (xdc_Char)0x73,  /* [6419] */
    (xdc_Char)0x65,  /* [6420] */
    (xdc_Char)0x74,  /* [6421] */
    (xdc_Char)0x50,  /* [6422] */
    (xdc_Char)0x72,  /* [6423] */
    (xdc_Char)0x69,  /* [6424] */
    (xdc_Char)0x3a,  /* [6425] */
    (xdc_Char)0x20,  /* [6426] */
    (xdc_Char)0x74,  /* [6427] */
    (xdc_Char)0x73,  /* [6428] */
    (xdc_Char)0x6b,  /* [6429] */
    (xdc_Char)0x3a,  /* [6430] */
    (xdc_Char)0x20,  /* [6431] */
    (xdc_Char)0x30,  /* [6432] */
    (xdc_Char)0x78,  /* [6433] */
    (xdc_Char)0x25,  /* [6434] */
    (xdc_Char)0x78,  /* [6435] */
    (xdc_Char)0x2c,  /* [6436] */
    (xdc_Char)0x20,  /* [6437] */
    (xdc_Char)0x66,  /* [6438] */
    (xdc_Char)0x75,  /* [6439] */
    (xdc_Char)0x6e,  /* [6440] */
    (xdc_Char)0x63,  /* [6441] */
    (xdc_Char)0x3a,  /* [6442] */
    (xdc_Char)0x20,  /* [6443] */
    (xdc_Char)0x30,  /* [6444] */
    (xdc_Char)0x78,  /* [6445] */
    (xdc_Char)0x25,  /* [6446] */
    (xdc_Char)0x78,  /* [6447] */
    (xdc_Char)0x2c,  /* [6448] */
    (xdc_Char)0x20,  /* [6449] */
    (xdc_Char)0x6f,  /* [6450] */
    (xdc_Char)0x6c,  /* [6451] */
    (xdc_Char)0x64,  /* [6452] */
    (xdc_Char)0x50,  /* [6453] */
    (xdc_Char)0x72,  /* [6454] */
    (xdc_Char)0x69,  /* [6455] */
    (xdc_Char)0x3a,  /* [6456] */
    (xdc_Char)0x20,  /* [6457] */
    (xdc_Char)0x25,  /* [6458] */
    (xdc_Char)0x64,  /* [6459] */
    (xdc_Char)0x2c,  /* [6460] */
    (xdc_Char)0x20,  /* [6461] */
    (xdc_Char)0x6e,  /* [6462] */
    (xdc_Char)0x65,  /* [6463] */
    (xdc_Char)0x77,  /* [6464] */
    (xdc_Char)0x50,  /* [6465] */
    (xdc_Char)0x72,  /* [6466] */
    (xdc_Char)0x69,  /* [6467] */
    (xdc_Char)0x20,  /* [6468] */
    (xdc_Char)0x25,  /* [6469] */
    (xdc_Char)0x64,  /* [6470] */
    (xdc_Char)0x0,  /* [6471] */
    (xdc_Char)0x4c,  /* [6472] */
    (xdc_Char)0x44,  /* [6473] */
    (xdc_Char)0x5f,  /* [6474] */
    (xdc_Char)0x65,  /* [6475] */
    (xdc_Char)0x78,  /* [6476] */
    (xdc_Char)0x69,  /* [6477] */
    (xdc_Char)0x74,  /* [6478] */
    (xdc_Char)0x3a,  /* [6479] */
    (xdc_Char)0x20,  /* [6480] */
    (xdc_Char)0x74,  /* [6481] */
    (xdc_Char)0x73,  /* [6482] */
    (xdc_Char)0x6b,  /* [6483] */
    (xdc_Char)0x3a,  /* [6484] */
    (xdc_Char)0x20,  /* [6485] */
    (xdc_Char)0x30,  /* [6486] */
    (xdc_Char)0x78,  /* [6487] */
    (xdc_Char)0x25,  /* [6488] */
    (xdc_Char)0x78,  /* [6489] */
    (xdc_Char)0x2c,  /* [6490] */
    (xdc_Char)0x20,  /* [6491] */
    (xdc_Char)0x66,  /* [6492] */
    (xdc_Char)0x75,  /* [6493] */
    (xdc_Char)0x6e,  /* [6494] */
    (xdc_Char)0x63,  /* [6495] */
    (xdc_Char)0x3a,  /* [6496] */
    (xdc_Char)0x20,  /* [6497] */
    (xdc_Char)0x30,  /* [6498] */
    (xdc_Char)0x78,  /* [6499] */
    (xdc_Char)0x25,  /* [6500] */
    (xdc_Char)0x78,  /* [6501] */
    (xdc_Char)0x0,  /* [6502] */
    (xdc_Char)0x4c,  /* [6503] */
    (xdc_Char)0x4d,  /* [6504] */
    (xdc_Char)0x5f,  /* [6505] */
    (xdc_Char)0x73,  /* [6506] */
    (xdc_Char)0x65,  /* [6507] */
    (xdc_Char)0x74,  /* [6508] */
    (xdc_Char)0x41,  /* [6509] */
    (xdc_Char)0x66,  /* [6510] */
    (xdc_Char)0x66,  /* [6511] */
    (xdc_Char)0x69,  /* [6512] */
    (xdc_Char)0x6e,  /* [6513] */
    (xdc_Char)0x69,  /* [6514] */
    (xdc_Char)0x74,  /* [6515] */
    (xdc_Char)0x79,  /* [6516] */
    (xdc_Char)0x3a,  /* [6517] */
    (xdc_Char)0x20,  /* [6518] */
    (xdc_Char)0x74,  /* [6519] */
    (xdc_Char)0x73,  /* [6520] */
    (xdc_Char)0x6b,  /* [6521] */
    (xdc_Char)0x3a,  /* [6522] */
    (xdc_Char)0x20,  /* [6523] */
    (xdc_Char)0x30,  /* [6524] */
    (xdc_Char)0x78,  /* [6525] */
    (xdc_Char)0x25,  /* [6526] */
    (xdc_Char)0x78,  /* [6527] */
    (xdc_Char)0x2c,  /* [6528] */
    (xdc_Char)0x20,  /* [6529] */
    (xdc_Char)0x66,  /* [6530] */
    (xdc_Char)0x75,  /* [6531] */
    (xdc_Char)0x6e,  /* [6532] */
    (xdc_Char)0x63,  /* [6533] */
    (xdc_Char)0x3a,  /* [6534] */
    (xdc_Char)0x20,  /* [6535] */
    (xdc_Char)0x30,  /* [6536] */
    (xdc_Char)0x78,  /* [6537] */
    (xdc_Char)0x25,  /* [6538] */
    (xdc_Char)0x78,  /* [6539] */
    (xdc_Char)0x2c,  /* [6540] */
    (xdc_Char)0x20,  /* [6541] */
    (xdc_Char)0x6f,  /* [6542] */
    (xdc_Char)0x6c,  /* [6543] */
    (xdc_Char)0x64,  /* [6544] */
    (xdc_Char)0x43,  /* [6545] */
    (xdc_Char)0x6f,  /* [6546] */
    (xdc_Char)0x72,  /* [6547] */
    (xdc_Char)0x65,  /* [6548] */
    (xdc_Char)0x3a,  /* [6549] */
    (xdc_Char)0x20,  /* [6550] */
    (xdc_Char)0x25,  /* [6551] */
    (xdc_Char)0x64,  /* [6552] */
    (xdc_Char)0x2c,  /* [6553] */
    (xdc_Char)0x20,  /* [6554] */
    (xdc_Char)0x6f,  /* [6555] */
    (xdc_Char)0x6c,  /* [6556] */
    (xdc_Char)0x64,  /* [6557] */
    (xdc_Char)0x41,  /* [6558] */
    (xdc_Char)0x66,  /* [6559] */
    (xdc_Char)0x66,  /* [6560] */
    (xdc_Char)0x69,  /* [6561] */
    (xdc_Char)0x6e,  /* [6562] */
    (xdc_Char)0x69,  /* [6563] */
    (xdc_Char)0x74,  /* [6564] */
    (xdc_Char)0x79,  /* [6565] */
    (xdc_Char)0x20,  /* [6566] */
    (xdc_Char)0x25,  /* [6567] */
    (xdc_Char)0x64,  /* [6568] */
    (xdc_Char)0x2c,  /* [6569] */
    (xdc_Char)0x20,  /* [6570] */
    (xdc_Char)0x6e,  /* [6571] */
    (xdc_Char)0x65,  /* [6572] */
    (xdc_Char)0x77,  /* [6573] */
    (xdc_Char)0x41,  /* [6574] */
    (xdc_Char)0x66,  /* [6575] */
    (xdc_Char)0x66,  /* [6576] */
    (xdc_Char)0x69,  /* [6577] */
    (xdc_Char)0x6e,  /* [6578] */
    (xdc_Char)0x69,  /* [6579] */
    (xdc_Char)0x74,  /* [6580] */
    (xdc_Char)0x79,  /* [6581] */
    (xdc_Char)0x20,  /* [6582] */
    (xdc_Char)0x25,  /* [6583] */
    (xdc_Char)0x64,  /* [6584] */
    (xdc_Char)0x0,  /* [6585] */
    (xdc_Char)0x4c,  /* [6586] */
    (xdc_Char)0x44,  /* [6587] */
    (xdc_Char)0x5f,  /* [6588] */
    (xdc_Char)0x73,  /* [6589] */
    (xdc_Char)0x63,  /* [6590] */
    (xdc_Char)0x68,  /* [6591] */
    (xdc_Char)0x65,  /* [6592] */
    (xdc_Char)0x64,  /* [6593] */
    (xdc_Char)0x75,  /* [6594] */
    (xdc_Char)0x6c,  /* [6595] */
    (xdc_Char)0x65,  /* [6596] */
    (xdc_Char)0x3a,  /* [6597] */
    (xdc_Char)0x20,  /* [6598] */
    (xdc_Char)0x63,  /* [6599] */
    (xdc_Char)0x6f,  /* [6600] */
    (xdc_Char)0x72,  /* [6601] */
    (xdc_Char)0x65,  /* [6602] */
    (xdc_Char)0x49,  /* [6603] */
    (xdc_Char)0x64,  /* [6604] */
    (xdc_Char)0x3a,  /* [6605] */
    (xdc_Char)0x20,  /* [6606] */
    (xdc_Char)0x25,  /* [6607] */
    (xdc_Char)0x64,  /* [6608] */
    (xdc_Char)0x2c,  /* [6609] */
    (xdc_Char)0x20,  /* [6610] */
    (xdc_Char)0x77,  /* [6611] */
    (xdc_Char)0x6f,  /* [6612] */
    (xdc_Char)0x72,  /* [6613] */
    (xdc_Char)0x6b,  /* [6614] */
    (xdc_Char)0x46,  /* [6615] */
    (xdc_Char)0x6c,  /* [6616] */
    (xdc_Char)0x61,  /* [6617] */
    (xdc_Char)0x67,  /* [6618] */
    (xdc_Char)0x3a,  /* [6619] */
    (xdc_Char)0x20,  /* [6620] */
    (xdc_Char)0x25,  /* [6621] */
    (xdc_Char)0x64,  /* [6622] */
    (xdc_Char)0x2c,  /* [6623] */
    (xdc_Char)0x20,  /* [6624] */
    (xdc_Char)0x63,  /* [6625] */
    (xdc_Char)0x75,  /* [6626] */
    (xdc_Char)0x72,  /* [6627] */
    (xdc_Char)0x53,  /* [6628] */
    (xdc_Char)0x65,  /* [6629] */
    (xdc_Char)0x74,  /* [6630] */
    (xdc_Char)0x4c,  /* [6631] */
    (xdc_Char)0x6f,  /* [6632] */
    (xdc_Char)0x63,  /* [6633] */
    (xdc_Char)0x61,  /* [6634] */
    (xdc_Char)0x6c,  /* [6635] */
    (xdc_Char)0x3a,  /* [6636] */
    (xdc_Char)0x20,  /* [6637] */
    (xdc_Char)0x25,  /* [6638] */
    (xdc_Char)0x64,  /* [6639] */
    (xdc_Char)0x2c,  /* [6640] */
    (xdc_Char)0x20,  /* [6641] */
    (xdc_Char)0x63,  /* [6642] */
    (xdc_Char)0x75,  /* [6643] */
    (xdc_Char)0x72,  /* [6644] */
    (xdc_Char)0x53,  /* [6645] */
    (xdc_Char)0x65,  /* [6646] */
    (xdc_Char)0x74,  /* [6647] */
    (xdc_Char)0x58,  /* [6648] */
    (xdc_Char)0x3a,  /* [6649] */
    (xdc_Char)0x20,  /* [6650] */
    (xdc_Char)0x25,  /* [6651] */
    (xdc_Char)0x64,  /* [6652] */
    (xdc_Char)0x2c,  /* [6653] */
    (xdc_Char)0x20,  /* [6654] */
    (xdc_Char)0x63,  /* [6655] */
    (xdc_Char)0x75,  /* [6656] */
    (xdc_Char)0x72,  /* [6657] */
    (xdc_Char)0x4d,  /* [6658] */
    (xdc_Char)0x61,  /* [6659] */
    (xdc_Char)0x73,  /* [6660] */
    (xdc_Char)0x6b,  /* [6661] */
    (xdc_Char)0x4c,  /* [6662] */
    (xdc_Char)0x6f,  /* [6663] */
    (xdc_Char)0x63,  /* [6664] */
    (xdc_Char)0x61,  /* [6665] */
    (xdc_Char)0x6c,  /* [6666] */
    (xdc_Char)0x3a,  /* [6667] */
    (xdc_Char)0x20,  /* [6668] */
    (xdc_Char)0x25,  /* [6669] */
    (xdc_Char)0x64,  /* [6670] */
    (xdc_Char)0x0,  /* [6671] */
    (xdc_Char)0x4c,  /* [6672] */
    (xdc_Char)0x44,  /* [6673] */
    (xdc_Char)0x5f,  /* [6674] */
    (xdc_Char)0x6e,  /* [6675] */
    (xdc_Char)0x6f,  /* [6676] */
    (xdc_Char)0x57,  /* [6677] */
    (xdc_Char)0x6f,  /* [6678] */
    (xdc_Char)0x72,  /* [6679] */
    (xdc_Char)0x6b,  /* [6680] */
    (xdc_Char)0x3a,  /* [6681] */
    (xdc_Char)0x20,  /* [6682] */
    (xdc_Char)0x63,  /* [6683] */
    (xdc_Char)0x6f,  /* [6684] */
    (xdc_Char)0x72,  /* [6685] */
    (xdc_Char)0x65,  /* [6686] */
    (xdc_Char)0x49,  /* [6687] */
    (xdc_Char)0x64,  /* [6688] */
    (xdc_Char)0x3a,  /* [6689] */
    (xdc_Char)0x20,  /* [6690] */
    (xdc_Char)0x25,  /* [6691] */
    (xdc_Char)0x64,  /* [6692] */
    (xdc_Char)0x2c,  /* [6693] */
    (xdc_Char)0x20,  /* [6694] */
    (xdc_Char)0x63,  /* [6695] */
    (xdc_Char)0x75,  /* [6696] */
    (xdc_Char)0x72,  /* [6697] */
    (xdc_Char)0x53,  /* [6698] */
    (xdc_Char)0x65,  /* [6699] */
    (xdc_Char)0x74,  /* [6700] */
    (xdc_Char)0x4c,  /* [6701] */
    (xdc_Char)0x6f,  /* [6702] */
    (xdc_Char)0x63,  /* [6703] */
    (xdc_Char)0x61,  /* [6704] */
    (xdc_Char)0x6c,  /* [6705] */
    (xdc_Char)0x3a,  /* [6706] */
    (xdc_Char)0x20,  /* [6707] */
    (xdc_Char)0x25,  /* [6708] */
    (xdc_Char)0x64,  /* [6709] */
    (xdc_Char)0x2c,  /* [6710] */
    (xdc_Char)0x20,  /* [6711] */
    (xdc_Char)0x63,  /* [6712] */
    (xdc_Char)0x75,  /* [6713] */
    (xdc_Char)0x72,  /* [6714] */
    (xdc_Char)0x53,  /* [6715] */
    (xdc_Char)0x65,  /* [6716] */
    (xdc_Char)0x74,  /* [6717] */
    (xdc_Char)0x58,  /* [6718] */
    (xdc_Char)0x3a,  /* [6719] */
    (xdc_Char)0x20,  /* [6720] */
    (xdc_Char)0x25,  /* [6721] */
    (xdc_Char)0x64,  /* [6722] */
    (xdc_Char)0x2c,  /* [6723] */
    (xdc_Char)0x20,  /* [6724] */
    (xdc_Char)0x63,  /* [6725] */
    (xdc_Char)0x75,  /* [6726] */
    (xdc_Char)0x72,  /* [6727] */
    (xdc_Char)0x4d,  /* [6728] */
    (xdc_Char)0x61,  /* [6729] */
    (xdc_Char)0x73,  /* [6730] */
    (xdc_Char)0x6b,  /* [6731] */
    (xdc_Char)0x4c,  /* [6732] */
    (xdc_Char)0x6f,  /* [6733] */
    (xdc_Char)0x63,  /* [6734] */
    (xdc_Char)0x61,  /* [6735] */
    (xdc_Char)0x6c,  /* [6736] */
    (xdc_Char)0x3a,  /* [6737] */
    (xdc_Char)0x20,  /* [6738] */
    (xdc_Char)0x25,  /* [6739] */
    (xdc_Char)0x64,  /* [6740] */
    (xdc_Char)0x0,  /* [6741] */
    (xdc_Char)0x4c,  /* [6742] */
    (xdc_Char)0x4d,  /* [6743] */
    (xdc_Char)0x5f,  /* [6744] */
    (xdc_Char)0x62,  /* [6745] */
    (xdc_Char)0x65,  /* [6746] */
    (xdc_Char)0x67,  /* [6747] */
    (xdc_Char)0x69,  /* [6748] */
    (xdc_Char)0x6e,  /* [6749] */
    (xdc_Char)0x3a,  /* [6750] */
    (xdc_Char)0x20,  /* [6751] */
    (xdc_Char)0x68,  /* [6752] */
    (xdc_Char)0x77,  /* [6753] */
    (xdc_Char)0x69,  /* [6754] */
    (xdc_Char)0x3a,  /* [6755] */
    (xdc_Char)0x20,  /* [6756] */
    (xdc_Char)0x30,  /* [6757] */
    (xdc_Char)0x78,  /* [6758] */
    (xdc_Char)0x25,  /* [6759] */
    (xdc_Char)0x78,  /* [6760] */
    (xdc_Char)0x2c,  /* [6761] */
    (xdc_Char)0x20,  /* [6762] */
    (xdc_Char)0x66,  /* [6763] */
    (xdc_Char)0x75,  /* [6764] */
    (xdc_Char)0x6e,  /* [6765] */
    (xdc_Char)0x63,  /* [6766] */
    (xdc_Char)0x3a,  /* [6767] */
    (xdc_Char)0x20,  /* [6768] */
    (xdc_Char)0x30,  /* [6769] */
    (xdc_Char)0x78,  /* [6770] */
    (xdc_Char)0x25,  /* [6771] */
    (xdc_Char)0x78,  /* [6772] */
    (xdc_Char)0x2c,  /* [6773] */
    (xdc_Char)0x20,  /* [6774] */
    (xdc_Char)0x70,  /* [6775] */
    (xdc_Char)0x72,  /* [6776] */
    (xdc_Char)0x65,  /* [6777] */
    (xdc_Char)0x54,  /* [6778] */
    (xdc_Char)0x68,  /* [6779] */
    (xdc_Char)0x72,  /* [6780] */
    (xdc_Char)0x65,  /* [6781] */
    (xdc_Char)0x61,  /* [6782] */
    (xdc_Char)0x64,  /* [6783] */
    (xdc_Char)0x3a,  /* [6784] */
    (xdc_Char)0x20,  /* [6785] */
    (xdc_Char)0x25,  /* [6786] */
    (xdc_Char)0x64,  /* [6787] */
    (xdc_Char)0x2c,  /* [6788] */
    (xdc_Char)0x20,  /* [6789] */
    (xdc_Char)0x69,  /* [6790] */
    (xdc_Char)0x6e,  /* [6791] */
    (xdc_Char)0x74,  /* [6792] */
    (xdc_Char)0x4e,  /* [6793] */
    (xdc_Char)0x75,  /* [6794] */
    (xdc_Char)0x6d,  /* [6795] */
    (xdc_Char)0x3a,  /* [6796] */
    (xdc_Char)0x20,  /* [6797] */
    (xdc_Char)0x25,  /* [6798] */
    (xdc_Char)0x64,  /* [6799] */
    (xdc_Char)0x2c,  /* [6800] */
    (xdc_Char)0x20,  /* [6801] */
    (xdc_Char)0x69,  /* [6802] */
    (xdc_Char)0x72,  /* [6803] */
    (xdc_Char)0x70,  /* [6804] */
    (xdc_Char)0x3a,  /* [6805] */
    (xdc_Char)0x20,  /* [6806] */
    (xdc_Char)0x30,  /* [6807] */
    (xdc_Char)0x78,  /* [6808] */
    (xdc_Char)0x25,  /* [6809] */
    (xdc_Char)0x78,  /* [6810] */
    (xdc_Char)0x0,  /* [6811] */
    (xdc_Char)0x4c,  /* [6812] */
    (xdc_Char)0x44,  /* [6813] */
    (xdc_Char)0x5f,  /* [6814] */
    (xdc_Char)0x65,  /* [6815] */
    (xdc_Char)0x6e,  /* [6816] */
    (xdc_Char)0x64,  /* [6817] */
    (xdc_Char)0x3a,  /* [6818] */
    (xdc_Char)0x20,  /* [6819] */
    (xdc_Char)0x68,  /* [6820] */
    (xdc_Char)0x77,  /* [6821] */
    (xdc_Char)0x69,  /* [6822] */
    (xdc_Char)0x3a,  /* [6823] */
    (xdc_Char)0x20,  /* [6824] */
    (xdc_Char)0x30,  /* [6825] */
    (xdc_Char)0x78,  /* [6826] */
    (xdc_Char)0x25,  /* [6827] */
    (xdc_Char)0x78,  /* [6828] */
    (xdc_Char)0x0,  /* [6829] */
    (xdc_Char)0x78,  /* [6830] */
    (xdc_Char)0x64,  /* [6831] */
    (xdc_Char)0x63,  /* [6832] */
    (xdc_Char)0x2e,  /* [6833] */
    (xdc_Char)0x0,  /* [6834] */
    (xdc_Char)0x72,  /* [6835] */
    (xdc_Char)0x75,  /* [6836] */
    (xdc_Char)0x6e,  /* [6837] */
    (xdc_Char)0x74,  /* [6838] */
    (xdc_Char)0x69,  /* [6839] */
    (xdc_Char)0x6d,  /* [6840] */
    (xdc_Char)0x65,  /* [6841] */
    (xdc_Char)0x2e,  /* [6842] */
    (xdc_Char)0x0,  /* [6843] */
    (xdc_Char)0x41,  /* [6844] */
    (xdc_Char)0x73,  /* [6845] */
    (xdc_Char)0x73,  /* [6846] */
    (xdc_Char)0x65,  /* [6847] */
    (xdc_Char)0x72,  /* [6848] */
    (xdc_Char)0x74,  /* [6849] */
    (xdc_Char)0x0,  /* [6850] */
    (xdc_Char)0x43,  /* [6851] */
    (xdc_Char)0x6f,  /* [6852] */
    (xdc_Char)0x72,  /* [6853] */
    (xdc_Char)0x65,  /* [6854] */
    (xdc_Char)0x0,  /* [6855] */
    (xdc_Char)0x44,  /* [6856] */
    (xdc_Char)0x65,  /* [6857] */
    (xdc_Char)0x66,  /* [6858] */
    (xdc_Char)0x61,  /* [6859] */
    (xdc_Char)0x75,  /* [6860] */
    (xdc_Char)0x6c,  /* [6861] */
    (xdc_Char)0x74,  /* [6862] */
    (xdc_Char)0x73,  /* [6863] */
    (xdc_Char)0x0,  /* [6864] */
    (xdc_Char)0x44,  /* [6865] */
    (xdc_Char)0x69,  /* [6866] */
    (xdc_Char)0x61,  /* [6867] */
    (xdc_Char)0x67,  /* [6868] */
    (xdc_Char)0x73,  /* [6869] */
    (xdc_Char)0x0,  /* [6870] */
    (xdc_Char)0x45,  /* [6871] */
    (xdc_Char)0x72,  /* [6872] */
    (xdc_Char)0x72,  /* [6873] */
    (xdc_Char)0x6f,  /* [6874] */
    (xdc_Char)0x72,  /* [6875] */
    (xdc_Char)0x0,  /* [6876] */
    (xdc_Char)0x47,  /* [6877] */
    (xdc_Char)0x61,  /* [6878] */
    (xdc_Char)0x74,  /* [6879] */
    (xdc_Char)0x65,  /* [6880] */
    (xdc_Char)0x0,  /* [6881] */
    (xdc_Char)0x4c,  /* [6882] */
    (xdc_Char)0x6f,  /* [6883] */
    (xdc_Char)0x67,  /* [6884] */
    (xdc_Char)0x0,  /* [6885] */
    (xdc_Char)0x4c,  /* [6886] */
    (xdc_Char)0x6f,  /* [6887] */
    (xdc_Char)0x67,  /* [6888] */
    (xdc_Char)0x67,  /* [6889] */
    (xdc_Char)0x65,  /* [6890] */
    (xdc_Char)0x72,  /* [6891] */
    (xdc_Char)0x42,  /* [6892] */
    (xdc_Char)0x75,  /* [6893] */
    (xdc_Char)0x66,  /* [6894] */
    (xdc_Char)0x0,  /* [6895] */
    (xdc_Char)0x4d,  /* [6896] */
    (xdc_Char)0x61,  /* [6897] */
    (xdc_Char)0x69,  /* [6898] */
    (xdc_Char)0x6e,  /* [6899] */
    (xdc_Char)0x0,  /* [6900] */
    (xdc_Char)0x4d,  /* [6901] */
    (xdc_Char)0x65,  /* [6902] */
    (xdc_Char)0x6d,  /* [6903] */
    (xdc_Char)0x6f,  /* [6904] */
    (xdc_Char)0x72,  /* [6905] */
    (xdc_Char)0x79,  /* [6906] */
    (xdc_Char)0x0,  /* [6907] */
    (xdc_Char)0x52,  /* [6908] */
    (xdc_Char)0x65,  /* [6909] */
    (xdc_Char)0x67,  /* [6910] */
    (xdc_Char)0x69,  /* [6911] */
    (xdc_Char)0x73,  /* [6912] */
    (xdc_Char)0x74,  /* [6913] */
    (xdc_Char)0x72,  /* [6914] */
    (xdc_Char)0x79,  /* [6915] */
    (xdc_Char)0x0,  /* [6916] */
    (xdc_Char)0x53,  /* [6917] */
    (xdc_Char)0x74,  /* [6918] */
    (xdc_Char)0x61,  /* [6919] */
    (xdc_Char)0x72,  /* [6920] */
    (xdc_Char)0x74,  /* [6921] */
    (xdc_Char)0x75,  /* [6922] */
    (xdc_Char)0x70,  /* [6923] */
    (xdc_Char)0x0,  /* [6924] */
    (xdc_Char)0x53,  /* [6925] */
    (xdc_Char)0x79,  /* [6926] */
    (xdc_Char)0x73,  /* [6927] */
    (xdc_Char)0x74,  /* [6928] */
    (xdc_Char)0x65,  /* [6929] */
    (xdc_Char)0x6d,  /* [6930] */
    (xdc_Char)0x0,  /* [6931] */
    (xdc_Char)0x53,  /* [6932] */
    (xdc_Char)0x79,  /* [6933] */
    (xdc_Char)0x73,  /* [6934] */
    (xdc_Char)0x4d,  /* [6935] */
    (xdc_Char)0x69,  /* [6936] */
    (xdc_Char)0x6e,  /* [6937] */
    (xdc_Char)0x0,  /* [6938] */
    (xdc_Char)0x54,  /* [6939] */
    (xdc_Char)0x65,  /* [6940] */
    (xdc_Char)0x78,  /* [6941] */
    (xdc_Char)0x74,  /* [6942] */
    (xdc_Char)0x0,  /* [6943] */
    (xdc_Char)0x74,  /* [6944] */
    (xdc_Char)0x69,  /* [6945] */
    (xdc_Char)0x2e,  /* [6946] */
    (xdc_Char)0x0,  /* [6947] */
    (xdc_Char)0x73,  /* [6948] */
    (xdc_Char)0x79,  /* [6949] */
    (xdc_Char)0x73,  /* [6950] */
    (xdc_Char)0x62,  /* [6951] */
    (xdc_Char)0x69,  /* [6952] */
    (xdc_Char)0x6f,  /* [6953] */
    (xdc_Char)0x73,  /* [6954] */
    (xdc_Char)0x2e,  /* [6955] */
    (xdc_Char)0x0,  /* [6956] */
    (xdc_Char)0x66,  /* [6957] */
    (xdc_Char)0x61,  /* [6958] */
    (xdc_Char)0x6d,  /* [6959] */
    (xdc_Char)0x69,  /* [6960] */
    (xdc_Char)0x6c,  /* [6961] */
    (xdc_Char)0x79,  /* [6962] */
    (xdc_Char)0x2e,  /* [6963] */
    (xdc_Char)0x0,  /* [6964] */
    (xdc_Char)0x61,  /* [6965] */
    (xdc_Char)0x72,  /* [6966] */
    (xdc_Char)0x6d,  /* [6967] */
    (xdc_Char)0x2e,  /* [6968] */
    (xdc_Char)0x0,  /* [6969] */
    (xdc_Char)0x49,  /* [6970] */
    (xdc_Char)0x6e,  /* [6971] */
    (xdc_Char)0x74,  /* [6972] */
    (xdc_Char)0x72,  /* [6973] */
    (xdc_Char)0x69,  /* [6974] */
    (xdc_Char)0x6e,  /* [6975] */
    (xdc_Char)0x73,  /* [6976] */
    (xdc_Char)0x69,  /* [6977] */
    (xdc_Char)0x63,  /* [6978] */
    (xdc_Char)0x73,  /* [6979] */
    (xdc_Char)0x53,  /* [6980] */
    (xdc_Char)0x75,  /* [6981] */
    (xdc_Char)0x70,  /* [6982] */
    (xdc_Char)0x70,  /* [6983] */
    (xdc_Char)0x6f,  /* [6984] */
    (xdc_Char)0x72,  /* [6985] */
    (xdc_Char)0x74,  /* [6986] */
    (xdc_Char)0x0,  /* [6987] */
    (xdc_Char)0x54,  /* [6988] */
    (xdc_Char)0x61,  /* [6989] */
    (xdc_Char)0x73,  /* [6990] */
    (xdc_Char)0x6b,  /* [6991] */
    (xdc_Char)0x53,  /* [6992] */
    (xdc_Char)0x75,  /* [6993] */
    (xdc_Char)0x70,  /* [6994] */
    (xdc_Char)0x70,  /* [6995] */
    (xdc_Char)0x6f,  /* [6996] */
    (xdc_Char)0x72,  /* [6997] */
    (xdc_Char)0x74,  /* [6998] */
    (xdc_Char)0x0,  /* [6999] */
    (xdc_Char)0x42,  /* [7000] */
    (xdc_Char)0x49,  /* [7001] */
    (xdc_Char)0x4f,  /* [7002] */
    (xdc_Char)0x53,  /* [7003] */
    (xdc_Char)0x0,  /* [7004] */
    (xdc_Char)0x6b,  /* [7005] */
    (xdc_Char)0x6e,  /* [7006] */
    (xdc_Char)0x6c,  /* [7007] */
    (xdc_Char)0x2e,  /* [7008] */
    (xdc_Char)0x0,  /* [7009] */
    (xdc_Char)0x43,  /* [7010] */
    (xdc_Char)0x6c,  /* [7011] */
    (xdc_Char)0x6f,  /* [7012] */
    (xdc_Char)0x63,  /* [7013] */
    (xdc_Char)0x6b,  /* [7014] */
    (xdc_Char)0x0,  /* [7015] */
    (xdc_Char)0x49,  /* [7016] */
    (xdc_Char)0x64,  /* [7017] */
    (xdc_Char)0x6c,  /* [7018] */
    (xdc_Char)0x65,  /* [7019] */
    (xdc_Char)0x0,  /* [7020] */
    (xdc_Char)0x49,  /* [7021] */
    (xdc_Char)0x6e,  /* [7022] */
    (xdc_Char)0x74,  /* [7023] */
    (xdc_Char)0x72,  /* [7024] */
    (xdc_Char)0x69,  /* [7025] */
    (xdc_Char)0x6e,  /* [7026] */
    (xdc_Char)0x73,  /* [7027] */
    (xdc_Char)0x69,  /* [7028] */
    (xdc_Char)0x63,  /* [7029] */
    (xdc_Char)0x73,  /* [7030] */
    (xdc_Char)0x0,  /* [7031] */
    (xdc_Char)0x45,  /* [7032] */
    (xdc_Char)0x76,  /* [7033] */
    (xdc_Char)0x65,  /* [7034] */
    (xdc_Char)0x6e,  /* [7035] */
    (xdc_Char)0x74,  /* [7036] */
    (xdc_Char)0x0,  /* [7037] */
    (xdc_Char)0x51,  /* [7038] */
    (xdc_Char)0x75,  /* [7039] */
    (xdc_Char)0x65,  /* [7040] */
    (xdc_Char)0x75,  /* [7041] */
    (xdc_Char)0x65,  /* [7042] */
    (xdc_Char)0x0,  /* [7043] */
    (xdc_Char)0x53,  /* [7044] */
    (xdc_Char)0x65,  /* [7045] */
    (xdc_Char)0x6d,  /* [7046] */
    (xdc_Char)0x61,  /* [7047] */
    (xdc_Char)0x70,  /* [7048] */
    (xdc_Char)0x68,  /* [7049] */
    (xdc_Char)0x6f,  /* [7050] */
    (xdc_Char)0x72,  /* [7051] */
    (xdc_Char)0x65,  /* [7052] */
    (xdc_Char)0x0,  /* [7053] */
    (xdc_Char)0x53,  /* [7054] */
    (xdc_Char)0x77,  /* [7055] */
    (xdc_Char)0x69,  /* [7056] */
    (xdc_Char)0x0,  /* [7057] */
    (xdc_Char)0x54,  /* [7058] */
    (xdc_Char)0x61,  /* [7059] */
    (xdc_Char)0x73,  /* [7060] */
    (xdc_Char)0x6b,  /* [7061] */
    (xdc_Char)0x0,  /* [7062] */
    (xdc_Char)0x68,  /* [7063] */
    (xdc_Char)0x61,  /* [7064] */
    (xdc_Char)0x6c,  /* [7065] */
    (xdc_Char)0x2e,  /* [7066] */
    (xdc_Char)0x0,  /* [7067] */
    (xdc_Char)0x43,  /* [7068] */
    (xdc_Char)0x61,  /* [7069] */
    (xdc_Char)0x63,  /* [7070] */
    (xdc_Char)0x68,  /* [7071] */
    (xdc_Char)0x65,  /* [7072] */
    (xdc_Char)0x0,  /* [7073] */
    (xdc_Char)0x43,  /* [7074] */
    (xdc_Char)0x6f,  /* [7075] */
    (xdc_Char)0x72,  /* [7076] */
    (xdc_Char)0x65,  /* [7077] */
    (xdc_Char)0x4e,  /* [7078] */
    (xdc_Char)0x75,  /* [7079] */
    (xdc_Char)0x6c,  /* [7080] */
    (xdc_Char)0x6c,  /* [7081] */
    (xdc_Char)0x0,  /* [7082] */
    (xdc_Char)0x48,  /* [7083] */
    (xdc_Char)0x77,  /* [7084] */
    (xdc_Char)0x69,  /* [7085] */
    (xdc_Char)0x0,  /* [7086] */
    (xdc_Char)0x67,  /* [7087] */
    (xdc_Char)0x61,  /* [7088] */
    (xdc_Char)0x74,  /* [7089] */
    (xdc_Char)0x65,  /* [7090] */
    (xdc_Char)0x73,  /* [7091] */
    (xdc_Char)0x2e,  /* [7092] */
    (xdc_Char)0x0,  /* [7093] */
    (xdc_Char)0x47,  /* [7094] */
    (xdc_Char)0x61,  /* [7095] */
    (xdc_Char)0x74,  /* [7096] */
    (xdc_Char)0x65,  /* [7097] */
    (xdc_Char)0x48,  /* [7098] */
    (xdc_Char)0x77,  /* [7099] */
    (xdc_Char)0x69,  /* [7100] */
    (xdc_Char)0x0,  /* [7101] */
    (xdc_Char)0x47,  /* [7102] */
    (xdc_Char)0x61,  /* [7103] */
    (xdc_Char)0x74,  /* [7104] */
    (xdc_Char)0x65,  /* [7105] */
    (xdc_Char)0x4d,  /* [7106] */
    (xdc_Char)0x75,  /* [7107] */
    (xdc_Char)0x74,  /* [7108] */
    (xdc_Char)0x65,  /* [7109] */
    (xdc_Char)0x78,  /* [7110] */
    (xdc_Char)0x50,  /* [7111] */
    (xdc_Char)0x72,  /* [7112] */
    (xdc_Char)0x69,  /* [7113] */
    (xdc_Char)0x0,  /* [7114] */
    (xdc_Char)0x47,  /* [7115] */
    (xdc_Char)0x61,  /* [7116] */
    (xdc_Char)0x74,  /* [7117] */
    (xdc_Char)0x65,  /* [7118] */
    (xdc_Char)0x4d,  /* [7119] */
    (xdc_Char)0x75,  /* [7120] */
    (xdc_Char)0x74,  /* [7121] */
    (xdc_Char)0x65,  /* [7122] */
    (xdc_Char)0x78,  /* [7123] */
    (xdc_Char)0x0,  /* [7124] */
    (xdc_Char)0x67,  /* [7125] */
    (xdc_Char)0x69,  /* [7126] */
    (xdc_Char)0x63,  /* [7127] */
    (xdc_Char)0x2e,  /* [7128] */
    (xdc_Char)0x0,  /* [7129] */
    (xdc_Char)0x65,  /* [7130] */
    (xdc_Char)0x78,  /* [7131] */
    (xdc_Char)0x63,  /* [7132] */
    (xdc_Char)0x2e,  /* [7133] */
    (xdc_Char)0x0,  /* [7134] */
    (xdc_Char)0x45,  /* [7135] */
    (xdc_Char)0x78,  /* [7136] */
    (xdc_Char)0x63,  /* [7137] */
    (xdc_Char)0x65,  /* [7138] */
    (xdc_Char)0x70,  /* [7139] */
    (xdc_Char)0x74,  /* [7140] */
    (xdc_Char)0x69,  /* [7141] */
    (xdc_Char)0x6f,  /* [7142] */
    (xdc_Char)0x6e,  /* [7143] */
    (xdc_Char)0x0,  /* [7144] */
    (xdc_Char)0x72,  /* [7145] */
    (xdc_Char)0x74,  /* [7146] */
    (xdc_Char)0x73,  /* [7147] */
    (xdc_Char)0x2e,  /* [7148] */
    (xdc_Char)0x0,  /* [7149] */
    (xdc_Char)0x67,  /* [7150] */
    (xdc_Char)0x6e,  /* [7151] */
    (xdc_Char)0x75,  /* [7152] */
    (xdc_Char)0x2e,  /* [7153] */
    (xdc_Char)0x0,  /* [7154] */
    (xdc_Char)0x52,  /* [7155] */
    (xdc_Char)0x65,  /* [7156] */
    (xdc_Char)0x65,  /* [7157] */
    (xdc_Char)0x6e,  /* [7158] */
    (xdc_Char)0x74,  /* [7159] */
    (xdc_Char)0x53,  /* [7160] */
    (xdc_Char)0x75,  /* [7161] */
    (xdc_Char)0x70,  /* [7162] */
    (xdc_Char)0x70,  /* [7163] */
    (xdc_Char)0x6f,  /* [7164] */
    (xdc_Char)0x72,  /* [7165] */
    (xdc_Char)0x74,  /* [7166] */
    (xdc_Char)0x0,  /* [7167] */
    (xdc_Char)0x68,  /* [7168] */
    (xdc_Char)0x65,  /* [7169] */
    (xdc_Char)0x61,  /* [7170] */
    (xdc_Char)0x70,  /* [7171] */
    (xdc_Char)0x73,  /* [7172] */
    (xdc_Char)0x2e,  /* [7173] */
    (xdc_Char)0x0,  /* [7174] */
    (xdc_Char)0x48,  /* [7175] */
    (xdc_Char)0x65,  /* [7176] */
    (xdc_Char)0x61,  /* [7177] */
    (xdc_Char)0x70,  /* [7178] */
    (xdc_Char)0x4d,  /* [7179] */
    (xdc_Char)0x65,  /* [7180] */
    (xdc_Char)0x6d,  /* [7181] */
    (xdc_Char)0x0,  /* [7182] */
    (xdc_Char)0x61,  /* [7183] */
    (xdc_Char)0x39,  /* [7184] */
    (xdc_Char)0x2e,  /* [7185] */
    (xdc_Char)0x0,  /* [7186] */
    (xdc_Char)0x54,  /* [7187] */
    (xdc_Char)0x69,  /* [7188] */
    (xdc_Char)0x6d,  /* [7189] */
    (xdc_Char)0x65,  /* [7190] */
    (xdc_Char)0x72,  /* [7191] */
    (xdc_Char)0x0,  /* [7192] */
    (xdc_Char)0x61,  /* [7193] */
    (xdc_Char)0x38,  /* [7194] */
    (xdc_Char)0x2e,  /* [7195] */
    (xdc_Char)0x0,  /* [7196] */
    (xdc_Char)0x4d,  /* [7197] */
    (xdc_Char)0x6d,  /* [7198] */
    (xdc_Char)0x75,  /* [7199] */
    (xdc_Char)0x0,  /* [7200] */
    (xdc_Char)0x61,  /* [7201] */
    (xdc_Char)0x31,  /* [7202] */
    (xdc_Char)0x35,  /* [7203] */
    (xdc_Char)0x2e,  /* [7204] */
    (xdc_Char)0x0,  /* [7205] */
    (xdc_Char)0x54,  /* [7206] */
    (xdc_Char)0x69,  /* [7207] */
    (xdc_Char)0x6d,  /* [7208] */
    (xdc_Char)0x65,  /* [7209] */
    (xdc_Char)0x73,  /* [7210] */
    (xdc_Char)0x74,  /* [7211] */
    (xdc_Char)0x61,  /* [7212] */
    (xdc_Char)0x6d,  /* [7213] */
    (xdc_Char)0x70,  /* [7214] */
    (xdc_Char)0x50,  /* [7215] */
    (xdc_Char)0x72,  /* [7216] */
    (xdc_Char)0x6f,  /* [7217] */
    (xdc_Char)0x76,  /* [7218] */
    (xdc_Char)0x69,  /* [7219] */
    (xdc_Char)0x64,  /* [7220] */
    (xdc_Char)0x65,  /* [7221] */
    (xdc_Char)0x72,  /* [7222] */
    (xdc_Char)0x0,  /* [7223] */
    (xdc_Char)0x48,  /* [7224] */
    (xdc_Char)0x6e,  /* [7225] */
    (xdc_Char)0x64,  /* [7226] */
    (xdc_Char)0x54,  /* [7227] */
    (xdc_Char)0x61,  /* [7228] */
    (xdc_Char)0x73,  /* [7229] */
    (xdc_Char)0x6b,  /* [7230] */
    (xdc_Char)0x55,  /* [7231] */
    (xdc_Char)0x41,  /* [7232] */
    (xdc_Char)0x52,  /* [7233] */
    (xdc_Char)0x54,  /* [7234] */
    (xdc_Char)0x0,  /* [7235] */
    (xdc_Char)0x74,  /* [7236] */
    (xdc_Char)0x69,  /* [7237] */
    (xdc_Char)0x2e,  /* [7238] */
    (xdc_Char)0x73,  /* [7239] */
    (xdc_Char)0x79,  /* [7240] */
    (xdc_Char)0x73,  /* [7241] */
    (xdc_Char)0x62,  /* [7242] */
    (xdc_Char)0x69,  /* [7243] */
    (xdc_Char)0x6f,  /* [7244] */
    (xdc_Char)0x73,  /* [7245] */
    (xdc_Char)0x2e,  /* [7246] */
    (xdc_Char)0x6b,  /* [7247] */
    (xdc_Char)0x6e,  /* [7248] */
    (xdc_Char)0x6c,  /* [7249] */
    (xdc_Char)0x2e,  /* [7250] */
    (xdc_Char)0x54,  /* [7251] */
    (xdc_Char)0x61,  /* [7252] */
    (xdc_Char)0x73,  /* [7253] */
    (xdc_Char)0x6b,  /* [7254] */
    (xdc_Char)0x2e,  /* [7255] */
    (xdc_Char)0x49,  /* [7256] */
    (xdc_Char)0x64,  /* [7257] */
    (xdc_Char)0x6c,  /* [7258] */
    (xdc_Char)0x65,  /* [7259] */
    (xdc_Char)0x54,  /* [7260] */
    (xdc_Char)0x61,  /* [7261] */
    (xdc_Char)0x73,  /* [7262] */
    (xdc_Char)0x6b,  /* [7263] */
    (xdc_Char)0x0,  /* [7264] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[57] = {
    {
        (xdc_Bits16)0x0U,  /* left */
        (xdc_Bits16)0x0U,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1aaeU,  /* left */
        (xdc_Bits16)0x1ab3U,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1abcU,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1ac3U,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1ac8U,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1ad1U,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1ad7U,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1addU,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1ae2U,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1ae6U,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1af0U,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1af5U,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1afcU,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1b05U,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1b0dU,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1b14U,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1b1bU,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x1b20U,  /* left */
        (xdc_Bits16)0x1b24U,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011U,  /* left */
        (xdc_Bits16)0x1b2dU,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012U,  /* left */
        (xdc_Bits16)0x1b35U,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1b3aU,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1b4cU,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8011U,  /* left */
        (xdc_Bits16)0x1b58U,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8011U,  /* left */
        (xdc_Bits16)0x1b5dU,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017U,  /* left */
        (xdc_Bits16)0x1b62U,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8017U,  /* left */
        (xdc_Bits16)0x1b68U,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8017U,  /* left */
        (xdc_Bits16)0x1b6dU,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8017U,  /* left */
        (xdc_Bits16)0x1b78U,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8017U,  /* left */
        (xdc_Bits16)0x1b7eU,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8017U,  /* left */
        (xdc_Bits16)0x1b84U,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8017U,  /* left */
        (xdc_Bits16)0x1b8eU,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8017U,  /* left */
        (xdc_Bits16)0x1b92U,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8011U,  /* left */
        (xdc_Bits16)0x1b97U,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8020U,  /* left */
        (xdc_Bits16)0x1b9cU,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8020U,  /* left */
        (xdc_Bits16)0x1ac3U,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8020U,  /* left */
        (xdc_Bits16)0x1ba2U,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8020U,  /* left */
        (xdc_Bits16)0x1babU,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8011U,  /* left */
        (xdc_Bits16)0x1bafU,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025U,  /* left */
        (xdc_Bits16)0x1bb6U,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8025U,  /* left */
        (xdc_Bits16)0x1bbeU,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8025U,  /* left */
        (xdc_Bits16)0x1bcbU,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1bd5U,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029U,  /* left */
        (xdc_Bits16)0x1babU,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1bdaU,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802bU,  /* left */
        (xdc_Bits16)0x1bdfU,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8011U,  /* left */
        (xdc_Bits16)0x1be9U,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802dU,  /* left */
        (xdc_Bits16)0x1beeU,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802eU,  /* left */
        (xdc_Bits16)0x1bf3U,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x8011U,  /* left */
        (xdc_Bits16)0x1c00U,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030U,  /* left */
        (xdc_Bits16)0x1c07U,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1c0fU,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032U,  /* left */
        (xdc_Bits16)0x1b9cU,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8032U,  /* left */
        (xdc_Bits16)0x1c13U,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1c19U,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8035U,  /* left */
        (xdc_Bits16)0x1c1dU,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1c21U,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8037U,  /* left */
        (xdc_Bits16)0x1c26U,  /* right */
    },  /* [56] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((const CT__xdc_runtime_Text_Module__diagsMask)NULL);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((const CT__xdc_runtime_Text_Module__gateObj)NULL);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((const CT__xdc_runtime_Text_Module__gatePrms)NULL);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8010U;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((const CT__xdc_runtime_Text_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((const CT__xdc_runtime_Text_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((const CT__xdc_runtime_Text_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((const CT__xdc_runtime_Text_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((const CT__xdc_runtime_Text_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((const CT__xdc_runtime_Text_Module__loggerFxn8)NULL);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = NULL;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = NULL;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((const CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((const CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1c61;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x39;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000U;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fffU;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((const CT__xdc_runtime_Text_visitRopeFxn)(xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((const CT__xdc_runtime_Text_visitRopeFxn2)(xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_printf_va__F(fmt, arg__va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_printf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_aprintf_va__F(fmt, arg__va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_aprintf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);

    va_end(arg__va);
    return retval;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutexPri */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutexPri_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutexPri_create((const ti_sysbios_gates_GateMutexPri_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutexPri_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutexPri_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutexPri_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutexPri_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutexPri_enter((ti_sysbios_gates_GateMutexPri_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutexPri_leave((ti_sysbios_gates_GateMutexPri_Handle)inst, key);
}


/*
 * ======== ti.sysbios.hal.Cache_CacheProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a9.Cache */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_a9_Cache_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_enable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_a9_Cache_enable(type);
}

/* disable__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_disable__E( xdc_Bits16 type )
{
    ti_sysbios_family_arm_a9_Cache_disable(type);
}

/* inv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_inv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a9_Cache_inv(blockPtr, byteCnt, type, wait);
}

/* wb__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wb__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a9_Cache_wb(blockPtr, byteCnt, type, wait);
}

/* wbInv__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInv__E( xdc_Ptr blockPtr, xdc_SizeT byteCnt, xdc_Bits16 type, xdc_Bool wait )
{
    ti_sysbios_family_arm_a9_Cache_wbInv(blockPtr, byteCnt, type, wait);
}

/* wbAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbAll__E( void )
{
    ti_sysbios_family_arm_a9_Cache_wbAll();
}

/* wbInvAll__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wbInvAll__E( void )
{
    ti_sysbios_family_arm_a9_Cache_wbInvAll();
}

/* wait__E */
xdc_Void ti_sysbios_hal_Cache_CacheProxy_wait__E( void )
{
    ti_sysbios_family_arm_a9_Cache_wait();
}


/*
 * ======== ti.sysbios.hal.Core_CoreProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.hal.CoreNull */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Core_CoreProxy_Module__startupDone__S(void)
{
    return ti_sysbios_hal_CoreNull_Module__startupDone__S();
}

/* getId__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_getId__E( void )
{
    return ti_sysbios_hal_CoreNull_getId();
}

/* interruptCore__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_interruptCore__E( xdc_UInt coreId )
{
    ti_sysbios_hal_CoreNull_interruptCore(coreId);
}

/* lock__E */
xdc_IArg ti_sysbios_hal_Core_CoreProxy_lock__E( void )
{
    return ti_sysbios_hal_CoreNull_lock();
}

/* unlock__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_unlock__E( void )
{
    ti_sysbios_hal_CoreNull_unlock();
}

/* hwiDisable__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_hwiDisable__E( void )
{
    return ti_sysbios_hal_CoreNull_hwiDisable();
}

/* hwiEnable__E */
xdc_UInt ti_sysbios_hal_Core_CoreProxy_hwiEnable__E( void )
{
    return ti_sysbios_hal_CoreNull_hwiEnable();
}

/* hwiRestore__E */
xdc_Void ti_sysbios_hal_Core_CoreProxy_hwiRestore__E( xdc_UInt key )
{
    ti_sysbios_hal_CoreNull_hwiRestore(key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.gic.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_gic_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_arm_gic_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_arm_gic_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_arm_gic_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_gic_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_gic_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_gic_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_gic_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_gic_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_gic_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_gic_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_gic_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_gic_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_gic_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_gic_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_gic_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_gic_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_gic_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_gic_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_gic_Hwi_getFunc((ti_sysbios_family_arm_gic_Hwi_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_gic_Hwi_setFunc((ti_sysbios_family_arm_gic_Hwi_Handle)inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id )
{
    return ti_sysbios_family_arm_gic_Hwi_getHookContext((ti_sysbios_family_arm_gic_Hwi_Handle)inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_gic_Hwi_setHookContext((ti_sysbios_family_arm_gic_Hwi_Handle)inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst )
{
    return ti_sysbios_family_arm_gic_Hwi_getIrp((ti_sysbios_family_arm_gic_Hwi_Handle)inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a9.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_a9_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_family_arm_a9_Timer_create(id, tickFxn, (const ti_sysbios_family_arm_a9_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_family_arm_a9_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_a9_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_a9_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_a9_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_a9_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_a9_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_a9_Timer_getMaxTicks((ti_sysbios_family_arm_a9_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_a9_Timer_setNextTick((ti_sysbios_family_arm_a9_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_a9_Timer_start((ti_sysbios_family_arm_a9_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_a9_Timer_stop((ti_sysbios_family_arm_a9_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_a9_Timer_setPeriod((ti_sysbios_family_arm_a9_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_a9_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_a9_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_a9_Timer_getPeriod((ti_sysbios_family_arm_a9_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_a9_Timer_getCount((ti_sysbios_family_arm_a9_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_a9_Timer_getFreq((ti_sysbios_family_arm_a9_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_a9_Timer_getFunc((ti_sysbios_family_arm_a9_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_a9_Timer_setFunc((ti_sysbios_family_arm_a9_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_a9_Timer_trigger((ti_sysbios_family_arm_a9_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_a9_Timer_getExpiredCounts((ti_sysbios_family_arm_a9_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_a9_Timer_getExpiredTicks((ti_sysbios_family_arm_a9_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_a9_Timer_getCurrentTick((ti_sysbios_family_arm_a9_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enterFxn, ti_sysbios_interfaces_ITaskSupport_FuncPtr exitFxn, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_TaskSupport_start(curTask, enterFxn, exitFxn, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_TaskSupport_getStackAlignment();
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_LoggerBuf_Module_GateProxy_Handle xdc_runtime_LoggerBuf_Module_GateProxy_create( const xdc_runtime_LoggerBuf_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_LoggerBuf_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_LoggerBuf_Module_GateProxy_delete(xdc_runtime_LoggerBuf_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_LoggerBuf_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_LoggerBuf_Module_GateProxy_enter__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_LoggerBuf_Module_GateProxy_leave__E( xdc_runtime_LoggerBuf_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.a15.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_LoggerBuf_TimestampProxy_get32__E( void )
{
    return ti_sysbios_family_arm_a15_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_a15_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_LoggerBuf_TimestampProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_a15_TimestampProvider_getFreq(freq);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S(void)
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S(void)
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.arm.a9.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_a9_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_a9_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_a9_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_a9_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_a9_Timer___S1) - sizeof(ti_sysbios_family_arm_a9_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_a9_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_a9_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_a9_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.gic.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_gic_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_gic_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_gic_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_gic_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_gic_Hwi___S1) - sizeof(ti_sysbios_family_arm_gic_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_gic_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_gic_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_gic_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutexPri OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutexPri_Object2__ s0; char c; } ti_sysbios_gates_GateMutexPri___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutexPri_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutexPri_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutexPri_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutexPri___S1) - sizeof(ti_sysbios_gates_GateMutexPri_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutexPri_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutexPri_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutexPri_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.LoggerBuf OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_LoggerBuf_Object2__ s0; char c; } xdc_runtime_LoggerBuf___S1;
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_LoggerBuf_Object__DESC__C = {
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_LoggerBuf_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_LoggerBuf___S1) - sizeof(xdc_runtime_LoggerBuf_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_LoggerBuf_Object2__), /* objSize */
    (xdc_CPtr)&xdc_runtime_LoggerBuf_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_LoggerBuf_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module mod, const xdc_runtime_IFilterLogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IFilterLogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IFilterLogger_Params), eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module mod, const xdc_runtime_ILogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_ILogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_ILogger_Params), eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutexPri_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.a15.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_a15_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.a8.Mmu SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a8_Mmu_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_a8_Mmu_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.a9.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a9_Cache_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.a9.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_a9_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_a9_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_a9_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_a9_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_a9_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_a9_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_a9_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_a9_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_a9_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_a9_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_a9_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_a9_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_a9_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_a9_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_a9_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_a9_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_a9_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32820;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_a9_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_a9_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_a9_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_a9_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_a9_Timer_Object__ * const)ti_sysbios_family_arm_a9_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_a9_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_a9_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_a9_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_a9_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_a9_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_a9_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_a9_Timer_Args__create *__args = req_args;
    ti_sysbios_family_arm_a9_Timer_Params instPrms;
    ti_sysbios_family_arm_a9_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_a9_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_a9_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a9_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_a9_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_a9_Timer_Handle ti_sysbios_family_arm_a9_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_a9_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_a9_Timer_Params prms;
    ti_sysbios_family_arm_a9_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_a9_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_a9_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a9_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_a9_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_a9_Timer_construct(ti_sysbios_family_arm_a9_Timer_Struct *objp, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_a9_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_a9_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_a9_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_a9_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a9_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_a9_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_a9_Timer_destruct(ti_sysbios_family_arm_a9_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a9_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_a9_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_a9_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_a9_Timer_Object__DESC__C, *((ti_sysbios_family_arm_a9_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_a9_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_a9_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_a9_Timer_delete(ti_sysbios_family_arm_a9_Timer_Handle *instp)
{
    ti_sysbios_family_arm_a9_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.exc.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_exc_Exception_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_exc_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.gic.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_gic_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_gic_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_gic_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_gic_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_gic_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_gic_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_gic_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_gic_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32810;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_gic_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_gic_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_gic_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_gic_Hwi_Object__ * const)ti_sysbios_family_arm_gic_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_gic_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_gic_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_gic_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_gic_Hwi_Args__create *__args = req_args;
    ti_sysbios_family_arm_gic_Hwi_Params instPrms;
    ti_sysbios_family_arm_gic_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_gic_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_gic_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_gic_Hwi_Params prms;
    ti_sysbios_family_arm_gic_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_gic_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_gic_Hwi_construct(ti_sysbios_family_arm_gic_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_gic_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_gic_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_gic_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_gic_Hwi_destruct(ti_sysbios_family_arm_gic_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_gic_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_gic_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_gic_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_gic_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_gic_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_gic_Hwi_delete(ti_sysbios_family_arm_gic_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_gic_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params instPrms;
    ti_sysbios_gates_GateHwi_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *objp, const ti_sysbios_gates_GateHwi_Params *paramsPtr)
{
    ti_sysbios_gates_GateHwi_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32808;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params instPrms;
    ti_sysbios_gates_GateMutex_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *objp, const ti_sysbios_gates_GateMutex_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutex_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutexPri SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutexPri_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutexPri_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutexPri_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutexPri_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutexPri_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutexPri_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutexPri_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutexPri_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutexPri_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutexPri_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutexPri_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutexPri_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutexPri_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutexPri_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutexPri_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutexPri_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutexPri_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutexPri_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutexPri_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutexPri_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutexPri_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutexPri_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutexPri_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutexPri_Object__ * const)ti_sysbios_gates_GateMutexPri_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutexPri_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutexPri_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutexPri_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutexPri_Params instPrms;
    ti_sysbios_gates_GateMutexPri_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutexPri_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutexPri_Handle ti_sysbios_gates_GateMutexPri_create( const ti_sysbios_gates_GateMutexPri_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutexPri_Params prms;
    ti_sysbios_gates_GateMutexPri_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutexPri_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutexPri_construct(ti_sysbios_gates_GateMutexPri_Struct *objp, const ti_sysbios_gates_GateMutexPri_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutexPri_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutexPri_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutexPri_destruct(ti_sysbios_gates_GateMutexPri_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutexPri_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutexPri_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutexPri_Object__DESC__C, *((ti_sysbios_gates_GateMutexPri_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutexPri_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateMutexPri_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutexPri_delete(ti_sysbios_gates_GateMutexPri_Handle *instp)
{
    ti_sysbios_gates_GateMutexPri_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Cache_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Cache_CacheProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_hal_Cache_CacheProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Cache_CacheProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.hal.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.CoreNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_CoreNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.hal.Core_CoreProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_hal_Core_CoreProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Core_CoreProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_hal_CoreNull_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = req_args;
    ti_sysbios_hal_Hwi_Params instPrms;
    ti_sysbios_hal_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32817;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;
    ti_sysbios_heaps_HeapMem_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *objp, const ti_sysbios_heaps_HeapMem_Params *paramsPtr)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32792;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Clock_Object__ * const)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = req_args;
    ti_sysbios_knl_Clock_Params instPrms;
    ti_sysbios_knl_Clock_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(objp, __args->clockFxn, __args->timeout, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *objp, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr)
{
    ti_sysbios_knl_Clock_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)objp, clockFxn, timeout, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32795;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params instPrms;
    ti_sysbios_knl_Event_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *objp, const ti_sysbios_knl_Event_Params *paramsPtr)
{
    ti_sysbios_knl_Event_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32796;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params instPrms;
    ti_sysbios_knl_Queue_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *objp, const ti_sysbios_knl_Queue_Params *paramsPtr)
{
    ti_sysbios_knl_Queue_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32797;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Semaphore_Object__ * const)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = req_args;
    ti_sysbios_knl_Semaphore_Params instPrms;
    ti_sysbios_knl_Semaphore_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(objp, __args->count, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *objp, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr)
{
    ti_sysbios_knl_Semaphore_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)objp, count, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = req_args;
    ti_sysbios_knl_Swi_Params instPrms;
    ti_sysbios_knl_Swi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(objp, __args->swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *objp, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)objp, swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = req_args;
    ti_sysbios_knl_Task_Params instPrms;
    ti_sysbios_knl_Task_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(objp, __args->fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *objp, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)objp, fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.rts.gnu.ReentSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__S( void )
{
    return ti_sysbios_rts_gnu_ReentSupport_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.LoggerBuf SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S( void )
{
    return xdc_runtime_LoggerBuf_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_LoggerBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32777;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_LoggerBuf_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &xdc_runtime_LoggerBuf_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((xdc_runtime_LoggerBuf_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((xdc_runtime_LoggerBuf_Object__ * const)xdc_runtime_LoggerBuf_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_LoggerBuf_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_LoggerBuf_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params instPrms;
    xdc_runtime_LoggerBuf_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
xdc_runtime_LoggerBuf_Handle xdc_runtime_LoggerBuf_create( const xdc_runtime_LoggerBuf_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params prms;
    xdc_runtime_LoggerBuf_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E(obj, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void xdc_runtime_LoggerBuf_construct(xdc_runtime_LoggerBuf_Struct *objp, const xdc_runtime_LoggerBuf_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    xdc_runtime_LoggerBuf_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = xdc_runtime_LoggerBuf_Instance_init__E((xdc_Ptr)objp, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, objp, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void xdc_runtime_LoggerBuf_destruct(xdc_runtime_LoggerBuf_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, obj, (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_LoggerBuf_Object__DESC__C, *((xdc_runtime_LoggerBuf_Object**)instp), (xdc_Fxn)xdc_runtime_LoggerBuf_Instance_finalize__E, 0, FALSE);
    *((xdc_runtime_LoggerBuf_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_LoggerBuf_delete(xdc_runtime_LoggerBuf_Handle *instp)
{
    xdc_runtime_LoggerBuf_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.LoggerBuf_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_LoggerBuf_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_LoggerBuf_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_LoggerBuf_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_LoggerBuf_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_LoggerBuf_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_LoggerBuf_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.LoggerBuf_TimestampProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_LoggerBuf_TimestampProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_LoggerBuf_TimestampProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS PRAGMAS ========
 */

const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C __attribute__ ((externally_visible));
const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.gates.GateMutexPri PRAGMAS ========
 */

const CT__ti_sysbios_gates_GateMutexPri_Module__diagsEnabled ti_sysbios_gates_GateMutexPri_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__diagsIncluded ti_sysbios_gates_GateMutexPri_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__diagsMask ti_sysbios_gates_GateMutexPri_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__gateObj ti_sysbios_gates_GateMutexPri_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__gatePrms ti_sysbios_gates_GateMutexPri_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__id ti_sysbios_gates_GateMutexPri_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__loggerDefined ti_sysbios_gates_GateMutexPri_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__loggerObj ti_sysbios_gates_GateMutexPri_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn0 ti_sysbios_gates_GateMutexPri_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn1 ti_sysbios_gates_GateMutexPri_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn2 ti_sysbios_gates_GateMutexPri_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn4 ti_sysbios_gates_GateMutexPri_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Module__loggerFxn8 ti_sysbios_gates_GateMutexPri_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Object__count ti_sysbios_gates_GateMutexPri_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Object__heap ti_sysbios_gates_GateMutexPri_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Object__sizeof ti_sysbios_gates_GateMutexPri_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_Object__table ti_sysbios_gates_GateMutexPri_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_A_badContext ti_sysbios_gates_GateMutexPri_A_badContext__C __attribute__ ((externally_visible));
const CT__ti_sysbios_gates_GateMutexPri_A_enterTaskDisabled ti_sysbios_gates_GateMutexPri_A_enterTaskDisabled__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutexPri_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_gates_GateMutexPri_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_gates_GateMutexPri_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_gates_GateMutexPri_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_gates_GateMutexPri_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.hal.Hwi PRAGMAS ========
 */

const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C __attribute__ ((externally_visible));
const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_hal_Hwi_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Clock PRAGMAS ========
 */

const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Clock_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Clock_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Event PRAGMAS ========
 */

const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Event_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Event_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Event_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Event_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Event_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Semaphore PRAGMAS ========
 */

const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Swi PRAGMAS ========
 */

const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Swi_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Swi_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== ti.sysbios.knl.Task PRAGMAS ========
 */

const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C __attribute__ ((externally_visible));
const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Task_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Task_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr ti_sysbios_knl_Task_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void ti_sysbios_knl_Task_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Defaults PRAGMAS ========
 */

const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Diags PRAGMAS ========
 */

const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Diags_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Error PRAGMAS ========
 */

const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Error_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Log PRAGMAS ========
 */

const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Log_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.LoggerBuf PRAGMAS ========
 */

const CT__xdc_runtime_LoggerBuf_Module__diagsEnabled xdc_runtime_LoggerBuf_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__diagsIncluded xdc_runtime_LoggerBuf_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__diagsMask xdc_runtime_LoggerBuf_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__gateObj xdc_runtime_LoggerBuf_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__gatePrms xdc_runtime_LoggerBuf_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__id xdc_runtime_LoggerBuf_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerDefined xdc_runtime_LoggerBuf_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerObj xdc_runtime_LoggerBuf_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn0 xdc_runtime_LoggerBuf_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn1 xdc_runtime_LoggerBuf_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn2 xdc_runtime_LoggerBuf_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn4 xdc_runtime_LoggerBuf_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Module__loggerFxn8 xdc_runtime_LoggerBuf_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Object__count xdc_runtime_LoggerBuf_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Object__heap xdc_runtime_LoggerBuf_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Object__sizeof xdc_runtime_LoggerBuf_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_Object__table xdc_runtime_LoggerBuf_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_filterByLevel xdc_runtime_LoggerBuf_filterByLevel__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_E_badLevel xdc_runtime_LoggerBuf_E_badLevel__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_enableFlush xdc_runtime_LoggerBuf_enableFlush__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_statusLogger xdc_runtime_LoggerBuf_statusLogger__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_level1Mask xdc_runtime_LoggerBuf_level1Mask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_level2Mask xdc_runtime_LoggerBuf_level2Mask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_level3Mask xdc_runtime_LoggerBuf_level3Mask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_LoggerBuf_level4Mask xdc_runtime_LoggerBuf_level4Mask__C __attribute__ ((externally_visible));
xdc_runtime_Types_Label* xdc_runtime_LoggerBuf_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_LoggerBuf_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_LoggerBuf_Object__create__S(xdc_CPtr aa, const xdc_UChar *pa, xdc_SizeT psz, xdc_runtime_Error_Block *eb) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_LoggerBuf_Object__delete__S(xdc_Ptr instp) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_LoggerBuf_Object__get__S(xdc_Ptr oarr, xdc_Int i) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_LoggerBuf_Object__first__S(void) __attribute__ ((externally_visible));
xdc_Ptr xdc_runtime_LoggerBuf_Object__next__S(xdc_Ptr obj) __attribute__ ((externally_visible));
xdc_Void xdc_runtime_LoggerBuf_Params__init__S(xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Main PRAGMAS ========
 */

const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Main_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Memory PRAGMAS ========
 */

const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Memory_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Startup PRAGMAS ========
 */

const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Startup_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.SysMin PRAGMAS ========
 */

const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.System PRAGMAS ========
 */

const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_System_Module__startupDone__S(void) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_printf__E(xdc_CString fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_aprintf__E(xdc_CString fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_sprintf__E(xdc_Char buf[], xdc_CString fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_asprintf__E(xdc_Char buf[], xdc_CString fmt, ...) __attribute__ ((externally_visible));
xdc_Int xdc_runtime_System_snprintf__E(xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...) __attribute__ ((externally_visible));

/*
 * ======== xdc.runtime.Text PRAGMAS ========
 */

const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C __attribute__ ((externally_visible));
const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C __attribute__ ((externally_visible));
xdc_Bool xdc_runtime_Text_Module__startupDone__S(void) __attribute__ ((externally_visible));

/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

#include <stdint.h>
extern int_least32_t __xdc__init(void);
    __attribute__ ((used))
__FAR__ int_least32_t (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

    __attribute__ ((used))
const ti_sysbios_knl_Task_Handle HndTaskUART = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

