#include "XID2DeviceWrapper.h"
#include "XID2Types.h"
#include "XIDDevice.h"

void UXID2DeviceWrapper::SetNativeDevice(std::shared_ptr<Cedrus::XIDDevice> InDevice)
{
    NativeDevice = InDevice;
}

int32 UXID2DeviceWrapper::GetProductID() const
{
    return NativeDevice ? NativeDevice->GetProductID() : -1;
}

int32 UXID2DeviceWrapper::GetModelID() const
{
    return NativeDevice ? NativeDevice->GetModelID() : -1;
}

int32 UXID2DeviceWrapper::GetMajorFirmwareVersion() const
{
    return NativeDevice ? NativeDevice->GetMajorFirmwareVersion() : -1;
}

int32 UXID2DeviceWrapper::GetMinorFirmwareVersion() const
{
    return NativeDevice ? NativeDevice->GetMinorFirmwareVersion() : -1;
}

FString UXID2DeviceWrapper::GetInternalProductName() const
{
    return NativeDevice ? FString(NativeDevice->GetInternalProductName().c_str()) : FString();
}

FString UXID2DeviceWrapper::GetCombinedInfo() const
{
    return NativeDevice ? FString(NativeDevice->GetCombinedInfo().c_str()) : FString();
}

int32 UXID2DeviceWrapper::GetOutpostModel() const
{
    return NativeDevice ? NativeDevice->GetOutpostModel() : -1;
}

int32 UXID2DeviceWrapper::GetHardwareGeneration() const
{
    return NativeDevice ? NativeDevice->GetHardwareGeneration() : -1;
}

FString UXID2DeviceWrapper::GetProtocol() const
{
    return NativeDevice ? FString(NativeDevice->GetProtocol().c_str()) : FString();
}

void UXID2DeviceWrapper::SetProtocol(uint8 Protocol)
{
    if (NativeDevice)
        NativeDevice->SetProtocol(Protocol);
}

uint32 UXID2DeviceWrapper::GetKBModeProtocol() const
{
    return NativeDevice ? NativeDevice->GetKBModeProtocol() : 0;
}

void UXID2DeviceWrapper::SetKBModeProtocol(uint8 Mode)
{
    if (NativeDevice)
        NativeDevice->SetKBModeProtocol(Mode);
}

void UXID2DeviceWrapper::SwitchToKeyboardMode()
{
    if (NativeDevice)
        NativeDevice->SwitchToKeyboardMode();
}

int32 UXID2DeviceWrapper::GetOutputLogic() const
{
    return NativeDevice ? NativeDevice->GetOutputLogic() : -1;
}

void UXID2DeviceWrapper::SetOutputLogic(uint8 Mode)
{
    if (NativeDevice)
        NativeDevice->SetOutputLogic(Mode);
}

int32 UXID2DeviceWrapper::GetAccessoryConnectorMode() const
{
    return NativeDevice ? NativeDevice->GetAccessoryConnectorMode() : -1;
}

void UXID2DeviceWrapper::SetAccessoryConnectorMode(uint8 Mode)
{
    if (NativeDevice)
        NativeDevice->SetAccessoryConnectorMode(Mode);
}

int32 UXID2DeviceWrapper::GetACDebouncingTime() const
{
    return NativeDevice ? NativeDevice->GetACDebouncingTime() : -1;
}

void UXID2DeviceWrapper::SetACDebouncingTime(uint8 Time)
{
    if (NativeDevice)
        NativeDevice->SetACDebouncingTime(Time);
}

uint32 UXID2DeviceWrapper::GetFlashBackupCRC() const
{
    return NativeDevice ? NativeDevice->GetFlashBackupCRC() : 0;
}

void UXID2DeviceWrapper::BackupFlashData()
{
    if (NativeDevice)
        NativeDevice->BackupFlashData();
}

uint32 UXID2DeviceWrapper::GetTranslationTableCRC() const
{
    return NativeDevice ? NativeDevice->GetTranslationTableCRC() : 0;
}

bool UXID2DeviceWrapper::IsMpodOutputEnabled() const
{
    return NativeDevice ? NativeDevice->IsMpodOutputEnabled() : false;
}

void UXID2DeviceWrapper::EnableMpodOutput(bool bEnable)
{
    if (NativeDevice)
        NativeDevice->EnableMpodOutput(bEnable);
}

uint8 UXID2DeviceWrapper::GetMpodOutputMode() const
{
    return NativeDevice ? NativeDevice->GetMpodOutputMode() : 0;
}

