/*------------------------------------------------------------------------------*/
/* hook_usb																		*/
/*------------------------------------------------------------------------------*/
#include <pspkernel.h>
#include <pspusb.h>
#include <pspusbbus.h>
#include <string.h>
#include "debug.h"
#include "usb.h"
#include "hook.h"

/*------------------------------------------------------------------------------*/
/* work																			*/
/*------------------------------------------------------------------------------*/
static int (*sceUsbStart_Func)( const char *, unsigned int, void * ) = NULL;
static int (*sceUsbStop_Func)( const char *, unsigned int, void * ) = NULL;

/*------------------------------------------------------------------------------*/
/* MyUsbStart																	*/
/*------------------------------------------------------------------------------*/
static int MyUsbStart( const char *name, unsigned int args, void *argp )
{
	if ( strcmp( name, "USBStor_Driver" ) == 0 ){ UsbSuspend(); }
	int ret = sceUsbStart( name, args, argp );
	return( ret );
}

/*------------------------------------------------------------------------------*/
/* MyUsbStop																	*/
/*------------------------------------------------------------------------------*/
static int MyUsbStop( const char *name, unsigned int args, void *argp )
{
	int ret = sceUsbStop( name, args, argp );
	if ( strcmp( name, "USBStor_Driver" ) == 0 ){ UsbResume(); }
	return( ret );
}

/*------------------------------------------------------------------------------*/
/* hookUsbFunc																	*/
/*------------------------------------------------------------------------------*/
void hookUsbFunc( void )
{
	SceModule *module = sceKernelFindModuleByName( "sceUSB_Driver" );
	if ( module == NULL ){ return; }

	if ( sceUsbStart_Func == NULL ){
		sceUsbStart_Func = HookNidAddress( module, "sceUsb", 0xAE5DE6AF );
		void *hook_addr = HookSyscallAddress( sceUsbStart_Func );
		HookFuncSetting( hook_addr, MyUsbStart );
	}

	if ( sceUsbStop_Func == NULL ){
		sceUsbStop_Func = HookNidAddress( module, "sceUsb", 0xC2464FA0 );
		void *hook_addr = HookSyscallAddress( sceUsbStop_Func );
		HookFuncSetting( hook_addr, MyUsbStop );
	}
}
