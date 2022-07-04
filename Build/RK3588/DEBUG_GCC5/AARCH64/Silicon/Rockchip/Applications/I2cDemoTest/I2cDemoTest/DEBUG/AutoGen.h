/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_adf4b61c_2ca3_4e1a_9597_99282f5a4aa2
#define _AUTOGENH_adf4b61c_2ca3_4e1a_9597_99282f5a4aa2

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gShellI2cDemoHiiGuid;

// Protocols
extern EFI_GUID gRockchipI2cDemoProtocolGuid;
extern EFI_GUID gEfiI2cMasterProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

EFI_STATUS
EFIAPI
ShellI2cDemoTestLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
ShellI2cDemoTestLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "UefiShellI2cDemoLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
