//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceControlBranch, DVTSourceControlRemoteRepository, DVTSourceControlWorkingCopy;

@interface _TtC6IDEKit33IDESourceControlCommitAndPushInfo : NSObject
{
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: selectedBranch
    // Error parsing type: , name: selectedRemote
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithWorkingCopy:(id)arg1 branch:(id)arg2 remote:(id)arg3;
@property(nonatomic, readonly) DVTSourceControlRemoteRepository *selectedRemote; // @synthesize selectedRemote;
@property(nonatomic, readonly) DVTSourceControlBranch *selectedBranch; // @synthesize selectedBranch;
@property(nonatomic, readonly) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;

@end

