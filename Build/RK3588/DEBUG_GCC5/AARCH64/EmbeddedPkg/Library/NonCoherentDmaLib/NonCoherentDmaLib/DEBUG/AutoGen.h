/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_43ad4920_db15_4e24_9889_2db568431fbd
#define _AUTOGENH_43ad4920_db15_4e24_9889_2db568431fbd

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEmbeddedTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiCpuArchProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdDmaDeviceOffset  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdDmaDeviceOffset;
#define _PCD_GET_MODE_64_PcdDmaDeviceOffset  _gPcd_FixedAtBuild_PcdDmaDeviceOffset
//#define _PCD_SET_MODE_64_PcdDmaDeviceOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDmaDeviceOffset 0x0
#define _PCD_SIZE_PcdDmaDeviceOffset 8
#define _PCD_GET_MODE_SIZE_PcdDmaDeviceOffset _PCD_SIZE_PcdDmaDeviceOffset
#define _PCD_TOKEN_PcdDmaDeviceLimit  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdDmaDeviceLimit;
#define _PCD_GET_MODE_64_PcdDmaDeviceLimit  _gPcd_FixedAtBuild_PcdDmaDeviceLimit
//#define _PCD_SET_MODE_64_PcdDmaDeviceLimit  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDmaDeviceLimit 0xFFFFFFFFFFFFFFFF
#define _PCD_SIZE_PcdDmaDeviceLimit 8
#define _PCD_GET_MODE_SIZE_PcdDmaDeviceLimit _PCD_SIZE_PcdDmaDeviceLimit

EFI_STATUS
EFIAPI
NonCoherentDmaLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
