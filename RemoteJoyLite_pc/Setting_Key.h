#ifndef _SETTING_KEY_H_
#define _SETTING_KEY_H_
/*------------------------------------------------------------------------------*/
/* Setting_Key																	*/
/*------------------------------------------------------------------------------*/
#include <windows.h>

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void WmDestroyKeyConf( HWND hWnd );
extern void WmCreateKeyConf( HWND hWnd, HINSTANCE hInst );
extern void WmCommandKeyConf( HWND hWnd, WORD code, WORD id, HWND hCtl );

#endif	// _SETTING_KEY_H_
