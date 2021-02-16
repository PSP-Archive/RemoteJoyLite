/*------------------------------------------------------------------------------*/
/* HI-Speed device descriptor													*/
/*------------------------------------------------------------------------------*/
struct DeviceDescriptor devdesc_hi = {
	.bLength            = 18,
	.bDescriptorType    = 0x01,
	.bcdUSB             = 0x200,
	.bDeviceClass       = 0,
	.bDeviceSubClass    = 0,
	.bDeviceProtocol    = 0,
	.bMaxPacketSize     = 64,
	.idVendor           = 0,
	.idProduct          = 0,
	.bcdDevice          = 0x100,
	.iManufacturer      = 0,
	.iProduct           = 0,
	.iSerialNumber      = 0,
	.bNumConfigurations = 1
};

/*------------------------------------------------------------------------------*/
/* Hi-Speed configuration descriptor											*/
/*------------------------------------------------------------------------------*/
struct ConfigDescriptor confdesc_hi = {
	.bLength             = 9,
	.bDescriptorType     = 2,
	.wTotalLength        = (9+9+(3*7)),
	.bNumInterfaces      = 1,
	.bConfigurationValue = 1,
	.iConfiguration      = 0,
	.bmAttributes        = 0xC0,
	.bMaxPower           = 0
};

/*------------------------------------------------------------------------------*/
/* Hi-Speed interface descriptor												*/
/*------------------------------------------------------------------------------*/
struct InterfaceDescriptor interdesc_hi = {
	.bLength            = 9,
	.bDescriptorType    = 4,
	.bInterfaceNumber   = 0,
	.bAlternateSetting  = 0,
	.bNumEndpoints      = 3,
	.bInterfaceClass    = 0xFF,
	.bInterfaceSubClass = 0x1,
	.bInterfaceProtocol = 0xFF,
	.iInterface         = 1
};

/*------------------------------------------------------------------------------*/
/* Hi-Speed endpoint descriptors												*/
/*------------------------------------------------------------------------------*/
struct EndpointDescriptor endpdesc_hi[3] = {
	{
		.bLength          = 7,
		.bDescriptorType  = 5,
		.bEndpointAddress = 0x81,
		.bmAttributes     = 2,
		.wMaxPacketSize   = 512,
		.bInterval        = 0
	},
	{
		.bLength          = 7,
		.bDescriptorType  = 5,
		.bEndpointAddress = 2,
		.bmAttributes     = 2,
		.wMaxPacketSize   = 512,
		.bInterval        = 0
	},
	{
		.bLength          = 7,
		.bDescriptorType  = 5,
		.bEndpointAddress = 3,
		.bmAttributes     = 2,
		.wMaxPacketSize   = 512,
		.bInterval        = 0
	},
};

/*------------------------------------------------------------------------------*/
/* Full-Speed device descriptor													*/
/*------------------------------------------------------------------------------*/
struct DeviceDescriptor devdesc_full = {
	.bLength            = 18,
	.bDescriptorType    = 0x01,
	.bcdUSB             = 0x200,
	.bDeviceClass       = 0,
	.bDeviceSubClass    = 0,
	.bDeviceProtocol    = 0,
	.bMaxPacketSize     = 64,
	.idVendor           = 0,
	.idProduct          = 0,
	.bcdDevice          = 0x100,
	.iManufacturer      = 0,
	.iProduct           = 0,
	.iSerialNumber      = 0,
	.bNumConfigurations = 1
};

/*------------------------------------------------------------------------------*/
/* Full-Speed configuration descriptor											*/
/*------------------------------------------------------------------------------*/
struct ConfigDescriptor confdesc_full = {
	.bLength             = 9,
	.bDescriptorType     = 2,
	.wTotalLength        = (9+9+(3*7)),
	.bNumInterfaces      = 1,
	.bConfigurationValue = 1,
	.iConfiguration      = 0,
	.bmAttributes        = 0xC0,
	.bMaxPower           = 0
};

/*------------------------------------------------------------------------------*/
/* Full-Speed interface descriptor												*/
/*------------------------------------------------------------------------------*/
struct InterfaceDescriptor interdesc_full = {
	.bLength            = 9,
	.bDescriptorType    = 4,
	.bInterfaceNumber   = 0,
	.bAlternateSetting  = 0,
	.bNumEndpoints      = 3,
	.bInterfaceClass    = 0xFF,
	.bInterfaceSubClass = 0x1,
	.bInterfaceProtocol = 0xFF,
	.iInterface         = 1
};

/*------------------------------------------------------------------------------*/
/* Full-Speed endpoint descriptors												*/
/*------------------------------------------------------------------------------*/
struct EndpointDescriptor endpdesc_full[3] = {
	{
		.bLength          = 7,
		.bDescriptorType  = 5,
		.bEndpointAddress = 0x81,
		.bmAttributes     = 2,
		.wMaxPacketSize   = 64,
		.bInterval        = 0
	},
	{
		.bLength          = 7,
		.bDescriptorType  = 5,
		.bEndpointAddress = 2,
		.bmAttributes     = 2,
		.wMaxPacketSize   = 64,
		.bInterval        = 0
	},
	{
		.bLength          = 7,
		.bDescriptorType  = 5,
		.bEndpointAddress = 3,
		.bmAttributes     = 2,
		.wMaxPacketSize   = 64,
		.bInterval        = 0
	},
};
