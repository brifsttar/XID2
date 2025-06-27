#pragma once

#include "CoreMinimal.h"
#include "XID2Types.generated.h"

UENUM(BlueprintType)
enum class EXidProductID : uint8
{
    UNDEFINED   = 0        UMETA(DisplayName = "Undefined"),
    LUMINA      = 48       UMETA(DisplayName = "Lumina"),
    SV1         = 49       UMETA(DisplayName = "SV-1"),
    RB          = 50       UMETA(DisplayName = "RB"),
    MPOD        = 51       UMETA(DisplayName = "m-pod"),
    CPOD        = 52       UMETA(DisplayName = "c-pod"),
    RIPONDA     = 53       UMETA(DisplayName = "Riponda"),
    STIMTRACKER = 83       UMETA(DisplayName = "StimTracker")
};

USTRUCT(BlueprintType)
struct FXID2Response
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 Port = -1;

    UPROPERTY(BlueprintReadOnly)
    int32 Key = -1;

    UPROPERTY(BlueprintReadOnly)
    bool WasPressed = false;

    UPROPERTY(BlueprintReadOnly)
    int32 ReactionTime = -1;
};

USTRUCT(BlueprintType)
struct FXID2SignalFilter
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 HoldOn = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 HoldOff = 0;
};

USTRUCT(BlueprintType)
struct FXID2SingleShotMode
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    bool Enabled = false;

    UPROPERTY(BlueprintReadOnly)
    int32 Delay = 0;
};
