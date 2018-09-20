//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDESourceKitCallbackFilesContainingWord, IDESourceKitCallbackOnGatherProductHeaders, IDESourceKitCallbackOnSettingsForIndexable, IDESourceKitCallbackOnWriteHeaderMap, IDESourceKitNotificationOnIndexIsFastScanning, IDESourceKitNotificationOnIndexIsPopulatingDatabase, IDESourceKitNotificationOnIsIndexingWorkspace, IDESourceKitNotificationOnWillIndexWorkspace;

@protocol IDESourceKitWorkspaceDelegate <NSObject>
- (void)filesContainingWordWithInfo:(IDESourceKitCallbackFilesContainingWord *)arg1 completionBlock:(void (^)(NSNumber *))arg2;
- (void)onSettingsForIndexableWithInfo:(IDESourceKitCallbackOnSettingsForIndexable *)arg1 completionBlock:(void (^)(NSDictionary *))arg2;
- (void)onGatherProductHeadersWithInfo:(IDESourceKitCallbackOnGatherProductHeaders *)arg1 completionBlock:(void (^)(NSDictionary *))arg2;
- (void)onWriteHeaderMapWithInfo:(IDESourceKitCallbackOnWriteHeaderMap *)arg1 completionBlock:(void (^)(IDESourceKitRequestStringArray *))arg2;
- (void)onCreateWorkspaceArenaFolderWithCompletionBlock:(void (^)(void))arg1;
- (void)onIndexDidFastScan;
- (void)onIndexIsFastScanning:(IDESourceKitNotificationOnIndexIsFastScanning *)arg1;
- (void)onIndexWillFastScan;
- (void)onIndexDidPopulateDatabase;
- (void)onIndexIsPopulatingDatabase:(IDESourceKitNotificationOnIndexIsPopulatingDatabase *)arg1;
- (void)onIndexWillPopulateDatabase;
- (void)onDidResumeIndexingWorkspace;
- (void)onDidSuspendIndexingWorkspace;
- (void)onDidIndexWorkspace;
- (void)onIsIndexingWorkspace:(IDESourceKitNotificationOnIsIndexingWorkspace *)arg1;
- (void)onWillIndexWorkspace:(IDESourceKitNotificationOnWillIndexWorkspace *)arg1;
- (void)onDidChangeState;
- (void)onDidChange;
- (void)onInitiatePrebuild;
- (long long)indexerToken;
@end
