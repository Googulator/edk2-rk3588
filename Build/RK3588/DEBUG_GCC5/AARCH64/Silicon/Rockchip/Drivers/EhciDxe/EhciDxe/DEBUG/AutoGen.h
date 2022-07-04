/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1AA6BD7A_B946_11EC_9D33_F42A7DCB925D
#define _AUTOGENH_1AA6BD7A_B946_11EC_9D33_F42A7DCB925D

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x1AA6BD7A, 0xB946, 0x11EC, {0x9D, 0x33, 0xF4, 0x2A, 0x7D, 0xCB, 0x92, 0x5D}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xd080df36, 0x45e7, 0x11ec, {0x97, 0x26, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}

// Guids
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gRockchipTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiUsb2HcProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiCpuArchProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdTurnOffUsbLegacySupport  0U
#define _PCD_SIZE_PcdTurnOffUsbLegacySupport 1
#define _PCD_GET_MODE_SIZE_PcdTurnOffUsbLegacySupport  _PCD_SIZE_PcdTurnOffUsbLegacySupport 
#define _PCD_VALUE_PcdTurnOffUsbLegacySupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdTurnOffUsbLegacySupport;
#define _PCD_GET_MODE_BOOL_PcdTurnOffUsbLegacySupport  _gPcd_FixedAtBuild_PcdTurnOffUsbLegacySupport
//#define _PCD_SET_MODE_BOOL_PcdTurnOffUsbLegacySupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEhciBaseAddress  0U
#define _PCD_SIZE_PcdEhciBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdEhciBaseAddress  _PCD_SIZE_PcdEhciBaseAddress 
#define _PCD_VALUE_PcdEhciBaseAddress  0xfc800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdEhciBaseAddress;
#define _PCD_GET_MODE_32_PcdEhciBaseAddress  _gPcd_FixedAtBuild_PcdEhciBaseAddress
//#define _PCD_SET_MODE_32_PcdEhciBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdNumEhciController  0U
#define _PCD_SIZE_PcdNumEhciController 4
#define _PCD_GET_MODE_SIZE_PcdNumEhciController  _PCD_SIZE_PcdNumEhciController 
#define _PCD_VALUE_PcdNumEhciController  2U
extern const  UINT32  _gPcd_FixedAtBuild_PcdNumEhciController;
#define _PCD_GET_MODE_32_PcdNumEhciController  _gPcd_FixedAtBuild_PcdNumEhciController
//#define _PCD_SET_MODE_32_PcdNumEhciController  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEhciSize  0U
#define _PCD_SIZE_PcdEhciSize 4
#define _PCD_GET_MODE_SIZE_PcdEhciSize  _PCD_SIZE_PcdEhciSize 
#define _PCD_VALUE_PcdEhciSize  0x80000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdEhciSize;
#define _PCD_GET_MODE_32_PcdEhciSize  _gPcd_FixedAtBuild_PcdEhciSize
//#define _PCD_SET_MODE_32_PcdEhciSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
EhciInitialise (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
