#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "XID2Types.h"
#include "XID2DeviceScannerSubsystem.generated.h"

class UXID2DeviceWrapper;
class UXID2DeviceConfigWrapper;

UCLASS()
class XID2_API UXID2DeviceScannerSubsystem : public UEngineSubsystem
{
    GENERATED_BODY()
public:
    // UEngineSubsystem overrides
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    void CloseAllConnections();

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    void OpenAllConnections();

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    void DropEveryConnection();

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    void CheckConnectionsDropDeadOnes();

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    int32 DetectXIDDevices();

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    int32 GetDeviceCount() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    UXID2DeviceWrapper* GetDeviceAtIndex(int32 Index) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    UXID2DeviceWrapper* GetDeviceOfGivenProductID(EXidProductID ProductID) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    int32 GetDevconfigCount() const;

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    UXID2DeviceConfigWrapper* GetDevconfigAtIndex(int32 Index) const;

    UFUNCTION(BlueprintCallable, Category="XID2|Scanner")
    UXID2DeviceConfigWrapper* GetConfigForGivenDevice(int32 DeviceID, int32 ModelID, int32 MajorFirmwareVer) const;
};
