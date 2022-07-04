/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_59fc3843_d8d4_40aa_ae07_38967138509c
#define _AUTOGENH_59fc3843_d8d4_40aa_ae07_38967138509c

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x59fc3843, 0xd8d4, 0x40aa, {0xae, 0x07, 0x38, 0x96, 0x71, 0x38, 0x50, 0x9c}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xd080df36, 0x45e7, 0x11ec, {0x97, 0x26, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}

// Guids
extern EFI_GUID gRockchipTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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

// Protocols
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiI2cIoProtocolGuid;
extern EFI_GUID gRockchipI2cDemoProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
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

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdI2cDemoAddresses  0U
#define _PCD_VALUE_PcdI2cDemoAddresses  (VOID *)_gPcd_FixedAtBuild_PcdI2cDemoAddresses
extern const UINT8 _gPcd_FixedAtBuild_PcdI2cDemoAddresses[1];
#define _PCD_GET_MODE_PTR_PcdI2cDemoAddresses  (VOID *)_gPcd_FixedAtBuild_PcdI2cDemoAddresses
#define _PCD_SIZE_PcdI2cDemoAddresses 1
#define _PCD_GET_MODE_SIZE_PcdI2cDemoAddresses  _PCD_SIZE_PcdI2cDemoAddresses 
//#define _PCD_SET_MODE_PTR_PcdI2cDemoAddresses  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdI2cDemoBuses  0U
#define _PCD_VALUE_PcdI2cDemoBuses  (VOID *)_gPcd_FixedAtBuild_PcdI2cDemoBuses
extern const UINT8 _gPcd_FixedAtBuild_PcdI2cDemoBuses[1];
#define _PCD_GET_MODE_PTR_PcdI2cDemoBuses  (VOID *)_gPcd_FixedAtBuild_PcdI2cDemoBuses
#define _PCD_SIZE_PcdI2cDemoBuses 1
#define _PCD_GET_MODE_SIZE_PcdI2cDemoBuses  _PCD_SIZE_PcdI2cDemoBuses 
//#define _PCD_SET_MODE_PTR_PcdI2cDemoBuses  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
I2cDemoInitialise (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
