APRIORI DXE {

    # First, install the PCD driver and call DxeInit
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    INF Binaries/note12/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

    # INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    # INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    # Next, install cpu protocol and enable the interrupt controller
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

    # Core Drivers
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
    INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

    INF Binaries/note12/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
    INF Binaries/note12/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
    INF Binaries/note12/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
    INF Binaries/note12/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
    INF Binaries/note12/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf

    INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
    INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

    INF Binaries/note12/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

    INF MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
    INF FatPkg/EnhancedFatDxe/Fat.inf

    INF Binaries/note12/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
    INF Binaries/note12/QcomPkg/Drivers/SamsungDxe/SecEnvDxe/SecEnvDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SamsungDxe/BoardInfoDxe/BoardInfoDxe.inf

    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    INF Binaries/note12/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SamsungDxe/RedriverDxe/RedriverDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SamsungDxe/SubPmicDxe/SubPmicDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

!if $(USE_DISPLAYDXE) == 1
    INF Binaries/note12/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
    INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

    INF Binaries/note12/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/PILDxe/PILDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf

    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
    INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

    INF Binaries/note12/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf

    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
    INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    INF Binaries/note12/QcomPkg/Drivers/FontDxe/FontDxe.inf

    INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

    INF Binaries/note12/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
    INF Binaries/note12/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/XhciDxe/XhciDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/TsensDxe/TsensDxe.inf

!if $(USE_DISPLAYDXE) == 1
    INF Binaries/note12/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

    INF Binaries/note12/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/UCDxe/UCDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/RNGDxe/RngDxe.inf
    INF Binaries/note12/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf

    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf

    INF Binaries/note12/MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
    INF Binaries/note12/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}