void UXID2DeviceWrapper::SetMpodOutputMode(uint8 Mode)
{
    if (NativeDevice)
        NativeDevice->SetMpodOutputMode(Mode);
}

int32 UXID2DeviceWrapper::GetMpodModel(uint8 MPod) const
{
    return NativeDevice ? NativeDevice->GetMpodModel(MPod) : -1;
}

void UXID2DeviceWrapper::ConnectToMpod(uint8 MPod, uint8 Action)
{
    if (NativeDevice)
        NativeDevice->ConnectToMpod(MPod, Action);
}

uint8 UXID2DeviceWrapper::GetTranslationTable() const
{
    return NativeDevice ? NativeDevice->GetTranslationTable() : 0;
}

void UXID2DeviceWrapper::SetTranslationTable(uint8 Table)
{
    if (NativeDevice)
        NativeDevice->SetTranslationTable(Table);
}

uint32 UXID2DeviceWrapper::GetMappedSignals(uint32 Line)
{
    return NativeDevice ? NativeDevice->GetMappedSignals(Line) : 0;
}

void UXID2DeviceWrapper::MapSignals(uint32 Line, uint32 Map)
{
    if (NativeDevice)
        NativeDevice->MapSignals(Line, Map);
}

void UXID2DeviceWrapper::ResetMappedLinesToDefault()
{
    if (NativeDevice)
        NativeDevice->ResetMappedLinesToDefault();
}

void UXID2DeviceWrapper::CommitLineMappingToFlash()
{
    if (NativeDevice)
        NativeDevice->CommitLineMappingToFlash();
}

bool UXID2DeviceWrapper::IsPodLocked() const
{
    return NativeDevice ? NativeDevice->IsPodLocked() : false;
}

uint32 UXID2DeviceWrapper::GetPodUnlockCRC() const
{
    return NativeDevice ? NativeDevice->GetPodUnlockCRC() : 0;
}

void UXID2DeviceWrapper::LockPod(bool bLock)
{
    if (NativeDevice)
        NativeDevice->LockPod(bLock);
}

uint8 UXID2DeviceWrapper::GetMpodPulseDuration() const
{
    return NativeDevice ? NativeDevice->GetMpodPulseDuration() : 0;
}

void UXID2DeviceWrapper::SetMpodPulseDuration(uint8 Duration)
{
    if (NativeDevice)
        NativeDevice->SetMpodPulseDuration(Duration);
}

int8 UXID2DeviceWrapper::GetPodOutputLogic() const
{
    return NativeDevice ? NativeDevice->GetPodOutputLogic() : 0;
}

void UXID2DeviceWrapper::SetPodOutputLogic(int8 Logic)
{
    if (NativeDevice)
        NativeDevice->SetPodOutputLogic(Logic);
}

int32 UXID2DeviceWrapper::GetVKDropDelay() const
{
    return NativeDevice ? NativeDevice->GetVKDropDelay() : -1;
}

void UXID2DeviceWrapper::SetVKDropDelay(uint8 Delay)
{
    if (NativeDevice)
        NativeDevice->SetVKDropDelay(Delay);
}

void UXID2DeviceWrapper::ResetBaseTimer()
{
    if (NativeDevice)
        NativeDevice->ResetBaseTimer();
}

uint32 UXID2DeviceWrapper::QueryBaseTimer()
{
    return NativeDevice ? NativeDevice->QueryBaseTimer() : 0;
}

uint32 UXID2DeviceWrapper::QueryRtTimer()
{
    return NativeDevice ? NativeDevice->QueryRtTimer() : 0;
}

void UXID2DeviceWrapper::ResetRtTimer()
{
    if (NativeDevice)
        NativeDevice->ResetRtTimer();
}

void UXID2DeviceWrapper::SetBaudRate(uint8 Rate)
{
    if (NativeDevice)
        NativeDevice->SetBaudRate(Rate);
}

int32 UXID2DeviceWrapper::GetBaudRate() const
{
    return NativeDevice ? NativeDevice->GetBaudRate() : -1;
}

void UXID2DeviceWrapper::GetLockingLevel()
{
    if (NativeDevice)
        NativeDevice->GetLockingLevel();
}

void UXID2DeviceWrapper::SetLockingLevel(uint8 Level)
{
    if (NativeDevice)
        NativeDevice->SetLockingLevel(Level);
}

