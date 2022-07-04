/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_5178fa86_2fec_11ec_95b4_f42a7dcb925d
#define _AUTOGENH_5178fa86_2fec_11ec_95b4_f42a7dcb925d

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
#define _PCD_TOKEN_PcdSdhciDxeBaseAddress  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdSdhciDxeBaseAddress;
#define _PCD_GET_MODE_32_PcdSdhciDxeBaseAddress  _gPcd_FixedAtBuild_PcdSdhciDxeBaseAddress
//#define _PCD_SET_MODE_32_PcdSdhciDxeBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSdhciDxeBaseAddress 0xfe2e0000
#define _PCD_SIZE_PcdSdhciDxeBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdSdhciDxeBaseAddress _PCD_SIZE_PcdSdhciDxeBaseAddress
#define _PCD_TOKEN_PcdI2cBusCount  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdI2cBusCount;
#define _PCD_GET_MODE_32_PcdI2cBusCount  _gPcd_FixedAtBuild_PcdI2cBusCount
//#define _PCD_SET_MODE_32_PcdI2cBusCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdI2cBusCount 1
#define _PCD_SIZE_PcdI2cBusCount 4
#define _PCD_GET_MODE_SIZE_PcdI2cBusCount _PCD_SIZE_PcdI2cBusCount


#ifdef __cplusplus
}
#endif

#endif
