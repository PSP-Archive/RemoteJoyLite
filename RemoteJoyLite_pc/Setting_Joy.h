#ifndef _SETTING_JOY_H_
#define _SETTING_JOY_H_
/*------------------------------------------------------------------------------*/
/* Setting_Joy																	*/
/*------------------------------------------------------------------------------*/
#include <windows.h>
#include "DirectInput.h"

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void WmDestroyJoyConf( HWND hWnd );
extern void WmCreateJoyConf( HWND hWnd, HINSTANCE hInst );
extern void WmCommandJoyConf( HWND hWnd, WORD code, WORD id, HWND hCtl );
extern void UpdateJoyStatus( AkindDI *pAkindDI );

#endif	// _SETTING_JOY_H_
