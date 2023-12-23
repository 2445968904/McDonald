// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CSVFunctionLib.generated.h"

/**
 * 
 */
UCLASS()
class CSVFUNLIBMODULE_API UCSVFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArray(FString SaveDirectory, FString Filename, TArray<FString>SaveText, bool AllowOverWriting);

};
