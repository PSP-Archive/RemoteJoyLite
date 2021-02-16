#ifndef _SETTING_MACRO_H_
#define _SETTING_MACRO_H_
/*------------------------------------------------------------------------------*/
/* Setting_Macro																*/
/*------------------------------------------------------------------------------*/
#include <windows.h>

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void WmDestroyMacroConf( HWND hWnd );
extern void WmCreateMacroConf( HWND hWnd, HINSTANCE hInst );
extern void WmCommandMacroConf( HWND hWnd, WORD code, WORD id, HWND hCtl );

#endif	// _SETTING_MACRO_H_
