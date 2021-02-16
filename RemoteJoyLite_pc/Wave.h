#ifndef _WAVE_H_
#define _WAVE_H_
/*------------------------------------------------------------------------------*/
/* Wave																			*/
/*------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void WaveInit( void );
extern void WaveSync( void );
extern void WaveExit( void );

extern void WaveOpen( char *file_name );
extern void WaveClose( void );

#endif	// _WAVE_H_
