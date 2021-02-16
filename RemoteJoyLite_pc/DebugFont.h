#ifndef _DEBUGFONT_H_
#define _DEBUGFONT_H_
/*------------------------------------------------------------------------------*/
/* DebugFont																	*/
/*------------------------------------------------------------------------------*/
#include "Direct3D.h"

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void dprintf( int x, int y, const char *arg, ... );
extern BOOL DebugFontInit( AkindD3D *pAkindD3D );
extern void DebugFontExit( void );
extern void DebugFontDraw( AkindD3D *pAkindD3D );

#endif	// _DEBUGFONT_H_