void UXID2DeviceWrapper::ReprogramFlash()
{
    if (NativeDevice)
        NativeDevice->ReprogramFlash();
}

bool UXID2DeviceWrapper::GetTriggerDefault() const
{
    return NativeDevice ? NativeDevice->GetTriggerDefault() : false;
}

void UXID2DeviceWrapper::SetTriggerDefault(bool bDefaultOn)
{
    if (NativeDevice)
        NativeDevice->SetTriggerDefault(bDefaultOn);
}

int32 UXID2DeviceWrapper::GetTriggerDebounceTime() const
{
    return NativeDevice ? NativeDevice->GetTriggerDebounceTime() : -1;
}

void UXID2DeviceWrapper::SetTriggerDebounceTime(uint8 Time)
{
    if (NativeDevice)
        NativeDevice->SetTriggerDebounceTime(Time);
}

int32 UXID2DeviceWrapper::GetButtonDebounceTime() const
{
    return NativeDevice ? NativeDevice->GetButtonDebounceTime() : -1;
}

void UXID2DeviceWrapper::SetButtonDebounceTime(uint8 Time)
{
    if (NativeDevice)
        NativeDevice->SetButtonDebounceTime(Time);
}

void UXID2DeviceWrapper::RestoreFactoryDefaults()
{
    if (NativeDevice)
        NativeDevice->RestoreFactoryDefaults();
}

void UXID2DeviceWrapper::SaveSettingsToFlash()
{
    if (NativeDevice)
        NativeDevice->SaveSettingsToFlash();
}

bool UXID2DeviceWrapper::IsOpticalIsolationSwitchOn() const
{
    return NativeDevice ? NativeDevice->IsOpticalIsolationSwitchOn() : false;
}

FXID2SingleShotMode UXID2DeviceWrapper::GetSingleShotMode(uint8 Selector) const
{
    FXID2SingleShotMode Out;
    if (NativeDevice)
    {
        Cedrus::SingleShotMode Mode = NativeDevice->GetSingleShotMode(Selector);
        Out.Enabled = Mode.enabled;
        Out.Delay = Mode.delay;
    }
    return Out;
}

void UXID2DeviceWrapper::SetSingleShotMode(uint8 Selector, bool bEnable, uint32 Delay)
{
    if (NativeDevice)
        NativeDevice->SetSingleShotMode(Selector, bEnable, Delay);
}

uint8 UXID2DeviceWrapper::GetCPodInputMode() const
{
    return NativeDevice ? NativeDevice->GetCPodInputMode() : 0;
}

void UXID2DeviceWrapper::SetCPodInputMode(uint8 Mode)
{
    if (NativeDevice)
        NativeDevice->SetCPodInputMode(Mode);
}

uint8 UXID2DeviceWrapper::GetCPodInputLines() const
{
    return NativeDevice ? NativeDevice->GetCPodInputLines() : 0;
}

FXID2SignalFilter UXID2DeviceWrapper::GetSignalFilter(uint8 Selector) const
{
    FXID2SignalFilter Out;
    if (NativeDevice)
    {
        Cedrus::SignalFilter Filter = NativeDevice->GetSignalFilter(Selector);
        Out.HoldOn = Filter.holdOn;
        Out.HoldOff = Filter.holdOff;
    }
    return Out;
}

void UXID2DeviceWrapper::SetSignalFilter(uint8 Selector, uint32 HoldOn, uint32 HoldOff)
{
    if (NativeDevice)
        NativeDevice->SetSignalFilter(Selector, HoldOn, HoldOff);
}

bool UXID2DeviceWrapper::IsKbAutorepeatOn() const
{
    return NativeDevice ? NativeDevice->IsKbAutorepeatOn() : false;
}

void UXID2DeviceWrapper::EnableKbAutorepeat(bool bPause)
{
    if (NativeDevice)
        NativeDevice->EnableKbAutorepeat(bPause);
}

bool UXID2DeviceWrapper::IsRBx40LEDEnabled() const
{
    return NativeDevice ? NativeDevice->IsRBx40LEDEnabled() : false;
}

void UXID2DeviceWrapper::EnableRBx40LED(bool bEnable)
{
    if (NativeDevice)
        NativeDevice->EnableRBx40LED(bEnable);
}

uint32 UXID2DeviceWrapper::GetRipondaLEDFunction() const
{
    return NativeDevice ? NativeDevice->GetRipondaLEDFunction() : 0;
}

