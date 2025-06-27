#pragma once

#include "CoreMinimal.h"
#include "XID2DevicePortStruct.generated.h"

USTRUCT(BlueprintType)
struct FXID2DevicePort
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString PortName;

    UPROPERTY(BlueprintReadOnly)
    int32 PortNumber = -1;

    UPROPERTY(BlueprintReadOnly)
    int32 NumberOfLines = -1;

    UPROPERTY(BlueprintReadOnly)
    TArray<int32> KeyMap;
};
