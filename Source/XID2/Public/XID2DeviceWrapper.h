#pragma once

#include "CoreMinimal.h"
#include "XID2Types.h"
#include "XID2DeviceWrapper.generated.h"

class UXID2DeviceConfigWrapper;
class UXID2ResponseManagerWrapper;

namespace Cedrus {
	class XIDDevice;
}	

UCLASS(BlueprintType)
class XID2_API UXID2DeviceWrapper : public UObject
{
    GENERATED_BODY()
public:
    void SetNativeDevice(std::shared_ptr<class Cedrus::XIDDevice> InDevice);

    // --- Device Info ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetProductID() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetModelID() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetMajorFirmwareVersion() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetMinorFirmwareVersion() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    FString GetInternalProductName() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    FString GetCombinedInfo() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetOutpostModel() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetHardwareGeneration() const;

    // --- Protocol ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    FString GetProtocol() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetProtocol(uint8 Protocol);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetKBModeProtocol() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetKBModeProtocol(uint8 Mode);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SwitchToKeyboardMode();

    // --- Accessory/Output Logic ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetOutputLogic() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetOutputLogic(uint8 Mode);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetAccessoryConnectorMode() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetAccessoryConnectorMode(uint8 Mode);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetACDebouncingTime() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetACDebouncingTime(uint8 Time);

    // --- Flash/Backup ---
    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetFlashBackupCRC() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void BackupFlashData();

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetTranslationTableCRC() const;

    // --- MPod/Pod ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool IsMpodOutputEnabled() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void EnableMpodOutput(bool bEnable);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint8 GetMpodOutputMode() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetMpodOutputMode(uint8 Mode);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetMpodModel(uint8 MPod) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ConnectToMpod(uint8 MPod, uint8 Action);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint8 GetTranslationTable() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetTranslationTable(uint8 Table);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetMappedSignals(uint32 Line);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void MapSignals(uint32 Line, uint32 Map);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ResetMappedLinesToDefault();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void CommitLineMappingToFlash();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool IsPodLocked() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetPodUnlockCRC() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void LockPod(bool bLock);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint8 GetMpodPulseDuration() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetMpodPulseDuration(uint8 Duration);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int8 GetPodOutputLogic() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetPodOutputLogic(int8 Logic);

    // --- VK/Trigger/Timers ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetVKDropDelay() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetVKDropDelay(uint8 Delay);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ResetBaseTimer();

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 QueryBaseTimer();

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 QueryRtTimer();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ResetRtTimer();

    // --- Baud/Locking/Flash/Settings ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetBaudRate(uint8 Rate);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetBaudRate() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void GetLockingLevel();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetLockingLevel(uint8 Level);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ReprogramFlash();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool GetTriggerDefault() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetTriggerDefault(bool bDefaultOn);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetTriggerDebounceTime() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetTriggerDebounceTime(uint8 Time);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetButtonDebounceTime() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetButtonDebounceTime(uint8 Time);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void RestoreFactoryDefaults();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SaveSettingsToFlash();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool IsOpticalIsolationSwitchOn() const;

    // --- SingleShot/SignalFilter/LED ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    FXID2SingleShotMode GetSingleShotMode(uint8 Selector) const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetSingleShotMode(uint8 Selector, bool bEnable, uint32 Delay);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint8 GetCPodInputMode() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetCPodInputMode(uint8 Mode);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint8 GetCPodInputLines() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    FXID2SignalFilter GetSignalFilter(uint8 Selector) const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetSignalFilter(uint8 Selector, uint32 HoldOn, uint32 HoldOff);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool IsKbAutorepeatOn() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void EnableKbAutorepeat(bool bPause);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool IsRBx40LEDEnabled() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void EnableRBx40LED(bool bEnable);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetRipondaLEDFunction() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetRipondaLEDFunction(uint32 Function);

    // --- Digital/USB Output ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool GetEnableDigitalOutput(uint8 Selector) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetEnableDigitalOutput(uint8 Selector, bool bMode);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool IsOutputPaused() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void PauseAllOutput(bool bPause);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetTimerResetOnOnsetMode(uint8 Selector) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetTimerResetOnOnsetMode(uint8 Selector, uint8 Mode);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool GetEnableUSBOutput(uint8 Selector) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetEnableUSBOutput(uint8 Selector, bool bMode);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetAnalogInputThreshold(uint8 Selector) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetAnalogInputThreshold(uint8 Selector, uint8 Threshold);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 GetMixedInputMode() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetMixedInputMode(uint8 Mode);

    // --- Output Lines/Pulse Table ---
    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetRaisedLines() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetNumberOfLines() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetNumberOfLines(uint32 Lines);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetPulseDuration() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetPulseDuration(uint32 Duration);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetPulseTableBitMask();

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetPulseTableBitMask(uint32 Lines);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ClearPulseTable();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool IsPulseTableRunning() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void RunPulseTable();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void StopPulseTable();

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void AddPulseTableEntry(uint32 Time, uint32 Lines);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ResetOutputLines();

    // --- Voltage/Analog Output ---
    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetVoltageRange(uint32 Minimum, uint32 Maximum);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetMaxVoltageRange() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetVoltageRangeForTesting(uint32 Minimum, uint32 Maximum);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetMaxVoltageRangeForTesting() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetAnalogOutputMode(uint32 Mode);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetAnalogOutputMode() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SetNumberOfAnalogOutputLevels(uint32 NumLevels);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetNumberOfAnalogOutputLevels() const;

    // --- Connection/Config ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 OpenConnection() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    int32 CloseConnection() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool HasLostConnection() const;

    // --- Response Handling ---
    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void PollForResponse();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool HasQueuedResponses() const;

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    uint32 GetNumberOfKeysDown() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    FXID2Response GetNextResponse() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ClearResponseQueue();

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ClearResponsesFromBuffer();

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void RaiseLines(uint32 LinesBitmask, bool bLeaveRemainingLines = false);

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void LowerLines(uint32 LinesBitmask, bool bLeaveRemainingLines = false);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void ClearLines();

    //UFUNCTION(BlueprintCallable, Category="XID2|Device")
    void SendPulse(uint32 Duration, uint32 Lines, uint32 Pulses, uint32 IPI);

    UFUNCTION(BlueprintCallable, Category="XID2|Device")
    bool ArePulsesBeingSent() const;

protected:
	std::shared_ptr<class Cedrus::XIDDevice> NativeDevice;
};
