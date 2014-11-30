// Fill out your copyright notice in the Description page of Project Settings.

#include "FunWithVR.h"
#include "CreateNewObject.h"


UCreateNewObject::UCreateNewObject(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}

UObject* UCreateNewObject::NewObjectFromBlueprint(UObject* WorldContextObject, TSubclassOf<UObject> UC)
{
    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject);
    UObject* tempObject = StaticConstructObject(UC);

    return tempObject;
}
