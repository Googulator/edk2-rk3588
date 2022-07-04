/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_9335a854_4b88_11ec_a8ee_f42a7dcb925d
#define _AUTOGENH_9335a854_4b88_11ec_a8ee_f42a7dcb925d

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x9335a854, 0x4b88, 0x11ec, {0xa8, 0xee, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xd080df36, 0x45e7, 0x11ec, {0x97, 0x26, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}

// Guids
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gRockchipTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
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
extern EFI_GUID gArmTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiI2cMasterProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiI2cEnumerateProtocolGuid;
extern EFI_GUID gEfiI2cBusConfigurationManagementProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
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

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdI2cSlaveAddresses  0U
#define _PCD_VALUE_PcdI2cSlaveAddresses  (VOID *)_gPcd_FixedAtBuild_PcdI2cSlaveAddresses
extern const UINT8 _gPcd_FixedAtBuild_PcdI2cSlaveAddresses[1];
#define _PCD_GET_MODE_PTR_PcdI2cSlaveAddresses  (VOID *)_gPcd_FixedAtBuild_PcdI2cSlaveAddresses
#define _PCD_SIZE_PcdI2cSlaveAddresses 1
#define _PCD_GET_MODE_SIZE_PcdI2cSlaveAddresses  _PCD_SIZE_PcdI2cSlaveAddresses 
//#define _PCD_SET_MODE_PTR_PcdI2cSlaveAddresses  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdI2cSlaveBuses  0U
#define _PCD_VALUE_PcdI2cSlaveBuses  (VOID *)_gPcd_FixedAtBuild_PcdI2cSlaveBuses
extern const UINT8 _gPcd_FixedAtBuild_PcdI2cSlaveBuses[1];
#define _PCD_GET_MODE_PTR_PcdI2cSlaveBuses  (VOID *)_gPcd_FixedAtBuild_PcdI2cSlaveBuses
#define _PCD_SIZE_PcdI2cSlaveBuses 1
#define _PCD_GET_MODE_SIZE_PcdI2cSlaveBuses  _PCD_SIZE_PcdI2cSlaveBuses 
//#define _PCD_SET_MODE_PTR_PcdI2cSlaveBuses  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdI2cControllersEnabled  0U
#define _PCD_VALUE_PcdI2cControllersEnabled  (VOID *)_gPcd_FixedAtBuild_PcdI2cControllersEnabled
extern const UINT8 _gPcd_FixedAtBuild_PcdI2cControllersEnabled[1];
#define _PCD_GET_MODE_PTR_PcdI2cControllersEnabled  (VOID *)_gPcd_FixedAtBuild_PcdI2cControllersEnabled
#define _PCD_SIZE_PcdI2cControllersEnabled 1
#define _PCD_GET_MODE_SIZE_PcdI2cControllersEnabled  _PCD_SIZE_PcdI2cControllersEnabled 
//#define _PCD_SET_MODE_PTR_PcdI2cControllersEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdI2cClockFrequency  0U
#define _PCD_SIZE_PcdI2cClockFrequency 4
#define _PCD_GET_MODE_SIZE_PcdI2cClockFrequency  _PCD_SIZE_PcdI2cClockFrequency 
#define _PCD_VALUE_PcdI2cClockFrequency  198000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdI2cClockFrequency;
#define _PCD_GET_MODE_32_PcdI2cClockFrequency  _gPcd_FixedAtBuild_PcdI2cClockFrequency
//#define _PCD_SET_MODE_32_PcdI2cClockFrequency  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdI2cBaudRate  0U
#define _PCD_SIZE_PcdI2cBaudRate 4
#define _PCD_GET_MODE_SIZE_PcdI2cBaudRate  _PCD_SIZE_PcdI2cBaudRate 
#define _PCD_VALUE_PcdI2cBaudRate  100000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdI2cBaudRate;
#define _PCD_GET_MODE_32_PcdI2cBaudRate  _gPcd_FixedAtBuild_PcdI2cBaudRate
//#define _PCD_SET_MODE_32_PcdI2cBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdI2cBusCount  0U
#define _PCD_SIZE_PcdI2cBusCount 4
#define _PCD_GET_MODE_SIZE_PcdI2cBusCount  _PCD_SIZE_PcdI2cBusCount 
#define _PCD_VALUE_PcdI2cBusCount  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdI2cBusCount;
#define _PCD_GET_MODE_32_PcdI2cBusCount  _gPcd_FixedAtBuild_PcdI2cBusCount
//#define _PCD_SET_MODE_32_PcdI2cBusCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
I2cInitialise (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
