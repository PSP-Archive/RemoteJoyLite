#ifndef _MOVIE_H_
#define _MOVIE_H_
/*------------------------------------------------------------------------------*/
/* Movie																		*/
/*------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern int Movie_Init( char *file_name,  PSP_BITMAP *bmp, unsigned int vcount );
extern void Movie_Save( PSP_BITMAP *bmp, unsigned int vcount );
extern void Movie_End( void );

#endif	// _MOVIE_H_
