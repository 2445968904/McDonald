// Fill out your copyright notice in the Description page of Project Settings.


#include "CSVFunctionLib.h"






#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UCSVFunctionLib::SaveArray(FString SaveDirectory, FString Filename, TArray<FString>SaveText, bool AllowOverWriting = false)
{
	// Set complete file path.
	SaveDirectory += "\\";
	SaveDirectory += Filename;

	if (!AllowOverWriting)
	{
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
		{
			return false;
		}
	}

	FString FinalString = "";
	for (FString& Each : SaveText)
	{
		FinalString += Each;
		FinalString += LINE_TERMINATOR;
	}

	return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory, FFileHelper::EEncodingOptions::ForceUTF8);

}

