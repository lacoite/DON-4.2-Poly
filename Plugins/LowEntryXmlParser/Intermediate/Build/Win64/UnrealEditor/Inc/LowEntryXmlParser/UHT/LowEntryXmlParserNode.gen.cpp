// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryXmlParser/Public/Classes/LowEntryXmlParserNode.h"
#include "LowEntryXmlParser/Public/Classes/FLowEntryXmlParserNodeAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryXmlParserNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOWENTRYXMLPARSER_API UClass* Z_Construct_UClass_ULowEntryXmlParserNode();
	LOWENTRYXMLPARSER_API UClass* Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister();
	LOWENTRYXMLPARSER_API UScriptStruct* Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute();
	UPackage* Z_Construct_UPackage__Script_LowEntryXmlParser();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryXmlParserNode::execGetAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAttribute(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryXmlParserNode::execGetAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLowEntryXmlParserNodeAttribute>*)Z_Param__Result=P_THIS->GetAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryXmlParserNode::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryXmlParserNode::execGetTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryXmlParserNode::execFindChildNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryXmlParserNode**)Z_Param__Result=P_THIS->FindChildNode(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryXmlParserNode::execGetFirstChildNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryXmlParserNode**)Z_Param__Result=P_THIS->GetFirstChildNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryXmlParserNode::execGetChildrenNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULowEntryXmlParserNode*>*)Z_Param__Result=P_THIS->GetChildrenNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryXmlParserNode::execGetNextNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryXmlParserNode**)Z_Param__Result=P_THIS->GetNextNode();
		P_NATIVE_END;
	}
	void ULowEntryXmlParserNode::StaticRegisterNativesULowEntryXmlParserNode()
	{
		UClass* Class = ULowEntryXmlParserNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindChildNode", &ULowEntryXmlParserNode::execFindChildNode },
			{ "GetAttribute", &ULowEntryXmlParserNode::execGetAttribute },
			{ "GetAttributes", &ULowEntryXmlParserNode::execGetAttributes },
			{ "GetChildrenNodes", &ULowEntryXmlParserNode::execGetChildrenNodes },
			{ "GetFirstChildNode", &ULowEntryXmlParserNode::execGetFirstChildNode },
			{ "GetNextNode", &ULowEntryXmlParserNode::execGetNextNode },
			{ "GetTag", &ULowEntryXmlParserNode::execGetTag },
			{ "GetValue", &ULowEntryXmlParserNode::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics
	{
		struct LowEntryXmlParserNode_eventFindChildNode_Parms
		{
			FString Tag;
			ULowEntryXmlParserNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventFindChildNode_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventFindChildNode_Parms, ReturnValue), Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Node" },
		{ "Comment", "/**\n\x09* Finds the first child node that contains the specified tag, can return NULL.\n\x09*/" },
		{ "DisplayName", "Find Child Node" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
		{ "ToolTip", "Finds the first child node that contains the specified tag, can return NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserNode, nullptr, "FindChildNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::LowEntryXmlParserNode_eventFindChildNode_Parms), Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics
	{
		struct LowEntryXmlParserNode_eventGetAttribute_Parms
		{
			FString Tag;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventGetAttribute_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventGetAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Node" },
		{ "Comment", "/**\n\x09* Gets an attribute that corresponds with the given tag.\n\x09*/" },
		{ "DisplayName", "Get Attribute" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
		{ "ToolTip", "Gets an attribute that corresponds with the given tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserNode, nullptr, "GetAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::LowEntryXmlParserNode_eventGetAttribute_Parms), Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics
	{
		struct LowEntryXmlParserNode_eventGetAttributes_Parms
		{
			TArray<FLowEntryXmlParserNodeAttribute> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLowEntryXmlParserNodeAttribute, METADATA_PARAMS(nullptr, 0) }; // 714198599
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventGetAttributes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 714198599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Node" },
		{ "Comment", "/**\n\x09* Gets all of the attributes in this node.\n\x09*/" },
		{ "DisplayName", "Get Attributes" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
		{ "ToolTip", "Gets all of the attributes in this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserNode, nullptr, "GetAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::LowEntryXmlParserNode_eventGetAttributes_Parms), Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics
	{
		struct LowEntryXmlParserNode_eventGetChildrenNodes_Parms
		{
			TArray<ULowEntryXmlParserNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventGetChildrenNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Node" },
		{ "Comment", "/**\n\x09* Gets a list of children nodes.\n\x09*/" },
		{ "DisplayName", "Get Children Nodes" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
		{ "ToolTip", "Gets a list of children nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserNode, nullptr, "GetChildrenNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::LowEntryXmlParserNode_eventGetChildrenNodes_Parms), Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics
	{
		struct LowEntryXmlParserNode_eventGetFirstChildNode_Parms
		{
			ULowEntryXmlParserNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventGetFirstChildNode_Parms, ReturnValue), Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Node" },
		{ "Comment", "/**\n\x09* Gets the first child of this node which can be iterated into with GetNextNode, can return NULL.\n\x09*/" },
		{ "DisplayName", "Get First Child Node" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
		{ "ToolTip", "Gets the first child of this node which can be iterated into with GetNextNode, can return NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserNode, nullptr, "GetFirstChildNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::LowEntryXmlParserNode_eventGetFirstChildNode_Parms), Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics
	{
		struct LowEntryXmlParserNode_eventGetNextNode_Parms
		{
			ULowEntryXmlParserNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventGetNextNode_Parms, ReturnValue), Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Node" },
		{ "Comment", "/**\n\x09* Gets the next node in a list of nodes, can return NULL.\n\x09*/" },
		{ "DisplayName", "Get Next Node" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
		{ "ToolTip", "Gets the next node in a list of nodes, can return NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserNode, nullptr, "GetNextNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::LowEntryXmlParserNode_eventGetNextNode_Parms), Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics
	{
		struct LowEntryXmlParserNode_eventGetTag_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventGetTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Node" },
		{ "Comment", "/**\n\x09* Gets the tag of the node.\n\x09*/" },
		{ "DisplayName", "Get Tag" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
		{ "ToolTip", "Gets the tag of the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserNode, nullptr, "GetTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::LowEntryXmlParserNode_eventGetTag_Parms), Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics
	{
		struct LowEntryXmlParserNode_eventGetValue_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LowEntryXmlParserNode_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Xml Parser|Node" },
		{ "Comment", "/**\n\x09* Gets the value of the node.\n\x09*/" },
		{ "DisplayName", "Get Value" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
		{ "ToolTip", "Gets the value of the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryXmlParserNode, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::LowEntryXmlParserNode_eventGetValue_Parms), Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULowEntryXmlParserNode);
	UClass* Z_Construct_UClass_ULowEntryXmlParserNode_NoRegister()
	{
		return ULowEntryXmlParserNode::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryXmlParserNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryXmlParserNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryXmlParser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryXmlParserNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryXmlParserNode_FindChildNode, "FindChildNode" }, // 4198607165
		{ &Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttribute, "GetAttribute" }, // 584108836
		{ &Z_Construct_UFunction_ULowEntryXmlParserNode_GetAttributes, "GetAttributes" }, // 2496278880
		{ &Z_Construct_UFunction_ULowEntryXmlParserNode_GetChildrenNodes, "GetChildrenNodes" }, // 1087222701
		{ &Z_Construct_UFunction_ULowEntryXmlParserNode_GetFirstChildNode, "GetFirstChildNode" }, // 1765528371
		{ &Z_Construct_UFunction_ULowEntryXmlParserNode_GetNextNode, "GetNextNode" }, // 1009976220
		{ &Z_Construct_UFunction_ULowEntryXmlParserNode_GetTag, "GetTag" }, // 1067226653
		{ &Z_Construct_UFunction_ULowEntryXmlParserNode_GetValue, "GetValue" }, // 4053877850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryXmlParserNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryXmlParserNode.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryXmlParserNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryXmlParserNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryXmlParserNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryXmlParserNode_Statics::ClassParams = {
		&ULowEntryXmlParserNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryXmlParserNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryXmlParserNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryXmlParserNode()
	{
		if (!Z_Registration_Info_UClass_ULowEntryXmlParserNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULowEntryXmlParserNode.OuterSingleton, Z_Construct_UClass_ULowEntryXmlParserNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULowEntryXmlParserNode.OuterSingleton;
	}
	template<> LOWENTRYXMLPARSER_API UClass* StaticClass<ULowEntryXmlParserNode>()
	{
		return ULowEntryXmlParserNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryXmlParserNode);
	ULowEntryXmlParserNode::~ULowEntryXmlParserNode() {}
	struct Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULowEntryXmlParserNode, ULowEntryXmlParserNode::StaticClass, TEXT("ULowEntryXmlParserNode"), &Z_Registration_Info_UClass_ULowEntryXmlParserNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULowEntryXmlParserNode), 2752713727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserNode_h_2242032548(TEXT("/Script/LowEntryXmlParser"),
		Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Latasha_Documents_Unreal_Projects_DON_4_2_Poly_Plugins_LowEntryXmlParser_Source_LowEntryXmlParser_Public_Classes_LowEntryXmlParserNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
