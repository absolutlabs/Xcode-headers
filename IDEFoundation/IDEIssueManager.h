//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDEBuildParameters, IDEIssueLogRecordsGroup, IDEIssueProviderSession, IDEWorkspace, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDEIssueManager : NSObject <DVTInvalidation>
{
    NSMutableArray *_issueProviders;
    NSMapTable *_providerContextToProvisionInfoMap;
    NSMapTable *_issueToProviderContextMap;
    NSMutableArray *_issueGroups;
    NSMapTable *_identifierToGroupIndex;
    NSMapTable *_issueToGroupsIndex;
    NSMutableSet *_issuesThatWillBeRemoved;
    NSMutableArray *_vendedIssuesWithNoDocument;
    NSMutableSet *_issuesWithNoDocument;
    NSMutableArray *_documentURLsWithVendedIssues;
    NSMutableDictionary *_documentURLToIssueSummaryDict;
    NSHashTable *_allDocumentURLObservers;
    unsigned long long _nextIssueSequenceNumber;
    NSMapTable *_providerToSessionObservationToken;
    unsigned long long _nextGroupSequenceNumber;
    NSMapTable *_identifierToGroupSequenceNumberIndex;
    IDEIssueProviderSession *_lastSchemeActionSession;
    NSMutableSet *_lastSchemeActionIssues;
    id _issueFixedObserver;
    id _liveIssuesEnabledObserver;
    DVTTimeSlicedMainThreadWorkQueue *_buildableDependencyFinderQueue;
    IDEBuildParameters *_cachedBuildParamsForFindingBuildDependencies;
    NSMutableSet *_buildablesAlreadyCheckedForDependencies;
    NSHashTable *_cachedBlueprintsForShowingIssuesForActiveScheme;
    NSHashTable *_cachedBlueprintsForActiveScheme;
    NSHashTable *_cachedContainersForActiveScheme;
    int _currentIssueFilterStyle;
    id _issueFilterStyleObserver;
    id _schemeBuildablesObserver;
    DVTObservingToken *_activeSchemeObserver;
    DVTObservingToken *_runDestinationObserver;
    DVTObservingToken *_implicitDependenciesObserver;
    DVTObservingToken *_referencedBlueprintsOberver;
    DVTObservingToken *_referencedContainersObserver;
    DVTObservingToken *_workspaceFinishedLoadingObserver;
    BOOL _liveIssuesEnabled;
    IDEWorkspace *_workspace;
    IDEIssueLogRecordsGroup *_issueLogRecordsGroup;
    unsigned long long _numberOfBuildtimeIssues;
    unsigned long long _numberOfRuntimeIssues;
}

+ (id)issueManagerLogAspect;
+ (id)_issueProviderInfo;
+ (void)_useDebugProviderExtensionPointWithIdentifier:(id)arg1;
+ (void)initialize;
@property unsigned long long numberOfRuntimeIssues; // @synthesize numberOfRuntimeIssues=_numberOfRuntimeIssues;
@property unsigned long long numberOfBuildtimeIssues; // @synthesize numberOfBuildtimeIssues=_numberOfBuildtimeIssues;
@property(readonly) IDEIssueLogRecordsGroup *issueLogRecordsGroup; // @synthesize issueLogRecordsGroup=_issueLogRecordsGroup;
@property(readonly, getter=areLiveIssuesEnabled) BOOL liveIssuesEnabled; // @synthesize liveIssuesEnabled=_liveIssuesEnabled;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)_containersOrBlueprintsUpdated;
- (id)_issuesForProviderContext:(id)arg1;
- (id)_providerContextToProvisionInfoMapForIssues:(id)arg1;
- (id)_unitTestIssueProvidersAccessor;
- (void)_validateGroupIdentifiers;
- (void)_updateVendedIssues;
- (void)_updateContainersAndBlueprintsForActiveScheme;
- (void)_findDependencyForBuildable:(id)arg1;
- (void)_updateIssueFilterStyle;
- (void)_needsUpdateInResponseToFilterChanges;
- (void)_coalescedUpdateInResponseToFilterChanges;
- (void)_hideIssues:(id)arg1;
- (void)_setIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4 runtimeGroupingObject:(id)arg5 session:(id)arg6;
- (void)_removeIssues:(id)arg1 forProviderContext:(id)arg2 session:(id)arg3;
- (void)_addIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4 runtimeGroupingObject:(id)arg5 session:(id)arg6 tryToCoalesce:(BOOL)arg7;
- (BOOL)_vendOnlyActiveSchemeIssues;
- (void)_retractIssues:(id)arg1;
- (void)_vendIssues:(id)arg1 container:(id)arg2 blueprint:(id)arg3 runtimeGroupingObject:(id)arg4 issueToGroupingObjectMap:(id)arg5 session:(id)arg6;
- (void)_setNumBuildtimeIssues:(unsigned long long)arg1 numRuntimeIssues:(unsigned long long)arg2;
- (id)similarExistingIssueForIssue:(id)arg1;
- (id)_similarExistingIssueForIssue:(id)arg1 container:(id)arg2 blueprint:(id)arg3;
- (_Bool)_doesIssue:(id)arg1 fromContainer:(id)arg2 andBlueprint:(id)arg3 coalesceWithIssue:(id)arg4;
- (_Bool)_doesIssue:(id)arg1 coalesceWithIssue:(id)arg2;
- (id)_groupingObjectsForIssue:(id)arg1;
- (void)_rescindObserverToken:(id)arg1;
- (id)newIssueObserverForDocumentURL:(id)arg1 options:(unsigned long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (void)_notifyAllObserversOfDocumentURL:(id)arg1 isPrior:(BOOL)arg2;
- (void)_notifyObserver:(id)arg1 forURL:(id)arg2 isPrior:(BOOL)arg3;
- (id)issuesWithNoDocument;
- (id)issuesForDocumentURL:(id)arg1;
- (id)buildtimeIssuesWithNoDocument;
- (id)buildtimeIssuesForDocumentURL:(id)arg1;
- (id)_buildtimeIssuesFromIssues:(id)arg1;
- (unsigned long long)maxSeverityOfDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfFixableDiagnosticItemsInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfAnalyzerResultsInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfNoticesInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfRuntimeIssuesInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfWarningsInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfErrorsInDocumentAtURL:(id)arg1;
- (unsigned long long)numberOfTestFailuresInDocumentAtURL:(id)arg1;
- (id)_documentIssueSummaryForURL:(id)arg1;
@property(readonly) NSArray *documentURLsWithIssues;
@property(readonly) NSArray *issueGroups;
- (void)_updateIssueProviders;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSSet *lastSchemeActionIssues; // @dynamic lastSchemeActionIssues;
@property(readonly) NSMutableSet *mutableLastSchemeActionIssues; // @dynamic mutableLastSchemeActionIssues;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

