#pragma once

#include "CoreMinimal.h"
#include "WFCDataTypes.generated.h"

UENUM(BlueprintType)
enum class EWFCConnectType : uint8
{

	Wall, Door, Hallway

};

USTRUCT(BlueprintType)
struct FWFCRoomDefinition
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EWFCConnectType North = EWFCConnectType::Wall;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EWFCConnectType East = EWFCConnectType::Wall;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EWFCConnectType South = EWFCConnectType::Wall;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EWFCConnectType West = EWFCConnectType::Wall;
};