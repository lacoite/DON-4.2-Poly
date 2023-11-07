// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

class UAssetImportTask;
class UFactory;

/**
 * 
 */
UCLASS()
class DONTOUNREAL_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category= "My Stuff")
		static FString text(FString Name);

	UFUNCTION(BlueprintCallable, Category = "Import Assets")
		static UAssetImportTask* CreateImportTask(FString SourcePath, FString DestinationPath, bool& bOutSuccess, FString& OutInfoMessage);

	UFUNCTION(BlueprintCallable, Category = "Import Assets")
		static UObject* ProcessImportTask(UAssetImportTask* ImportTask, bool& bOutSuccess, FString& OutInfoMessage);
	
	UFUNCTION(BlueprintCallable, Category = "Import Assets")
		static UObject* ImportAsset(FString SourcePath, FString DestinationPath, bool& bOutSuccess, FString& OutInfoMessage);
};