void UXID2DeviceWrapper::SetRipondaLEDFunction(uint32 Function)
{
    if (NativeDevice)
        NativeDevice->SetRipondaLEDFunction(Function);
}

bool UXID2DeviceWrapper::GetEnableDigitalOutput(uint8 Selector) const
{
    return NativeDevice ? NativeDevice->GetEnableDigitalOutput(Selector) : false;
}

void UXID2DeviceWrapper::SetEnableDigitalOutput(uint8 Selector, bool bMode)
{
    if (NativeDevice)
        NativeDevice->SetEnableDigitalOutput(Selector, bMode);
}

bool UXID2DeviceWrapper::IsOutputPaused() const
{
    return NativeDevice ? NativeDevice->IsOutputPaused() : false;
}

void UXID2DeviceWrapper::PauseAllOutput(bool bPause)
{
    if (NativeDevice)
        NativeDevice->PauseAllOutput(bPause);
}

int32 UXID2DeviceWrapper::GetTimerResetOnOnsetMode(uint8 Selector) const
{
    return NativeDevice ? NativeDevice->GetTimerResetOnOnsetMode(Selector) : -1;
}

void UXID2DeviceWrapper::SetTimerResetOnOnsetMode(uint8 Selector, uint8 Mode)
{
    if (NativeDevice)
        NativeDevice->SetTimerResetOnOnsetMode(Selector, Mode);
}

bool UXID2DeviceWrapper::GetEnableUSBOutput(uint8 Selector) const
{
    return NativeDevice ? NativeDevice->GetEnableUSBOutput(Selector) : false;
}

void UXID2DeviceWrapper::SetEnableUSBOutput(uint8 Selector, bool bMode)
{
    if (NativeDevice)
        NativeDevice->SetEnableUSBOutput(Selector, bMode);
}

int32 UXID2DeviceWrapper::GetAnalogInputThreshold(uint8 Selector) const
{
    return NativeDevice ? NativeDevice->GetAnalogInputThreshold(Selector) : -1;
}

void UXID2DeviceWrapper::SetAnalogInputThreshold(uint8 Selector, uint8 Threshold)
{
    if (NativeDevice)
        NativeDevice->SetAnalogInputThreshold(Selector, Threshold);
}

int32 UXID2DeviceWrapper::GetMixedInputMode() const
{
    return NativeDevice ? NativeDevice->GetMixedInputMode() : -1;
}

void UXID2DeviceWrapper::SetMixedInputMode(uint8 Mode)
{
    if (NativeDevice)
        NativeDevice->SetMixedInputMode(Mode);
}

uint32 UXID2DeviceWrapper::GetRaisedLines() const
{
    return NativeDevice ? NativeDevice->GetRaisedLines() : 0;
}

uint32 UXID2DeviceWrapper::GetNumberOfLines() const
{
    return NativeDevice ? NativeDevice->GetNumberOfLines() : 0;
}

void UXID2DeviceWrapper::SetNumberOfLines(uint32 Lines)
{
    if (NativeDevice)
        NativeDevice->SetNumberOfLines(Lines);
}

uint32 UXID2DeviceWrapper::GetPulseDuration() const
{
    return NativeDevice ? NativeDevice->GetPulseDuration() : 0;
}

void UXID2DeviceWrapper::SetPulseDuration(int Duration)
{
    if (NativeDevice)
        NativeDevice->SetPulseDuration(uint32(Duration));
}

uint32 UXID2DeviceWrapper::GetPulseTableBitMask()
{
    return NativeDevice ? NativeDevice->GetPulseTableBitMask() : 0;
}

void UXID2DeviceWrapper::SetPulseTableBitMask(uint32 Lines)
{
    if (NativeDevice)
        NativeDevice->SetPulseTableBitMask(Lines);
}

void UXID2DeviceWrapper::ClearPulseTable()
{
    if (NativeDevice)
        NativeDevice->ClearPulseTable();
}

bool UXID2DeviceWrapper::IsPulseTableRunning() const
{
    return NativeDevice ? NativeDevice->IsPulseTableRunning() : false;
}

void UXID2DeviceWrapper::RunPulseTable()
{
    if (NativeDevice)
        NativeDevice->RunPulseTable();
}

void UXID2DeviceWrapper::StopPulseTable()
{
    if (NativeDevice)
        NativeDevice->StopPulseTable();
}

void UXID2DeviceWrapper::AddPulseTableEntry(uint32 Time, uint32 Lines)
{
    if (NativeDevice)
        NativeDevice->AddPulseTableEntry(Time, Lines);
}

