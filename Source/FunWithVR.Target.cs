// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class FunWithVRTarget : TargetRules
{
    public FunWithVRTarget(TargetInfo Target)
    {
        Type = TargetType.Game;
        AdditionalPlugins.AddRange(new string[] { "KinectV2" });
    }

    //
    // TargetRules interface.
    //

    public override void SetupBinaries(
        TargetInfo Target,
        ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
        ref List<string> OutExtraModuleNames
        )
    {
        OutExtraModuleNames.AddRange(new string[] { "FunWithVR" });
    }
}
