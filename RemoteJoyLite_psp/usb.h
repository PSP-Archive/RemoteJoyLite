#ifndef _USB_H_
#define _USB_H_
/*------------------------------------------------------------------------------*/
/* usb																			*/
/*------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/
/* prototype																	*/
/*------------------------------------------------------------------------------*/
extern void UsbbdRegister( void );
extern void UsbbdUnregister( void );
extern int UsbStart( void );
extern int UsbStop( void );
extern int UsbResume( void );
extern int UsbSuspend( void );
extern int UsbWait( void );
extern void UsbAsyncFlush( void );
extern int UsbAsyncWrite( const void *data, int len );
extern int UsbAsyncRead( unsigned char *data, int len );
extern void UsbWriteBulkData( const void *data, int len );

#endif	// _USB_H_
