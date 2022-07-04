/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ed3b8739_6fa7_4cb1_8aeb_2496f8fcaefa
#define _AUTOGENH_ed3b8739_6fa7_4cb1_8aeb_2496f8fcaefa

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiAcpiTableGuid;
extern GUID gFdtTableGuid;
extern GUID gEmbeddedTokenSpaceGuid;

// Protocols
extern GUID gAndroidBootImgProtocolGuid;
extern GUID gEfiLoadedImageProtocolGuid;
extern GUID gEfiLoadFile2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdAndroidBootLoadFile2  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdAndroidBootLoadFile2;
#define _PCD_GET_MODE_BOOL_PcdAndroidBootLoadFile2  _gPcd_FixedAtBuild_PcdAndroidBootLoadFile2
//#define _PCD_SET_MODE_BOOL_PcdAndroidBootLoadFile2  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


#ifdef __cplusplus
}
#endif

#endif
