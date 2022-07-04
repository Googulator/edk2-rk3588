/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_967dc52a_7cfa_11ec_b45f_f42a7dcb925d
#define _AUTOGENH_967dc52a_7cfa_11ec_b45f_f42a7dcb925d

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
#define _PCD_TOKEN_PcdLcdDdrFrameBufferSize  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdLcdDdrFrameBufferSize;
#define _PCD_GET_MODE_64_PcdLcdDdrFrameBufferSize  _gPcd_FixedAtBuild_PcdLcdDdrFrameBufferSize
//#define _PCD_SET_MODE_64_PcdLcdDdrFrameBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdLcdDdrFrameBufferSize 0x10000000
#define _PCD_SIZE_PcdLcdDdrFrameBufferSize 8
#define _PCD_GET_MODE_SIZE_PcdLcdDdrFrameBufferSize _PCD_SIZE_PcdLcdDdrFrameBufferSize
#define _PCD_TOKEN_PcdLcdDdrFrameBufferBase  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdLcdDdrFrameBufferBase;
#define _PCD_GET_MODE_64_PcdLcdDdrFrameBufferBase  _gPcd_FixedAtBuild_PcdLcdDdrFrameBufferBase
//#define _PCD_SET_MODE_64_PcdLcdDdrFrameBufferBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdLcdDdrFrameBufferBase 0x40000000
#define _PCD_SIZE_PcdLcdDdrFrameBufferBase 8
#define _PCD_GET_MODE_SIZE_PcdLcdDdrFrameBufferBase _PCD_SIZE_PcdLcdDdrFrameBufferBase


#ifdef __cplusplus
}
#endif

#endif
