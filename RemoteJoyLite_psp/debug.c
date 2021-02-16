/*------------------------------------------------------------------------------*/
/* debug																		*/
/*------------------------------------------------------------------------------*/
#include <pspsdk.h>
#include <pspdisplay.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "../remotejoy.h"
#include "usb.h"
#include "debug.h"

#ifndef RELEASE
/*------------------------------------------------------------------------------*/
/* define																		*/
/*------------------------------------------------------------------------------*/
#define DEBUG_BUFF_SIZE			1024

/*------------------------------------------------------------------------------*/
/* work																			*/
/*------------------------------------------------------------------------------*/
static int debug_disp_flag = 1;

static struct {
	struct JoyScrHeader	head;
	char				buff[DEBUG_BUFF_SIZE];
} DebugData;

/*------------------------------------------------------------------------------*/
/* DebugTrance																	*/
/*------------------------------------------------------------------------------*/
void DebugTrance( int flag )
{
	if ( flag != 0 ){
		DebugData.head.magic = JOY_MAGIC;
		DebugData.head.mode  = ASYNC_CMD_DEBUG;
		DebugData.head.ref   = 0;
		DebugData.head.size  = DEBUG_BUFF_SIZE;
		UsbAsyncWrite( &DebugData, sizeof(DebugData) );
	}
	debug_disp_flag = 1;
}

/*------------------------------------------------------------------------------*/
/* debug_printf																	*/
/*------------------------------------------------------------------------------*/
void debug_printf( const char *arg, ... )
{
	char tmp[DEBUG_BUFF_SIZE];
	int intc = pspSdkDisableInterrupts();

	if ( debug_disp_flag != 0 ){
		debug_disp_flag = 0;
		sprintf( DebugData.buff, "0x%08x\n", sceDisplayGetVcount() );
	}
	va_list ap;
	va_start( ap, arg );
	vsprintf( tmp, arg, ap );
	if ( strlen(DebugData.buff) + strlen(tmp) < DEBUG_BUFF_SIZE ){
		strcat( DebugData.buff, tmp );
	}
	pspSdkEnableInterrupts( intc );
}
#endif
