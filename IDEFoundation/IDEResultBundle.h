//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEContainer.h>

@interface IDEResultBundle : IDEContainer
{
}

+ (BOOL)isOnlyUsedForUserInteraction;
- (BOOL)_shouldRespondToFileChangeOnDisk;
- (id)createRootGroup;
- (void)_didChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_willChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_changeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;

@end
