/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f063a96a_71fb_11ec_bebb_001e67b12b1b
#define _AUTOGENH_f063a96a_71fb_11ec_bebb_001e67b12b1b

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gRockchipTokenSpaceGuid;
extern EFI_GUID gArmTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiCpuIo2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPcieRootPortIoBaseAddress  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPcieRootPortIoBaseAddress;
#define _PCD_GET_MODE_32_PcdPcieRootPortIoBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortIoBaseAddress
//#define _PCD_SET_MODE_32_PcdPcieRootPortIoBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortIoBaseAddress 0xf0100000
#define _PCD_SIZE_PcdPcieRootPortIoBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortIoBaseAddress _PCD_SIZE_PcdPcieRootPortIoBaseAddress
#define _PCD_TOKEN_PcdPcieRootPortIoSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPcieRootPortIoSize;
#define _PCD_GET_MODE_32_PcdPcieRootPortIoSize  _gPcd_FixedAtBuild_PcdPcieRootPortIoSize
//#define _PCD_SET_MODE_32_PcdPcieRootPortIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortIoSize 0x100000
#define _PCD_SIZE_PcdPcieRootPortIoSize 4
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortIoSize _PCD_SIZE_PcdPcieRootPortIoSize
#define _PCD_TOKEN_PcdPcieRootPortMemBaseAddress  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPcieRootPortMemBaseAddress;
#define _PCD_GET_MODE_32_PcdPcieRootPortMemBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortMemBaseAddress
//#define _PCD_SET_MODE_32_PcdPcieRootPortMemBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortMemBaseAddress 0xf0200000
#define _PCD_SIZE_PcdPcieRootPortMemBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortMemBaseAddress _PCD_SIZE_PcdPcieRootPortMemBaseAddress
#define _PCD_TOKEN_PcdPcieRootPortMemSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPcieRootPortMemSize;
#define _PCD_GET_MODE_32_PcdPcieRootPortMemSize  _gPcd_FixedAtBuild_PcdPcieRootPortMemSize
//#define _PCD_SET_MODE_32_PcdPcieRootPortMemSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortMemSize 0xe00000
#define _PCD_SIZE_PcdPcieRootPortMemSize 4
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortMemSize _PCD_SIZE_PcdPcieRootPortMemSize
#define _PCD_TOKEN_PcdPcieRootPortMemBaseAddress64  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPcieRootPortMemBaseAddress64;
#define _PCD_GET_MODE_64_PcdPcieRootPortMemBaseAddress64  _gPcd_FixedAtBuild_PcdPcieRootPortMemBaseAddress64
//#define _PCD_SET_MODE_64_PcdPcieRootPortMemBaseAddress64  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortMemBaseAddress64 0x900000000
#define _PCD_SIZE_PcdPcieRootPortMemBaseAddress64 8
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortMemBaseAddress64 _PCD_SIZE_PcdPcieRootPortMemBaseAddress64
#define _PCD_TOKEN_PcdPcieRootPortMemSize64  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPcieRootPortMemSize64;
#define _PCD_GET_MODE_64_PcdPcieRootPortMemSize64  _gPcd_FixedAtBuild_PcdPcieRootPortMemSize64
//#define _PCD_SET_MODE_64_PcdPcieRootPortMemSize64  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortMemSize64 0x40000000
#define _PCD_SIZE_PcdPcieRootPortMemSize64 8
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortMemSize64 _PCD_SIZE_PcdPcieRootPortMemSize64
#define _PCD_TOKEN_PcdPciIoBase  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciIoBase;
#define _PCD_GET_MODE_64_PcdPciIoBase  _gPcd_FixedAtBuild_PcdPciIoBase
//#define _PCD_SET_MODE_64_PcdPciIoBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciIoBase 0x0
#define _PCD_SIZE_PcdPciIoBase 8
#define _PCD_GET_MODE_SIZE_PcdPciIoBase _PCD_SIZE_PcdPciIoBase
#define _PCD_TOKEN_PcdPciIoSize  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPciIoSize;
#define _PCD_GET_MODE_64_PcdPciIoSize  _gPcd_FixedAtBuild_PcdPciIoSize
//#define _PCD_SET_MODE_64_PcdPciIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPciIoSize 0x0
#define _PCD_SIZE_PcdPciIoSize 8
#define _PCD_GET_MODE_SIZE_PcdPciIoSize _PCD_SIZE_PcdPciIoSize


#ifdef __cplusplus
}
#endif

#endif
