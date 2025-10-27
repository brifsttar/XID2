#include "XID2DeviceScannerSubsystem.h"
#include "XIDDeviceScanner.h"
#include "XID2DeviceWrapper.h"
#include "XID2DeviceConfigWrapper.h"
#include "XIDDevice.h"
#include "DeviceConfig.h"

void UXID2DeviceScannerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    // Optional: perform any startup logic here
}

void UXID2DeviceScannerSubsystem::Deinitialize()
{
    // Optional: perform any shutdown logic here
}

void UXID2DeviceScannerSubsystem::CloseAllConnections()
{
    Cedrus::XIDDeviceScanner::GetDeviceScanner().CloseAllConnections();
}

void UXID2DeviceScannerSubsystem::OpenAllConnections()
{
    Cedrus::XIDDeviceScanner::GetDeviceScanner().OpenAllConnections();
}

void UXID2DeviceScannerSubsystem::DropEveryConnection()
{
    Cedrus::XIDDeviceScanner::GetDeviceScanner().DropEveryConnection();
}

void UXID2DeviceScannerSubsystem::CheckConnectionsDropDeadOnes()
{
    Cedrus::XIDDeviceScanner::GetDeviceScanner().CheckConnectionsDropDeadOnes();
}

int32 UXID2DeviceScannerSubsystem::DetectXIDDevices()
{
    return Cedrus::XIDDeviceScanner::GetDeviceScanner().DetectXIDDevices();
}

int32 UXID2DeviceScannerSubsystem::GetDeviceCount() const
{
    return Cedrus::XIDDeviceScanner::GetDeviceScanner().DeviceCount();
}

UXID2DeviceWrapper* UXID2DeviceScannerSubsystem::GetDeviceAtIndex(int32 Index) const
{
    auto& Scanner = Cedrus::XIDDeviceScanner::GetDeviceScanner();
    auto DevicePtr = Scanner.DeviceConnectionAtIndex(Index);
    if (!DevicePtr)
        return nullptr;

    UXID2DeviceWrapper* Wrapper = NewObject<UXID2DeviceWrapper>();
    Wrapper->SetNativeDevice(DevicePtr);
    return Wrapper;
}

UXID2DeviceWrapper* UXID2DeviceScannerSubsystem::GetDeviceOfGivenProductID(EXidProductID ProductID) const
{
    auto& Scanner = Cedrus::XIDDeviceScanner::GetDeviceScanner();
    auto DevicePtr = Scanner.GetDeviceOfGivenProductID(static_cast<Cedrus::XidProductID>(ProductID));
    if (!DevicePtr)
        return nullptr;

    UXID2DeviceWrapper* Wrapper = NewObject<UXID2DeviceWrapper>();
    Wrapper->SetNativeDevice(DevicePtr);
    return Wrapper;
}

int32 UXID2DeviceScannerSubsystem::GetDevconfigCount() const
{
    return Cedrus::XIDDeviceScanner::GetDeviceScanner().DevconfigCount();
}

UXID2DeviceConfigWrapper* UXID2DeviceScannerSubsystem::GetDevconfigAtIndex(int32 Index) const
{
    auto& Scanner = Cedrus::XIDDeviceScanner::GetDeviceScanner();
    auto ConfigPtr = Scanner.DevconfigAtIndex(Index);
    if (!ConfigPtr)
        return nullptr;

    UXID2DeviceConfigWrapper* Wrapper = NewObject<UXID2DeviceConfigWrapper>();
    Wrapper->SetNativeConfig(ConfigPtr);
    return Wrapper;
}

UXID2DeviceConfigWrapper* UXID2DeviceScannerSubsystem::GetConfigForGivenDevice(int32 DeviceID, int32 ModelID, int32 MajorFirmwareVer) const
{
    auto& Scanner = Cedrus::XIDDeviceScanner::GetDeviceScanner();
    auto ConfigPtr = Scanner.GetConfigForGivenDevice(DeviceID, ModelID, MajorFirmwareVer);
    if (!ConfigPtr)
        return nullptr;

    UXID2DeviceConfigWrapper* Wrapper = NewObject<UXID2DeviceConfigWrapper>();
    Wrapper->SetNativeConfig(ConfigPtr);
    return Wrapper;
}
