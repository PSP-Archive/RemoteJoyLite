#ifndef _BITMAP_H_
#define _BITMAP_H_
/*------------------------------------------------------------------------------*/
/* Bitmap																		*/
/*------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/
/* define																		*/
/*------------------------------------------------------------------------------*/
#define BITMAP_W		480
#define BITMAP_H		272
#define BITMAP_SIZE		(BITMAP_W*BITMAP_H*3)

typedef struct {
	char	FHeader[sizeof(BITMAPFILEHEADER)];
	char	IHeader[sizeof(BITMAPINFOHEADER)];
	char	Buff[BITMAP_SIZE];
} PSP_BITMAP;

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern BITMAPINFOHEADER PspBitmapBase;
extern void Bitmap_Init( PSP_BITMAP *bmp );
extern void Bitmap_Name( char *file_name );
extern void Bitmap_Save( PSP_BITMAP *bmp );

#endif	// _BITMAP_H_
