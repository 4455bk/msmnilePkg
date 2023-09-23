# INF QcomPkg/XBLCore/XBLCore.inf

#FILE FREEFORM = DDE58710-41CD-4306-DBFB-3FA90BB1D2DD {
#    SECTION UI = "uefiplat.cfg"
#    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/uefiplat.cfg
#}

INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/AdapterInformationDxe/AdapterInformationDxe.inf
INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/OSConfigDxe/OSConfigDxe.inf
INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxe.inf
INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
#INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
#INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/PmicDxe/PmicDxeWp.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
INF SurfaceDuoFamilyPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf

#INF MdeModulePkg/Core/Dxe/DxeMain.inf
#INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
#INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
#INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
#INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
#INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
#INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/RscRtDxe.inf
#INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/SCHandlerRtDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
#INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
#INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
#INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
#INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
#INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
#INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
##INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
#INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/FontDxe/FontDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
#INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
#INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
#INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
#INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
#INF FatPkg/EnhancedFatDxe/Fat.inf
#INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
#INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
#INF QcomPkg/Drivers/UFSDxe/UFSDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
#INF QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
#INF QcomPkg/Drivers/HashDxe/HashDxe.inf
#INF QcomPkg/Drivers/CipherDxe/CipherDxe.inf
#INF QcomPkg/Drivers/RNGDxe/RngDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/QcomBds/QcomBds.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf

# Patched Binaries
INF QcomPkg/PatchedBinaries/HALIOMMUDxe.inf
INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
#INF Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/PatchedBinaries/UsbConfigDxe.inf
#INF HoyaPkg/Device/$(TARGET_DEVICE)/PatchedBinaries/UsbConfigDxe.inf
INF HoyaPkg/Device/$(TARGET_DEVICE)/PatchedBinaries/ButtonsDxe.inf

# DXE without depex
FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
    SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/DiskIoDxe/DiskIoDxe.efi
    SECTION UI = "DiskIoDxe"
}

FILE DRIVER = 1fa1f39e-feff-4aae-bd7b-38a070a3b609 {
    SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/PartitionDxe/PartitionDxe.efi
    SECTION UI = "PartitionDxe"
}

FILE DRIVER = f09ad92e-4e91-490f-ab99-e69939b840b2 {
        SECTION UI = "LimitsDxe"
        SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/LimitsDxe/LimitsDxe.efi
}

FILE DRIVER = 3adf8dda-1850-44c5-8c63-bb991849bc6f {
        SECTION UI = "HashDxe"
        SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/HashDxe/HashDxe.efi
}
#
#FILE DRIVER = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde {
#        SECTION UI = "CipherDxe"
#        SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/CipherDxe/CipherDxe.efi
#}

FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
        SECTION UI = "RngDxe"
        SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/RNGDxe/RngDxe.efi
}

FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d {
    SECTION PE32 = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.efi
    SECTION UI = "GraphicsConsoleDxe"
}

FILE DRIVER = 32C71E68-83A8-46ED-AED1-094E71B12057 {
    SECTION PE32 = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SecRSADxe/SecRSADxe.efi
    SECTION UI = "SecRSADxe"
}

FILE DRIVER = C2F9A4F5-F7B4-43E7-BA99-5EA804CC103A {
    SECTION PE32 = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
    SECTION UI = "ASN1X509Dxe"
}

FILE DRIVER = B7F50E91-A759-412C-ADE4-DCD03E7F7C28 {
    SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/XhciDxe/XhciDxe.efi
    SECTION UI = "XhciDxe"
}

FILE DRIVER = 240612B7-A063-11D4-9A3A-0090273FC14D {
    SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.efi
    SECTION UI = "UsbBusDxe"
}

#FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
#    SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.efi
#    SECTION UI = "UsbKbDxe"
#}

FILE DRIVER = 9FB4B4A7-42C0-4BCD-8540-9BCC6711F83E {
    SECTION PE32 = Hoya/BOOT.XF.2.2-00101-SDM845WZB-1/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.efi
    SECTION UI = "UsbMassStorageDxe"
}

