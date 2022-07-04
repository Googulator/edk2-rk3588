/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_c15412fa_3177_11ec_95b4_f42a7dcb925d
#define _AUTOGENH_c15412fa_3177_11ec_95b4_f42a7dcb925d

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiMdeModulePkgTokenSpaceGuid;
extern GUID gRockchipTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdSerialBaudRate  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdSerialBaudRate;
#define _PCD_GET_MODE_32_PcdSerialBaudRate  _gPcd_FixedAtBuild_PcdSerialBaudRate
//#define _PCD_SET_MODE_32_PcdSerialBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSerialBaudRate 115200
#define _PCD_SIZE_PcdSerialBaudRate 4
#define _PCD_GET_MODE_SIZE_PcdSerialBaudRate _PCD_SIZE_PcdSerialBaudRate
#define _PCD_TOKEN_UartClkInHz  0U
extern const UINT32 _gPcd_FixedAtBuild_UartClkInHz;
#define _PCD_GET_MODE_32_UartClkInHz  _gPcd_FixedAtBuild_UartClkInHz
//#define _PCD_SET_MODE_32_UartClkInHz  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_UartClkInHz 24000000
#define _PCD_SIZE_UartClkInHz 4
#define _PCD_GET_MODE_SIZE_UartClkInHz _PCD_SIZE_UartClkInHz


#ifdef __cplusplus
}
#endif

#endif
