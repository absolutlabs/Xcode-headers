//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class IDEResultBundleProcessor, IDESchemeActionsInvocationRecord;

@interface IDEResultBundleEditorDocument : IDEEditorDocument
{
    IDESchemeActionsInvocationRecord *_invocationRecord;
    IDEResultBundleProcessor *_processor;
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
@property(retain, nonatomic) IDEResultBundleProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) IDESchemeActionsInvocationRecord *invocationRecord; // @synthesize invocationRecord=_invocationRecord;
- (void).cxx_destruct;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)extractInvocationRecordFromFilePath:(id)arg1;
- (int)readOnlyStatus;
- (BOOL)canSave;

@end

