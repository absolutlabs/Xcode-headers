//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResultBlockGenerator.h>

@class IDEOpenQuicklyQueryCandidateBlock;

@interface IDEOpenQuicklyFileReferenceResultGenerator : IDEOpenQuicklyResultBlockGenerator
{
    IDEOpenQuicklyQueryCandidateBlock *_workspaceRelativeStyleCandidates;
}

- (void).cxx_destruct;
- (id)candidateBlockForQuery:(id)arg1;
- (id)workspaceRelativeStyleCandidates;
- (BOOL)supportsLineNumberMatches;
- (id)resultForPrototype:(id)arg1 candidate:(struct IDEOpenQuicklyQueryCandidate *)arg2 query:(id)arg3 fromIndex:(long long)arg4;

@end
