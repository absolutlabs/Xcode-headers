//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTModelTreeNode.h>

@class IDESourceControlRevision, IDESourceControlTree, IDESourceControlTreeGroup, NSArray, NSMutableDictionary, NSString;

@interface IDESourceControlTreeItem : DVTModelTreeNode
{
    int _sourceControlLocalStatus;
    int _sourceControlServerStatus;
    unsigned long long _conflictStateForUpdateOrMerge;
    IDESourceControlRevision *_currentRevision;
    NSMutableDictionary *_revisions;
    NSString *_name;
    NSString *_pathString;
    unsigned long long _state;
}

+ (BOOL)automaticallyNotifiesObserversOfCurrentRevision;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)_revisionLock;
+ (void)initialize;
@property unsigned long long conflictStateForUpdateOrMerge; // @synthesize conflictStateForUpdateOrMerge=_conflictStateForUpdateOrMerge;
@property int sourceControlServerStatus; // @synthesize sourceControlServerStatus=_sourceControlServerStatus;
@property int sourceControlLocalStatus; // @synthesize sourceControlLocalStatus=_sourceControlLocalStatus;
@property unsigned long long state; // @synthesize state=_state;
@property(readonly) NSString *pathString; // @synthesize pathString=_pathString;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)clearAllRevisions;
- (id)revisionsWithStartingRevision:(id)arg1 limit:(unsigned long long)arg2 branch:(id)arg3 includeHEAD:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)revisionsWithStartingRevision:(id)arg1 limit:(unsigned long long)arg2 branch:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly) NSArray *revisions;
- (id)revisionsDictionary;
- (void)addRevision:(id)arg1;
- (void)clearCurrentRevision;
- (id)currentRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setCurrentRevision:(id)arg1;
@property(readonly) IDESourceControlRevision *currentRevision;
- (int)aggregateSourceControlServerStatus;
- (int)aggregateSourceControlLocalStatus;
- (id)description;
- (id)ideModelObjectTypeIdentifier;
- (void)repositoryURLStringAtBranch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSString *repositoryURLString;
- (void)_setPathString:(id)arg1;
- (void)updateFileReferences:(id)arg1 withFilePaths:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithPathString:(id)arg1;

// Remaining properties
@property(readonly) IDESourceControlTreeGroup *parentGroup; // @dynamic parentGroup;
@property(readonly) IDESourceControlTree *sourceTree; // @dynamic sourceTree;

@end
