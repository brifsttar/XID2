#include "XID2DeviceConfigWrapper.h"
#include "DeviceConfig.h"

void UXID2DeviceConfigWrapper::SetNativeConfig(std::shared_ptr<const Cedrus::DeviceConfig> InConfig)
{
    NativeConfig = InConfig;
}

FString UXID2DeviceConfigWrapper::GetDeviceName() const
{
    return NativeConfig ? FString(NativeConfig->GetDeviceName().c_str()) : FString();
}

int32 UXID2DeviceConfigWrapper::GetProductID() const
{
    return NativeConfig ? NativeConfig->GetProductID() : -1;
}

int32 UXID2DeviceConfigWrapper::GetModelID() const
{
    return NativeConfig ? NativeConfig->GetModelID() : -1;
}

int32 UXID2DeviceConfigWrapper::GetMajorVersion() const
{
    return NativeConfig ? NativeConfig->GetMajorVersion() : -1;
}

int32 UXID2DeviceConfigWrapper::GetNumberOfOutputLines() const
{
    return NativeConfig ? NativeConfig->GetNumberOfOutputLines() : 0;
}

bool UXID2DeviceConfigWrapper::DoesConfigMatchDevice(int32 DeviceID, int32 ModelID, int32 MajorFirmwareVer) const
{
    return NativeConfig ? NativeConfig->DoesConfigMatchDevice(DeviceID, ModelID, MajorFirmwareVer) : false;
}

bool UXID2DeviceConfigWrapper::IsLumina() const
{
    return NativeConfig ? NativeConfig->IsLumina() : false;
}

bool UXID2DeviceConfigWrapper::IsLuminaLP400() const
{
    return NativeConfig ? NativeConfig->IsLuminaLP400() : false;
}

bool UXID2DeviceConfigWrapper::IsLumina3G() const
{
    return NativeConfig ? NativeConfig->IsLumina3G() : false;
}

bool UXID2DeviceConfigWrapper::IsSV1() const
{
    return NativeConfig ? NativeConfig->IsSV1() : false;
}

bool UXID2DeviceConfigWrapper::IsRB() const
{
    return NativeConfig ? NativeConfig->IsRB() : false;
}

bool UXID2DeviceConfigWrapper::IsRBx30() const
{
    return NativeConfig ? NativeConfig->IsRBx30() : false;
}

bool UXID2DeviceConfigWrapper::IsRBx40() const
{
    return NativeConfig ? NativeConfig->IsRBx40() : false;
}

bool UXID2DeviceConfigWrapper::IsRiponda() const
{
    return NativeConfig ? NativeConfig->IsRiponda() : false;
}

bool UXID2DeviceConfigWrapper::IsMPod() const
{
    return NativeConfig ? NativeConfig->IsMPod() : false;
}

bool UXID2DeviceConfigWrapper::IsCPod() const
{
    return NativeConfig ? NativeConfig->IsCPod() : false;
}

bool UXID2DeviceConfigWrapper::IsPod() const
{
    return NativeConfig ? NativeConfig->IsPod() : false;
}

bool UXID2DeviceConfigWrapper::IsStimTracker() const
{
    return NativeConfig ? NativeConfig->IsStimTracker() : false;
}

bool UXID2DeviceConfigWrapper::IsStimTracker1() const
{
    return NativeConfig ? NativeConfig->IsStimTracker1() : false;
}

bool UXID2DeviceConfigWrapper::IsStimTracker2() const
{
    return NativeConfig ? NativeConfig->IsStimTracker2() : false;
}

bool UXID2DeviceConfigWrapper::IsStimTracker2Duo() const
{
    return NativeConfig ? NativeConfig->IsStimTracker2Duo() : false;
}

bool UXID2DeviceConfigWrapper::IsStimTracker2Quad() const
{
    return NativeConfig ? NativeConfig->IsStimTracker2Quad() : false;
}

bool UXID2DeviceConfigWrapper::IsStimTracker2WithMpod4() const
{
    return NativeConfig ? NativeConfig->IsStimTracker2WithMpod4() : false;
}

bool UXID2DeviceConfigWrapper::IsStimTracker2StimTrigger() const
{
    return NativeConfig ? NativeConfig->IsStimTracker2StimTrigger() : false;
}

bool UXID2DeviceConfigWrapper::IsXID1() const
{
    return NativeConfig ? NativeConfig->IsXID1() : false;
}

bool UXID2DeviceConfigWrapper::IsXID2() const
{
    return NativeConfig ? NativeConfig->IsXID2() : false;
}

bool UXID2DeviceConfigWrapper::IsXID1InputDevice() const
{
    return NativeConfig ? NativeConfig->IsXID1InputDevice() : false;
}

bool UXID2DeviceConfigWrapper::IsXID2InputDevice() const
{
    return NativeConfig ? NativeConfig->IsXID2InputDevice() : false;
}

bool UXID2DeviceConfigWrapper::IsInputDevice() const
{
    return NativeConfig ? NativeConfig->IsInputDevice() : false;
}

bool UXID2DeviceConfigWrapper::IsCPodWithInput() const
{
    return NativeConfig ? NativeConfig->IsCPodWithInput() : false;
}

bool UXID2DeviceConfigWrapper::ModelIDMatters() const
{
    return NativeConfig ? NativeConfig->ModelIDMatters() : false;
}

FXID2DevicePort UXID2DeviceConfigWrapper::GetPortByNumber(int32 PortNum, bool& bFound) const
{
    FXID2DevicePort Out;
    bFound = false;
    if (NativeConfig)
    {
        const Cedrus::DevicePort* Port = NativeConfig->GetPortPtrByNumber(PortNum);
        if (Port)
        {
            Out.PortName = FString(Port->portName.c_str());
            Out.PortNumber = Port->portNumber;
            Out.NumberOfLines = Port->numberOfLines;
            for (int v : Port->keyMap)
                Out.KeyMap.Add(v);
            bFound = true;
        }
    }
    return Out;
}

TArray<FXID2DevicePort> UXID2DeviceConfigWrapper::GetAllPorts() const
{
    TArray<FXID2DevicePort> Result;
    if (NativeConfig)
    {
        const std::map<unsigned int, Cedrus::DevicePort>* Ports = NativeConfig->GetMapOfPorts();
        if (Ports)
        {
            for (const auto& Pair : *Ports)
            {
                const Cedrus::DevicePort& Port = Pair.second;
                FXID2DevicePort UEPort;
                UEPort.PortName = FString(Port.portName.c_str());
                UEPort.PortNumber = Port.portNumber;
                UEPort.NumberOfLines = Port.numberOfLines;
                for (int v : Port.keyMap)
                    UEPort.KeyMap.Add(v);
                Result.Add(UEPort);
            }
        }
    }
    return Result;
}
