## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = SM7475
  PLATFORM_GUID                  = 273ee000-ac94-42b2-ab45-8dcf7e92a937
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/SM7475Pkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = SM7475Pkg/SM7475.fdf
  USE_PHYSICAL_TIMER             = 0
  USE_DISPLAYDXE                 = 0
  AB_SLOT_SUPPORT                = 0

!include SM7475Pkg/Devices/$(TARGET_DEVICE)/$(TARGET_DEVICE).dsc.inc
!include QcomPkg/Qcom.dsc.inc

[PcdsFixedAtBuild.common]
  gArmTokenSpaceGuid.PcdArmArchTimerFreqInHz|19200000
  gArmTokenSpaceGuid.PcdArmArchTimerSecIntrNum|29
  gArmTokenSpaceGuid.PcdArmArchTimerIntrNum|30
  gArmTokenSpaceGuid.PcdGicDistributorBase|0x17100000
  gArmTokenSpaceGuid.PcdGicRedistributorsBase|0x17180000
#  gQcomTokenSpaceGuid.PcdMipiFrameBufferAddress|0xB8000000 

  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultOemRevision|0x00007450
  gEmbeddedTokenSpaceGuid.PcdInterruptBaseAddress|0x17180000

  gArmPlatformTokenSpaceGuid.PcdCoreCount|8
  gArmPlatformTokenSpaceGuid.PcdClusterCount|3

  gQcomTokenSpaceGuid.PcdSmbiosProcessorModel|"Snapdragon (TM) 7 Gen 2 @ 3.00 GHz"
  gQcomTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"SM7475"

[LibraryClasses.common]
  PowerServicesLib|SM7475Pkg/Library/PowerServicesLib/PowerServicesLib.inf
  PlatformPeiLib|SM7475Pkg/PlatformPei/PlatformPeiLib.inf
  PlatformPrePiLib|SM7475Pkg/Library/PlatformPrePiLib/PlatformPrePiLib.inf
  RFSProtectionLib|SM7475Pkg/Library/RFSProtectionLib/RFSProtectionLib.inf
  AcpiPlatformUpdateLib|SM7475Pkg/Library/AcpiPlatformUpdateLib/AcpiPlatformUpdateLib.inf
  MsPlatformDevicesLib|SM7475Pkg/Library/MsPlatformDevicesLib/MsPlatformDevicesLib.inf
  ConsoleMsgLib|SM7475Pkg/Library/ConsoleMsgLib/ConsoleMsgLib.inf

[Components.common]
  SM7475Pkg/Drivers/SmBiosTableDxe/SmBiosTableDxe.inf
