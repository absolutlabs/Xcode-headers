//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYCaptureArchiveModifier.h>

@interface DYGLCaptureArchiveModifier : DYCaptureArchiveModifier
{
    StateMirrorManager_a2602dc9 _stateMirrorManager;
    StateMirrorManager_a2602dc9 _origStateMirrorManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processFunction:(const struct Function *)arg1 functionIndex:(int)arg2;
- (void)_restoreAPIState;
- (void)_saveAPIState;
- (StateMirrorManager_a2602dc9 *)stateMirrorManager;

@end