void UXID2DeviceWrapper::ResetOutputLines()
{
    if (NativeDevice)
        NativeDevice->ResetOutputLines();
}

void UXID2DeviceWrapper::SetVoltageRange(uint32 Minimum, uint32 Maximum)
{
    if (NativeDevice)
        NativeDevice->SetVoltageRange(Minimum, Maximum);
}

uint32 UXID2DeviceWrapper::GetMaxVoltageRange() const
{
    return NativeDevice ? NativeDevice->GetMaxVoltageRange() : 0;
}

void UXID2DeviceWrapper::SetVoltageRangeForTesting(uint32 Minimum, uint32 Maximum)
{
    if (NativeDevice)
        NativeDevice->SetVoltageRangeForTesting(Minimum, Maximum);
}

uint32 UXID2DeviceWrapper::GetMaxVoltageRangeForTesting() const
{
    return NativeDevice ? NativeDevice->GetMaxVoltageRangeForTesting() : 0;
}

void UXID2DeviceWrapper::SetAnalogOutputMode(uint32 Mode)
{
    if (NativeDevice)
        NativeDevice->SetAnalogOutputMode(Mode);
}

uint32 UXID2DeviceWrapper::GetAnalogOutputMode() const
{
    return NativeDevice ? NativeDevice->GetAnalogOutputMode() : 0;
}

void UXID2DeviceWrapper::SetNumberOfAnalogOutputLevels(uint32 NumLevels)
{
    if (NativeDevice)
        NativeDevice->SetNumberOfAnalogOutputLevels(NumLevels);
}

uint32 UXID2DeviceWrapper::GetNumberOfAnalogOutputLevels() const
{
    return NativeDevice ? NativeDevice->GetNumberOfAnalogOutputLevels() : 0;
}

int32 UXID2DeviceWrapper::OpenConnection() const
{
    return NativeDevice ? NativeDevice->OpenConnection() : -1;
}

int32 UXID2DeviceWrapper::CloseConnection() const
{
    return NativeDevice ? NativeDevice->CloseConnection() : -1;
}

bool UXID2DeviceWrapper::HasLostConnection() const
{
    return NativeDevice ? NativeDevice->HasLostConnection() : false;
}

// --- Response Handling ---
void UXID2DeviceWrapper::PollForResponse()
{
    if (NativeDevice)
        NativeDevice->PollForResponse();
}

bool UXID2DeviceWrapper::HasQueuedResponses() const
{
    return NativeDevice ? NativeDevice->HasQueuedResponses() : false;
}

uint32 UXID2DeviceWrapper::GetNumberOfKeysDown() const
{
    return NativeDevice ? NativeDevice->GetNumberOfKeysDown() : 0;
}

FXID2Response UXID2DeviceWrapper::GetNextResponse() const
{
    FXID2Response Out;
    if (NativeDevice)
    {
        Cedrus::Response R = NativeDevice->GetNextResponse();
        Out.Port = R.port;
        Out.Key = R.key;
        Out.WasPressed = R.wasPressed;
        Out.ReactionTime = R.reactionTime;
    }
    return Out;
}

void UXID2DeviceWrapper::ClearResponseQueue()
{
    if (NativeDevice)
        NativeDevice->ClearResponseQueue();
}

void UXID2DeviceWrapper::ClearResponsesFromBuffer() {
    if (NativeDevice)
        NativeDevice->ClearResponsesFromBuffer();
}

void UXID2DeviceWrapper::RaiseLines(int LinesBitmask, bool bLeaveRemainingLines) {
	if (NativeDevice)
		NativeDevice->RaiseLines(LinesBitmask, bLeaveRemainingLines);
}

void UXID2DeviceWrapper::LowerLines(uint32 LinesBitmask, bool bLeaveRemainingLines) {
	if (NativeDevice)
		NativeDevice->LowerLines(LinesBitmask, bLeaveRemainingLines);
}

void UXID2DeviceWrapper::ClearLines() {
	if (NativeDevice)
		NativeDevice->ClearLines();
}

void UXID2DeviceWrapper::SendPulse(uint32 Duration, uint32 Lines, uint32 Pulses, uint32 IPI) {
	if (NativeDevice)
		NativeDevice->SendPulse(Duration, Lines, Pulses, IPI);
}

bool UXID2DeviceWrapper::ArePulsesBeingSent() const {
	return NativeDevice ? NativeDevice->ArePulsesBeingSent() : false;
}
