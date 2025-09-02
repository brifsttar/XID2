#pragma once

#include "CoreMinimal.h"
#include <memory>
#include "XID2DevicePortStruct.h"
#include "XID2DeviceConfigWrapper.generated.h"

namespace Cedrus {
	class DeviceConfig;
}

UCLASS(BlueprintType)
class XID2_API UXID2DeviceConfigWrapper : public UObject {
    GENERATED_BODY()
public:
    void SetNativeConfig(std::shared_ptr<const class Cedrus::DeviceConfig> InConfig);

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    FString GetDeviceName() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    int32 GetProductID() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    int32 GetModelID() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    int32 GetMajorVersion() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    int32 GetNumberOfOutputLines() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool DoesConfigMatchDevice(int32 DeviceID, int32 ModelID, int32 MajorFirmwareVer) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsLumina() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsLuminaLP400() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsLumina3G() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsSV1() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsRB() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsRBx30() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsRBx40() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsRiponda() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsMPod() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsCPod() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsPod() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsStimTracker() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsStimTracker1() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsStimTracker2() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsStimTracker2Duo() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsStimTracker2Quad() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsStimTracker2WithMpod4() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsStimTracker2StimTrigger() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsXID1() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsXID2() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsXID1InputDevice() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsXID2InputDevice() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsInputDevice() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool IsCPodWithInput() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    bool ModelIDMatters() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    FXID2DevicePort GetPortByNumber(int32 PortNum, bool& bFound) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Config")
    TArray<FXID2DevicePort> GetAllPorts() const;

protected:
	std::shared_ptr<const class Cedrus::DeviceConfig> NativeConfig;
};
