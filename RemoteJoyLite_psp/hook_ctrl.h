#ifndef _HOOK_CTRL_H_
#define _HOOK_CTRL_H_
/*------------------------------------------------------------------------------*/
/* hook_ctrl																	*/
/*------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void hookCtrlSetData( u32 PreData, u32 NowData, u32 Analog );
extern void hookCtrlLatch( void );
extern void hookCtrlBuffer( void );

#endif	// _HOOK_CTRL_H_
