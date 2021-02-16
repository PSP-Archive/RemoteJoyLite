#ifndef _SETTING_ETC_H_
#define _SETTING_ETC_H_
/*------------------------------------------------------------------------------*/
/* Setting_Etc																	*/
/*------------------------------------------------------------------------------*/
#include <windows.h>

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void WmDestroyEtcConf( HWND hWnd );
extern void WmCreateEtcConf( HWND hWnd, HINSTANCE hInst );
extern void WmCommandEtcConf( HWND hWnd, WORD code, WORD id, HWND hCtl );

#endif	// _SETTING_ETC_H_
