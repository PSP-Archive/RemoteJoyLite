#ifndef _KMODE_H_
#define _KMODE_H_
/*------------------------------------------------------------------------------*/
/* kmode																		*/
/*------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern int psplinkSetK1( int k1 );

extern int Copy32bpp( void *src, void *dsr, int ofs, int end );
extern int Copy16bpp( void *src, void *dsr, int ofs, int end );
extern int Cmp888565( void *src, void *dsr, int ofs, int end );

#endif	// _KMODE_H_
