/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_b90498c8_728a_11ec_ac42_f42a7dcb925d
#define _AUTOGENH_b90498c8_728a_11ec_ac42_f42a7dcb925d

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
#define _PCD_TOKEN_SpiRK806BaseAddr  0U
extern const UINT32 _gPcd_FixedAtBuild_SpiRK806BaseAddr;
#define _PCD_GET_MODE_32_SpiRK806BaseAddr  _gPcd_FixedAtBuild_SpiRK806BaseAddr
//#define _PCD_SET_MODE_32_SpiRK806BaseAddr  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_SpiRK806BaseAddr 0xFEB20000
#define _PCD_SIZE_SpiRK806BaseAddr 4
#define _PCD_GET_MODE_SIZE_SpiRK806BaseAddr _PCD_SIZE_SpiRK806BaseAddr


#ifdef __cplusplus
}
#endif

#endif
