// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

#include "Editor/UnrealEd/Public/AssetImportTask.h"
#include "AssetToolsModule.h"

FString UMyBlueprintFunctionLibrary::GetAssetReference(FString ID) {
	//This function returns a string to reference the objects imported in the code
	FString AssetPath = FString::Printf( TEXT("/Script/Engine.StaticMesh'/Game/Assets/models/%s/%s.%s'"), *ID, *ID, *ID);
	return FString(AssetPath);
}