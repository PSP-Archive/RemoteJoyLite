#ifndef _SETTING_CAPT_H_
#define _SETTING_CAPT_H_
/*------------------------------------------------------------------------------*/
/* Setting_Capt																	*/
/*------------------------------------------------------------------------------*/
#include <windows.h>

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void WmDestroyCaptConf( HWND hWnd );
extern void WmCreateCaptConf( HWND hWnd, HINSTANCE hInst );
extern void WmCommandCaptConf( HWND hWnd, WORD code, WORD id, HWND hCtl );

#endif	// _SETTING_CAPT_H_
