/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_45fabe58_71ee_11ec_bebb_001e67b12b1b
#define _AUTOGENH_45fabe58_71ee_11ec_bebb_001e67b12b1b

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gRockchipTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPcieRootPortDbiBaseAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPcieRootPortDbiBaseAddress;
#define _PCD_GET_MODE_64_PcdPcieRootPortDbiBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortDbiBaseAddress
//#define _PCD_SET_MODE_64_PcdPcieRootPortDbiBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortDbiBaseAddress 0xf5000000
#define _PCD_SIZE_PcdPcieRootPortDbiBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortDbiBaseAddress _PCD_SIZE_PcdPcieRootPortDbiBaseAddress
#define _PCD_TOKEN_PcdPcieRootPortCfgBaseAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdPcieRootPortCfgBaseAddress;
#define _PCD_GET_MODE_64_PcdPcieRootPortCfgBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortCfgBaseAddress
//#define _PCD_SET_MODE_64_PcdPcieRootPortCfgBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortCfgBaseAddress 0xf0000000
#define _PCD_SIZE_PcdPcieRootPortCfgBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortCfgBaseAddress _PCD_SIZE_PcdPcieRootPortCfgBaseAddress
#define _PCD_TOKEN_PcdPcieRootPortMemSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPcieRootPortMemSize;
#define _PCD_GET_MODE_32_PcdPcieRootPortMemSize  _gPcd_FixedAtBuild_PcdPcieRootPortMemSize
//#define _PCD_SET_MODE_32_PcdPcieRootPortMemSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortMemSize 0xe00000
#define _PCD_SIZE_PcdPcieRootPortMemSize 4
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortMemSize _PCD_SIZE_PcdPcieRootPortMemSize
#define _PCD_TOKEN_PcdPcieRootPortMemBaseAddress  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPcieRootPortMemBaseAddress;
#define _PCD_GET_MODE_32_PcdPcieRootPortMemBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortMemBaseAddress
//#define _PCD_SET_MODE_32_PcdPcieRootPortMemBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortMemBaseAddress 0xf0200000
#define _PCD_SIZE_PcdPcieRootPortMemBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortMemBaseAddress _PCD_SIZE_PcdPcieRootPortMemBaseAddress
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
#define _PCD_TOKEN_PcdPcieRootPortIoSize  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPcieRootPortIoSize;
#define _PCD_GET_MODE_32_PcdPcieRootPortIoSize  _gPcd_FixedAtBuild_PcdPcieRootPortIoSize
//#define _PCD_SET_MODE_32_PcdPcieRootPortIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortIoSize 0x100000
#define _PCD_SIZE_PcdPcieRootPortIoSize 4
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortIoSize _PCD_SIZE_PcdPcieRootPortIoSize
#define _PCD_TOKEN_PcdPcieRootPortIoBaseAddress  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdPcieRootPortIoBaseAddress;
#define _PCD_GET_MODE_32_PcdPcieRootPortIoBaseAddress  _gPcd_FixedAtBuild_PcdPcieRootPortIoBaseAddress
//#define _PCD_SET_MODE_32_PcdPcieRootPortIoBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPcieRootPortIoBaseAddress 0xf0100000
#define _PCD_SIZE_PcdPcieRootPortIoBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdPcieRootPortIoBaseAddress _PCD_SIZE_PcdPcieRootPortIoBaseAddress


#ifdef __cplusplus
}
#endif

#endif
