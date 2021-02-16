#ifndef _HOOK_H_
#define _HOOK_H_
/*------------------------------------------------------------------------------*/
/* hook																			*/
/*------------------------------------------------------------------------------*/
#include "hook_test.h"
#include "hook_impose.h"
#include "hook_ctrl.h"
#include "hook_display.h"
#include "hook_usb.h"
#include "hook_interrupt.h"

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void *HookNidAddress( SceModule *mod, char *libname, u32 nid );
extern void *HookSyscallAddress( void *addr );
extern void HookFuncSetting( void *addr, void *entry );

#endif	// _HOOK_H_
