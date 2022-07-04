/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_e3984c9a_45eb_11ec_9726_f42a7dcb925d
#define _AUTOGENH_e3984c9a_45eb_11ec_9726_f42a7dcb925d

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;
extern GUID gRockchipTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdArmPrimaryCore  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCore;
#define _PCD_GET_MODE_32_PcdArmPrimaryCore  _gPcd_FixedAtBuild_PcdArmPrimaryCore
//#define _PCD_SET_MODE_32_PcdArmPrimaryCore  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmPrimaryCore 0
#define _PCD_SIZE_PcdArmPrimaryCore 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCore _PCD_SIZE_PcdArmPrimaryCore
#define _PCD_TOKEN_PcdArmPrimaryCoreMask  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask;
#define _PCD_GET_MODE_32_PcdArmPrimaryCoreMask  _gPcd_FixedAtBuild_PcdArmPrimaryCoreMask
//#define _PCD_SET_MODE_32_PcdArmPrimaryCoreMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmPrimaryCoreMask 0xF03
#define _PCD_SIZE_PcdArmPrimaryCoreMask 4
#define _PCD_GET_MODE_SIZE_PcdArmPrimaryCoreMask _PCD_SIZE_PcdArmPrimaryCoreMask
#define _PCD_TOKEN_PcdSystemMemoryBase  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_FixedAtBuild_PcdSystemMemoryBase
//#define _PCD_SET_MODE_64_PcdSystemMemoryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemoryBase 0x00000000
#define _PCD_SIZE_PcdSystemMemoryBase 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase _PCD_SIZE_PcdSystemMemoryBase
#define _PCD_TOKEN_PcdSystemMemorySize  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_FixedAtBuild_PcdSystemMemorySize
//#define _PCD_SET_MODE_64_PcdSystemMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemorySize 0x40000000
#define _PCD_SIZE_PcdSystemMemorySize 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize _PCD_SIZE_PcdSystemMemorySize
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
