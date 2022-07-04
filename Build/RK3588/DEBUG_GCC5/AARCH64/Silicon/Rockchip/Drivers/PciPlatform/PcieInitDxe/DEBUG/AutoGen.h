/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_8EB6E216_BA47_4B30_B68A_2B371F7232A6
#define _AUTOGENH_8EB6E216_BA47_4B30_B68A_2B371F7232A6

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x8EB6E216, 0xBA47, 0x4B30, {0xB6, 0x8A, 0x2B, 0x37, 0x1F, 0x72, 0x32, 0xA6}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xd080df36, 0x45e7, 0x11ec, {0x97, 0x26, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}

// Guids
extern EFI_GUID gArmTokenSpaceGuid;
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

// Protocols
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

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdGicDistributorBase  0U
#define _PCD_SIZE_PcdGicDistributorBase 8
#define _PCD_GET_MODE_SIZE_PcdGicDistributorBase  _PCD_SIZE_PcdGicDistributorBase 
#define _PCD_VALUE_PcdGicDistributorBase  0xfe600000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGicDistributorBase;
#define _PCD_GET_MODE_64_PcdGicDistributorBase  _gPcd_FixedAtBuild_PcdGicDistributorBase
//#define _PCD_SET_MODE_64_PcdGicDistributorBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPcieRootPortApbBaseAddress  0U
#define _PCD_SIZE_PcdPcieRootPortApbBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortApbBaseAddress  _PCD_SIZE_PcdPcieRootPortApbBaseAddress 
#define _PCD_VALUE_PcdPcieRootPortApbBaseAddress  0xfe150000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPcieRootPortApbBaseAddress;
#define _PCD_GET_MODE_64_PcdPcieRootPortApbBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortApbBaseAddress
//#define _PCD_SET_MODE_64_PcdPcieRootPortApbBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPcieRootPortDbiBaseAddress  0U
#define _PCD_SIZE_PcdPcieRootPortDbiBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortDbiBaseAddress  _PCD_SIZE_PcdPcieRootPortDbiBaseAddress 
#define _PCD_VALUE_PcdPcieRootPortDbiBaseAddress  0xf5000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPcieRootPortDbiBaseAddress;
#define _PCD_GET_MODE_64_PcdPcieRootPortDbiBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortDbiBaseAddress
//#define _PCD_SET_MODE_64_PcdPcieRootPortDbiBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPcieRootPortCfgBaseAddress  0U
#define _PCD_SIZE_PcdPcieRootPortCfgBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortCfgBaseAddress  _PCD_SIZE_PcdPcieRootPortCfgBaseAddress 
#define _PCD_VALUE_PcdPcieRootPortCfgBaseAddress  0xf0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPcieRootPortCfgBaseAddress;
#define _PCD_GET_MODE_64_PcdPcieRootPortCfgBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortCfgBaseAddress
//#define _PCD_SET_MODE_64_PcdPcieRootPortCfgBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PcieInitEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
