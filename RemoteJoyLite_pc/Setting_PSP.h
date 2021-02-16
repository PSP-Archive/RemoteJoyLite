#ifndef _SETTING_PSP_H_
#define _SETTING_PSP_H_
/*------------------------------------------------------------------------------*/
/* Setting_PSP																	*/
/*------------------------------------------------------------------------------*/
#include <windows.h>

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void WmDestroyPSPConf( HWND hWnd );
extern void WmCreatePSPConf( HWND hWnd, HINSTANCE hInst );
extern void WmCommandPSPConf( HWND hWnd, WORD code, WORD id, HWND hCtl );

#endif	// _SETTING_PSP_H_
