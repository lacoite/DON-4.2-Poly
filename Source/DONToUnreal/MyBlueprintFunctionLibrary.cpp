// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

#include "Editor/UnrealEd/Public/AssetImportTask.h"
#include "AssetToolsModule.h"

FString UMyBlueprintFunctionLibrary::text(FString Name) {
	return FString(Name);
}

UAssetImportTask* UMyBlueprintFunctionLibrary::CreateImportTask(FString SourcePath, FString DestinationPath, bool& bOutSuccess, FString& OutInfoMessage)
{
	UAssetImportTask* RetTask = NewObject<UAssetImportTask>();

	RetTask->Filename = SourcePath;
	RetTask->DestinationPath = FPaths::GetPath(DestinationPath);
	RetTask->DestinationName = FPaths::GetCleanFilename(DestinationPath);

	RetTask->bSave = false;
	RetTask->bAutomated = true;
	RetTask->bAsync = false;
	RetTask->bReplaceExisting = false;
	RetTask->bReplaceExistingSettings = false;


	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Create Import Task Succeeded"));
	return RetTask;
}

UObject* UMyBlueprintFunctionLibrary::ProcessImportTask(UAssetImportTask* ImportTask, bool& bOutSuccess, FString& OutInfoMessage)
{
	if (ImportTask == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Process Import Task Failed"));
		return nullptr;
	}

	FAssetToolsModule* AssetTools = FModuleManager::LoadModulePtr<FAssetToolsModule>("AssetTools");

	if (AssetTools == nullptr)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Process Import Task Failed - AssetTools module invalid."));
		return nullptr;
	}

	AssetTools->Get().ImportAssetTasks({ ImportTask });

	if (ImportTask->GetObjects().Num() == 0)
	{
		bOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Process Import Task Failed - Nothing was imported."));
		return nullptr;
	}

	UObject* ImportedAsset = StaticLoadClass(UObject::StaticClass(), nullptr, *FPaths::Combine(ImportTask->DestinationPath, ImportTask->DestinationName));

	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Process Import Task Succeeded"));
	return ImportedAsset;
}

UObject* UMyBlueprintFunctionLibrary::ImportAsset(FString SourcePath, FString DestinationPath, bool& bOutSuccess, FString& OutInfoMessage)
{
	UAssetImportTask* Task = CreateImportTask(SourcePath, DestinationPath, bOutSuccess, OutInfoMessage);
	if (!bOutSuccess)
		return nullptr;

	UObject* RetAsset = ProcessImportTask(Task, bOutSuccess, OutInfoMessage);
	if (!bOutSuccess)
		return nullptr;

	bOutSuccess = true;
	OutInfoMessage = FString::Printf(TEXT("Import Asset Succeeded"));
	return RetAsset;
}