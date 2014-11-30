#pragma once

#include "EdGraph/EdGraphNode.h"
#include "CreateNewObject.generated.h"

UCLASS()
class FUNWITHVR_API UCreateNewObject : public UEdGraphNode
{
    GENERATED_UCLASS_BODY()

    UFUNCTION(BlueprintPure, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Create Object From Blueprint", CompactNodeTitle = "Create", Keywords = "new create blueprint"), Category = Game)
    static UObject* NewObjectFromBlueprint(UObject* WorldContextObject, TSubclassOf<UObject> UC);

};
