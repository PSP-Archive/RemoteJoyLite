/*------------------------------------------------------------------------------*/
/* hook_test																	*/
/*------------------------------------------------------------------------------*/
#include <pspkernel.h>
#include "debug.h"
#include "hook.h"

#ifndef RELEASE
/*------------------------------------------------------------------------------*/
/* work																			*/
/*------------------------------------------------------------------------------*/
static void (*sceTest_Func)( void * ) = NULL;

/*------------------------------------------------------------------------------*/
/* MyTest																		*/
/*------------------------------------------------------------------------------*/
static void MyTest( void )
{
}

/*------------------------------------------------------------------------------*/
/* hookTest																		*/
/*------------------------------------------------------------------------------*/
void hookTest( void )
{
	SceModule *module = sceKernelFindModuleByName( "sceInterruptManager" );
	if ( module == NULL ){ return; }

	if ( sceTest_Func == NULL ){
		sceTest_Func = HookNidAddress( module, "InterruptManager", 0xCA04A2B9 );
		void *hook_addr = HookSyscallAddress( sceTest_Func );
		HookFuncSetting( hook_addr, MyTest );
	}
}
#endif
