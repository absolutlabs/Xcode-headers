//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/CDMXMLCoding-Protocol.h>
#import <IDEModelFoundation/DVTInvalidation-Protocol.h>
#import <IDEModelFoundation/IDEInspectorAccessibilitySupport-Protocol.h>

@class CDMConfiguration, DVTStackBacktrace, DVTToolsVersion, DVTVersion, NSArray, NSMutableArray, NSString, NSUndoManager;
@protocol CDMModelOwner;

@interface CDMModel : NSObject <IDEInspectorAccessibilitySupport, DVTInvalidation, CDMXMLCoding>
{
    NSString *_name;
    NSMutableArray *_entities;
    NSMutableArray *_fetchRequests;
    NSMutableArray *_configurations;
    NSString *_modelVersionIdentifier;
    CDMConfiguration *_defaultConfiguration;
    NSMutableArray *_rootsOfEntityTree;
    NSMutableArray *_topLevelObjects;
    BOOL _isLoading;
    BOOL _forceDowngradeOfFetchIndexes;
    BOOL _supportsFetchIndexes;
    unsigned long long _sourceLanguage;
    DVTToolsVersion *_minimumToolsVersion;
    id <CDMModelOwner> _owner;
    DVTVersion *_swiftVersion;
    NSString *_lastSavedToolsVersion;
}

+ (id)currentDocumentVersion;
+ (id)currentToolsVersion;
+ (id)arrayOfFetchRequestsPlistsFromFetchRequests:(id)arg1;
+ (id)arrayOfEntitiesPListsFromEntities:(id)arg1;
+ (id)keyPathsForValuesAffectingDisplayConfigurations;
+ (id)keyPathsForValuesAffectingSupportsFetchIndexes;
+ (id)keyPathsForValuesAffectingSupportsAutomaticCodeGeneration;
+ (void)initialize;
@property(readonly, copy) NSString *lastSavedToolsVersion; // @synthesize lastSavedToolsVersion=_lastSavedToolsVersion;
@property(retain) DVTVersion *swiftVersion; // @synthesize swiftVersion=_swiftVersion;
@property(retain) id <CDMModelOwner> owner; // @synthesize owner=_owner;
@property(copy) NSArray *rootsOfEntityTree; // @synthesize rootsOfEntityTree=_rootsOfEntityTree;
@property(retain) CDMConfiguration *defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property(copy, nonatomic) NSString *modelVersionIdentifier; // @synthesize modelVersionIdentifier=_modelVersionIdentifier;
@property(copy, nonatomic) NSArray *configurations; // @synthesize configurations=_configurations;
@property(copy, nonatomic) NSArray *fetchRequests; // @synthesize fetchRequests=_fetchRequests;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)encodeXMLElement;
- (void)awakeAfterXMLDecoding;
- (id)initWithXMLElement:(id)arg1 owner:(id)arg2 error:(id *)arg3;
- (id)pasteEmptyEntitiesFromPList:(id)arg1;
- (void)fillInPastedEntitiesWithUpdatedPList:(id)arg1;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)configurationForName:(id)arg1;
- (id)entityForName:(id)arg1;
- (id)fetchRequestForName:(id)arg1;
- (void)updateDefaultConfiguration;
@property(readonly) NSUndoManager *undoManager;
- (id)descendantsOfEntity:(id)arg1;
- (id)displayConfigurations;
- (id)legacyRepresentation;
- (id)initWithLegacyModel:(id)arg1;
- (id)init;
- (void)primitiveInvalidate;
- (void)didChangeRootsOfEntityTree;
- (void)removeConfiguration:(id)arg1;
- (void)addConfiguration:(id)arg1;
- (void)removeFetchRequest:(id)arg1;
- (void)addFetchRequest:(id)arg1;
- (void)removeEntity:(id)arg1;
- (void)addEntity:(id)arg1;
@property(readonly) NSArray *topLevelObjects;
- (void)updateTopLevelObjects;
@property(retain) DVTToolsVersion *minimumToolsVersion; // @synthesize minimumToolsVersion=_minimumToolsVersion;
@property unsigned long long sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
- (id)fetchRequestsForEntity:(id)arg1;
@property(readonly) BOOL supportsFetchIndexes; // @synthesize supportsFetchIndexes=_supportsFetchIndexes;
- (void)forceDowngradeOfFetchIndexes;
- (void)updateSupportsFetchIndexes;
@property(readonly) BOOL supportsAutomaticCodeGeneration;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

