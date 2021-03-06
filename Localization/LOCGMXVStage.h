//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LOCGMXVStage : NSObject
{
    NSDictionary *stageDict;
    NSDictionary *countLookupDict;
    NSString *namespacePrefix;
    NSDictionary *stateQualifierToCountCategoryDict;
    id reserved1;
    id reserved2;
    id reserved3;
    id reserved4;
    id reserved5;
}

+ (id)defaultHyphenCharacterSet;
+ (id)defaultHyphenSet;
+ (id)defaultPunctuationCharacterSet;
+ (id)defaultPunctuationSet;
+ (id)defaultWhitespaceCharacterSet;
+ (id)defaultWhitespaceSet;
+ (id)defaultStateQualifierToCountCategoryMap;
+ (id)calculateWordCountForSourceString:(id)arg1 targetAttributes:(id)arg2 error:(id *)arg3;
+ (id)calculateWordCountForSourceString:(id)arg1 targetAttributes:(id)arg2 whitespaceSet:(id)arg3 punctuationSet:(id)arg4 hyphenSet:(id)arg5 whitespaceCharacterSet:(id)arg6 punctuationCharacterSet:(id)arg7 hyphenCharacterSet:(id)arg8 options:(unsigned long long)arg9 error:(id *)arg10;
@property(retain) NSDictionary *stateQualifierToCountCategoryDict; // @synthesize stateQualifierToCountCategoryDict;
@property(retain) NSString *namespacePrefix; // @synthesize namespacePrefix;
@property(retain) NSDictionary *countLookupDict; // @synthesize countLookupDict;
@property(retain) NSDictionary *stageDict; // @synthesize stageDict;
- (void).cxx_destruct;
- (BOOL)validStageDictionary:(id)arg1 originalPath:(id)arg2 error:(id *)arg3;
- (id)createCountLookupDict:(id)arg1;
- (id)parseStageElement:(id)arg1 namespacePrefixforGMXV:(id)arg2 originalPath:(id)arg3 error:(id *)arg4;
- (id)calculateGMXVWorkloadFromInternalGlossary:(id)arg1 phase:(id)arg2 date:(id)arg3 notes:(id)arg4 error:(id *)arg5;
- (unsigned long long)countForGroupName:(id)arg1 state:(id)arg2 type:(id)arg3;
- (id)gmxvElementWithName:(id)arg1 options:(unsigned long long)arg2;
- (id)stageElementWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithStageElement:(id)arg1 namespacePrefixforGMXV:(id)arg2 originalPath:(id)arg3 error:(id *)arg4;
- (id)initWithStageDict:(id)arg1 originalPath:(id)arg2 error:(id *)arg3;
- (id)initWithInternalGlossary:(id)arg1 options:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 phase:(id)arg4 date:(id)arg5 notes:(id)arg6 stateQualifierToCountCategoryDictionary:(id)arg7 error:(id *)arg8;

@end