# Raw Files

FILE FREEFORM = A91D838E-A5FA-4138-825D-455E2303079E {
    SECTION UI = "BDS_Menu.cfg"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BDS_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030794 {
    SECTION UI = "logo1.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/logo1.bmp
}


FILE FREEFORM = 3E5584ED-05D4-4267-9048-0D47F76F4248 {
    SECTION UI = "battery_symbol_Soc10.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Soc10.bmp
}


FILE FREEFORM = 4753E815-DDD8-402D-BF69-9B8C4EB7573E {
    SECTION UI = "battery_symbol_NoBattery.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_NoBattery.bmp
}


FILE FREEFORM = 03DED53E-BECD-428F-9F79-5ABA64C58445 {
    SECTION UI = "battery_symbol_Nocharger.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_Nocharger.bmp
}


FILE FREEFORM = 8B86CD38-C772-4FCF-85AA-345B2B3C1AB4 {
    SECTION UI = "battery_symbol_LowBatteryCharging.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_LowBatteryCharging.bmp
}


FILE FREEFORM = 3FD97907-93F1-4349-AF3C-3B68B0A5E626 {
    SECTION UI = "battery_symbol_LowBattery.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_LowBattery.bmp
}


FILE FREEFORM = E2EA5A4F-98BD-4203-AB49-399505DDFB7D {
    SECTION UI = "tsens_thermal_symbol.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/tsens_thermal_symbol.bmp
}


FILE FREEFORM = C72FB1A9-5527-4E13-BAC4-F671D0330145 {
    SECTION UI = "tsens_thermal_err_symbol.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/tsens_thermal_err_symbol.bmp
}


FILE FREEFORM = B0F8D1BE-5353-4812-B1F6-07E7768204CC {
    SECTION UI = "battery_symbol_DebugBoot.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_DebugBoot.bmp
}


FILE FREEFORM = F9E8F683-E065-4E09-B4F9-0230D7CECD08 {
    SECTION UI = "battery_symbol_DebugStay.bmp"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/battery_symbol_DebugStay.bmp
}


FILE FREEFORM = A1E235DE-E825-4591-9623-C43175811826 {
    SECTION UI = "SecParti.cfg"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/SecParti.cfg
}


FILE FREEFORM = 45FE4B7C-150C-45DA-A021-4BEB2048EC6F {
    SECTION UI = "QcomChargerCfg.cfg"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/QcomChargerCfg.cfg
}


FILE FREEFORM = F780C779-DD7C-47CD-BD1A-5EB414C51704 {
    SECTION UI = "BATTERY.PROVISION"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BATTERY.PROVISION
}


FILE FREEFORM = 1B7A7BD2-E660-4555-9274-F982BDA93A3C {
    SECTION UI = "BATTERY_JUDY_LN.PROVISION"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BATTERY_JUDY_LN.PROVISION
}


FILE FREEFORM = 9D9736C7-F498-487B-9C13-24402A525D3A {
    SECTION UI = "BATTERY_JUDY_P.PROVISION"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BATTERY_JUDY_P.PROVISION
}


FILE FREEFORM = 613A099D-74AB-4610-A8FB-22F09FD2EEC1 {
    SECTION UI = "BATTERY_JUDY_PN.PROVISION"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BATTERY_JUDY_PN.PROVISION
}


FILE FREEFORM = 80B3733D-0CA9-45A3-B69B-C3B7C36CD535 {
    SECTION UI = "BATTERY_STYLE3LM.PROVISION"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BATTERY_STYLE3LM.PROVISION
}


FILE FREEFORM = DF68C3EA-B1BF-4BA5-BF8C-24BABD3B242F {
    SECTION UI = "BATTERY_CAYMANLM.PROVISION"
    SECTION RAW = HoyaPkg/Device/$(TARGET_DEVICE)/Binaries/RawFiles/BATTERY_CAYMANLM.PROVISION
}
