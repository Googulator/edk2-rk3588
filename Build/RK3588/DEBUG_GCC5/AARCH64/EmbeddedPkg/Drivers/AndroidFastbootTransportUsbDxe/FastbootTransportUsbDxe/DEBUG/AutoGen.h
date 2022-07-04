/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f6bec3fe_88fb_11e3_ae84_e73b77561c35
#define _AUTOGENH_f6bec3fe_88fb_11e3_ae84_e73b77561c35

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xf6bec3fe, 0x88fb, 0x11e3, {0xae, 0x84, 0xe7, 0x3b, 0x77, 0x56, 0x1c, 0x35}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xd080df36, 0x45e7, 0x11ec, {0x97, 0x26, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}

// Guids
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gRockchipTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gUsbDeviceProtocolGuid;
extern EFI_GUID gAndroidFastbootTransportProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAndroidFastbootUsbVendorId  0U
#define _PCD_SIZE_PcdAndroidFastbootUsbVendorId 4
#define _PCD_GET_MODE_SIZE_PcdAndroidFastbootUsbVendorId  _PCD_SIZE_PcdAndroidFastbootUsbVendorId 
#define _PCD_VALUE_PcdAndroidFastbootUsbVendorId  0x2207U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAndroidFastbootUsbVendorId;
#define _PCD_GET_MODE_32_PcdAndroidFastbootUsbVendorId  _gPcd_FixedAtBuild_PcdAndroidFastbootUsbVendorId
//#define _PCD_SET_MODE_32_PcdAndroidFastbootUsbVendorId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAndroidFastbootUsbProductId  0U
#define _PCD_SIZE_PcdAndroidFastbootUsbProductId 4
#define _PCD_GET_MODE_SIZE_PcdAndroidFastbootUsbProductId  _PCD_SIZE_PcdAndroidFastbootUsbProductId 
#define _PCD_VALUE_PcdAndroidFastbootUsbProductId  0x0001U
extern const  UINT32  _gPcd_FixedAtBuild_PcdAndroidFastbootUsbProductId;
#define _PCD_GET_MODE_32_PcdAndroidFastbootUsbProductId  _gPcd_FixedAtBuild_PcdAndroidFastbootUsbProductId
//#define _PCD_SET_MODE_32_PcdAndroidFastbootUsbProductId  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FastbootTransportUsbEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
