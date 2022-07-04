/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f6c64348_45ec_11ec_9726_f42a7dcb925d
#define _AUTOGENH_f6c64348_45ec_11ec_9726_f42a7dcb925d

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xf6c64348, 0x45ec, 0x11ec, {0x97, 0x26, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xd080df36, 0x45e7, 0x11ec, {0x97, 0x26, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}

// Guids
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gRK3588TokenSpaceGuid;
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
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEdkiiPerformanceMeasurementProtocolGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid;
extern EFI_GUID gEfiDiskInfoAhciInterfaceGuid;
extern EFI_GUID gEfiDiskInfoIdeInterfaceGuid;
extern EFI_GUID gEfiDiskInfoScsiInterfaceGuid;
extern EFI_GUID gEfiDiskInfoSdMmcInterfaceGuid;

// Protocols
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEmbeddedGpioProtocolGuid;
extern EFI_GUID gPlatformBootManagerProtocolGuid;
extern EFI_GUID gPlatformVirtualKeyboardProtocolGuid;
extern EFI_GUID gAndroidBootImgProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiUnicodeCollation2ProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiBootLogoProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiNvmExpressPassThruProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gEfiDriverHealthProtocolGuid;
extern EFI_GUID gEfiRamDiskProtocolGuid;
extern EFI_GUID gEfiDeferredImageLoadProtocolGuid;
extern EFI_GUID gEdkiiPlatformBootManagerProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAndroidBootDevicePath  0U
#define _PCD_VALUE_PcdAndroidBootDevicePath  _gPcd_FixedAtBuild_PcdAndroidBootDevicePath
extern const UINT16 _gPcd_FixedAtBuild_PcdAndroidBootDevicePath[26];
#define _PCD_GET_MODE_PTR_PcdAndroidBootDevicePath  _gPcd_FixedAtBuild_PcdAndroidBootDevicePath
#define _PCD_SIZE_PcdAndroidBootDevicePath 52
#define _PCD_GET_MODE_SIZE_PcdAndroidBootDevicePath  _PCD_SIZE_PcdAndroidBootDevicePath 
//#define _PCD_SET_MODE_PTR_PcdAndroidBootDevicePath  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAndroidBootFile  0U
#define _PCD_VALUE_PcdAndroidBootFile  (VOID *)_gPcd_FixedAtBuild_PcdAndroidBootFile
extern const UINT8 _gPcd_FixedAtBuild_PcdAndroidBootFile[16];
#define _PCD_GET_MODE_PTR_PcdAndroidBootFile  (VOID *)_gPcd_FixedAtBuild_PcdAndroidBootFile
#define _PCD_SIZE_PcdAndroidBootFile 16
#define _PCD_GET_MODE_SIZE_PcdAndroidBootFile  _PCD_SIZE_PcdAndroidBootFile 
//#define _PCD_SET_MODE_PTR_PcdAndroidBootFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdAndroidFastbootFile  0U
#define _PCD_VALUE_PcdAndroidFastbootFile  (VOID *)_gPcd_FixedAtBuild_PcdAndroidFastbootFile
extern const UINT8 _gPcd_FixedAtBuild_PcdAndroidFastbootFile[16];
#define _PCD_GET_MODE_PTR_PcdAndroidFastbootFile  (VOID *)_gPcd_FixedAtBuild_PcdAndroidFastbootFile
#define _PCD_SIZE_PcdAndroidFastbootFile 16
#define _PCD_GET_MODE_SIZE_PcdAndroidFastbootFile  _PCD_SIZE_PcdAndroidFastbootFile 
//#define _PCD_SET_MODE_PTR_PcdAndroidFastbootFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSdBootDevicePath  0U
#define _PCD_VALUE_PcdSdBootDevicePath  _gPcd_FixedAtBuild_PcdSdBootDevicePath
extern const UINT16 _gPcd_FixedAtBuild_PcdSdBootDevicePath[71];
#define _PCD_GET_MODE_PTR_PcdSdBootDevicePath  _gPcd_FixedAtBuild_PcdSdBootDevicePath
#define _PCD_SIZE_PcdSdBootDevicePath 142
#define _PCD_GET_MODE_SIZE_PcdSdBootDevicePath  _PCD_SIZE_PcdSdBootDevicePath 
//#define _PCD_SET_MODE_PTR_PcdSdBootDevicePath  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_AcpiEnable  0U
#define _PCD_SIZE_AcpiEnable 1
#define _PCD_GET_MODE_SIZE_AcpiEnable  _PCD_SIZE_AcpiEnable 
#define _PCD_VALUE_AcpiEnable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_AcpiEnable;
#define _PCD_GET_MODE_BOOL_AcpiEnable  _gPcd_FixedAtBuild_AcpiEnable
//#define _PCD_SET_MODE_BOOL_AcpiEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
RK3588EntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
