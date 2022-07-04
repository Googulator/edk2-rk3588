/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_3e401783_cc94_4fcd_97bc_bd35ac369d2f
#define _AUTOGENH_3e401783_cc94_4fcd_97bc_bd35ac369d2f

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x3e401783, 0xcc94, 0x4fcd, {0x97, 0xbc, 0xbd, 0x35, 0xac, 0x36, 0x9d, 0x2f}}
#define EDKII_DSC_PLATFORM_GUID \
  {0xd080df36, 0x45e7, 0x11ec, {0x97, 0x26, 0xf4, 0x2a, 0x7d, 0xcb, 0x92, 0x5d}}

// Guids
extern EFI_GUID gArmMpCoreInfoGuid;
extern EFI_GUID gEfiFirmwarePerformanceGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gRockchipTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gLzmaCustomDecompressGuid;

// Protocols
extern EFI_GUID gPeCoffLoaderProtocolGuid;

// PPIs
extern EFI_GUID gArmMpCoreInfoPpiGuid;
extern EFI_GUID gEfiPeiMasterBootModePpiGuid;
extern EFI_GUID gEfiPeiBootInRecoveryModePpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVFPEnabled  0U
#define _PCD_SIZE_PcdVFPEnabled 4
#define _PCD_GET_MODE_SIZE_PcdVFPEnabled  _PCD_SIZE_PcdVFPEnabled 
#define _PCD_VALUE_PcdVFPEnabled  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVFPEnabled;
#define _PCD_GET_MODE_32_PcdVFPEnabled  _gPcd_FixedAtBuild_PcdVFPEnabled
//#define _PCD_SET_MODE_32_PcdVFPEnabled  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFdBaseAddress  0U
#define _PCD_SIZE_PcdFdBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress  _PCD_SIZE_PcdFdBaseAddress 
#define _PCD_VALUE_PcdFdBaseAddress  0x00000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_FixedAtBuild_PcdFdBaseAddress
//#define _PCD_SET_MODE_64_PcdFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFdSize  0U
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize  _PCD_SIZE_PcdFdSize 
#define _PCD_VALUE_PcdFdSize  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFvBaseAddress  0U
#define _PCD_SIZE_PcdFvBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress  _PCD_SIZE_PcdFvBaseAddress 
#define _PCD_VALUE_PcdFvBaseAddress  0x00200000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_FixedAtBuild_PcdFvBaseAddress
//#define _PCD_SET_MODE_64_PcdFvBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFvSize  0U
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize  _PCD_SIZE_PcdFvSize 
#define _PCD_VALUE_PcdFvSize  0x000F0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCorePrimaryStackSize  0U
#define _PCD_SIZE_PcdCPUCorePrimaryStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCPUCorePrimaryStackSize  _PCD_SIZE_PcdCPUCorePrimaryStackSize 
#define _PCD_VALUE_PcdCPUCorePrimaryStackSize  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize;
#define _PCD_GET_MODE_32_PcdCPUCorePrimaryStackSize  _gPcd_FixedAtBuild_PcdCPUCorePrimaryStackSize
//#define _PCD_SET_MODE_32_PcdCPUCorePrimaryStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCPUCoreSecondaryStackSize  0U
#define _PCD_SIZE_PcdCPUCoreSecondaryStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCPUCoreSecondaryStackSize  _PCD_SIZE_PcdCPUCoreSecondaryStackSize 
#define _PCD_VALUE_PcdCPUCoreSecondaryStackSize  0x1000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize;
#define _PCD_GET_MODE_32_PcdCPUCoreSecondaryStackSize  _gPcd_FixedAtBuild_PcdCPUCoreSecondaryStackSize
//#define _PCD_SET_MODE_32_PcdCPUCoreSecondaryStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemoryUefiRegionSize  0U
#define _PCD_SIZE_PcdSystemMemoryUefiRegionSize 4
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryUefiRegionSize  _PCD_SIZE_PcdSystemMemoryUefiRegionSize 
#define _PCD_VALUE_PcdSystemMemoryUefiRegionSize  0x08000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize;
#define _PCD_GET_MODE_32_PcdSystemMemoryUefiRegionSize  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize
//#define _PCD_SET_MODE_32_PcdSystemMemoryUefiRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCoreCount  0U
#define _PCD_SIZE_PcdCoreCount 4
#define _PCD_GET_MODE_SIZE_PcdCoreCount  _PCD_SIZE_PcdCoreCount 
#define _PCD_VALUE_PcdCoreCount  4U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCoreCount;
#define _PCD_GET_MODE_32_PcdCoreCount  _gPcd_FixedAtBuild_PcdCoreCount
//#define _PCD_SET_MODE_32_PcdCoreCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPrePiCpuIoSize  0U
#define _PCD_SIZE_PcdPrePiCpuIoSize 1
#define _PCD_GET_MODE_SIZE_PcdPrePiCpuIoSize  _PCD_SIZE_PcdPrePiCpuIoSize 
#define _PCD_VALUE_PcdPrePiCpuIoSize  44U
extern const  UINT8  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize;
#define _PCD_GET_MODE_8_PcdPrePiCpuIoSize  _gPcd_FixedAtBuild_PcdPrePiCpuIoSize
//#define _PCD_SET_MODE_8_PcdPrePiCpuIoSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  0U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory  _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  0U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS  _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  0U
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType  _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  0U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData  50U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  0U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode  20U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesCode  0U
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesCode  _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesCode  400U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesData  0U
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesData  _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesData  20000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderCode  0U
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderCode  _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderCode  20U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderData  0U
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderData  _PCD_SIZE_PcdMemoryTypeEfiLoaderData 
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderData  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPrePiProduceMemoryTypeInformationHob  0U
#define _PCD_SIZE_PcdPrePiProduceMemoryTypeInformationHob 1
#define _PCD_GET_MODE_SIZE_PcdPrePiProduceMemoryTypeInformationHob  _PCD_SIZE_PcdPrePiProduceMemoryTypeInformationHob 
#define _PCD_VALUE_PcdPrePiProduceMemoryTypeInformationHob  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob;
#define _PCD_GET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob
//#define _PCD_SET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSendSgiToBringUpSecondaryCores  0U
#define _PCD_SIZE_PcdSendSgiToBringUpSecondaryCores 1
#define _PCD_GET_MODE_SIZE_PcdSendSgiToBringUpSecondaryCores  _PCD_SIZE_PcdSendSgiToBringUpSecondaryCores 
#define _PCD_VALUE_PcdSendSgiToBringUpSecondaryCores  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores;
#define _PCD_GET_MODE_BOOL_PcdSendSgiToBringUpSecondaryCores  _gPcd_FixedAtBuild_PcdSendSgiToBringUpSecondaryCores
//#define _PCD_SET_MODE_BOOL_PcdSendSgiToBringUpSecondaryCores  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareVersionString  0U
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[6];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
#define _PCD_SIZE_PcdFirmwareVersionString 12
#define _PCD_GET_MODE_SIZE_PcdFirmwareVersionString  _PCD_SIZE_PcdFirmwareVersionString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemoryBase  0U
#define _PCD_SIZE_PcdSystemMemoryBase 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase  _PCD_SIZE_PcdSystemMemoryBase 
#define _PCD_VALUE_PcdSystemMemoryBase  0x00000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_FixedAtBuild_PcdSystemMemoryBase
//#define _PCD_SET_MODE_64_PcdSystemMemoryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSystemMemorySize  0U
#define _PCD_SIZE_PcdSystemMemorySize 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize  _PCD_SIZE_PcdSystemMemorySize 
#define _PCD_VALUE_PcdSystemMemorySize  0x40000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdSystemMemorySize;
#define _PCD_GET_MODE_64_PcdSystemMemorySize  _gPcd_FixedAtBuild_PcdSystemMemorySize
//#define _PCD_SET_MODE_64_PcdSystemMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
