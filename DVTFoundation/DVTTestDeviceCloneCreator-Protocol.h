//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTFuture;
@protocol DVTTestDevice, DVTTestDeviceCloneCreator;

@protocol DVTTestDeviceCloneCreator
+ (id <DVTTestDeviceCloneCreator>)sharedCreator;
- (DVTFuture *)destroyClone:(id <DVTTestDevice>)arg1;
- (DVTFuture *)shutdownClone:(id <DVTTestDevice>)arg1;
- (DVTFuture *)cloneDevice:(id <DVTTestDevice>)arg1;
- (BOOL)canCloneDevice:(id <DVTTestDevice>)arg1;
- (DVTFuture *)preexistingClones;
- (DVTFuture *)finishInitialization;
@end

