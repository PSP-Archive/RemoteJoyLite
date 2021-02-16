#ifndef _SETTING_FILT_H_
#define _SETTING_FILT_H_
/*------------------------------------------------------------------------------*/
/* Setting_Filt																	*/
/*------------------------------------------------------------------------------*/
#include <windows.h>

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void WmDestroyFiltConf( HWND hWnd );
extern void WmCreateFiltConf( HWND hWnd, HINSTANCE hInst );
extern void WmCommandFiltConf( HWND hWnd, WORD code, WORD id, HWND hCtl );

#endif	// _SETTING_FILT_H_
