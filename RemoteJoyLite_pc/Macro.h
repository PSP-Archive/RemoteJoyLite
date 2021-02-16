#ifndef _MACRO_H_
#define _MACRO_H_
/*------------------------------------------------------------------------------*/
/* Macro																		*/
/*------------------------------------------------------------------------------*/
#include "DirectInput.h"

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void MacroSync( AkindDI *pMainDI );
extern void MacroRecodeToggle( void );
extern BOOL MacroRecodeCheck( void );
extern void MacroLoad( void );

#endif	// _MACRO_H_
