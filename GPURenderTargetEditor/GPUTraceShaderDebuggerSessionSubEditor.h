//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUTraceSubEditor.h>

@class GPUShaderDebuggerRegion, GPUShaderDebuggerSession, GPUTraceShaderItem;
@protocol GPUTraceShaderDebuggerSessionSubEditorDelegate;

@interface GPUTraceShaderDebuggerSessionSubEditor : GPUTraceSubEditor
{
    GPUTraceShaderItem *_shaderItem;
    BOOL _forceSelection;
    GPUShaderDebuggerRegion *_shaderDebuggerRegion;
    id <GPUTraceShaderDebuggerSessionSubEditorDelegate> _shaderDebuggerSessionSubEditorDelegate;
}

@property BOOL forceSelection; // @synthesize forceSelection=_forceSelection;
@property(retain, nonatomic) id <GPUTraceShaderDebuggerSessionSubEditorDelegate> shaderDebuggerSessionSubEditorDelegate; // @synthesize shaderDebuggerSessionSubEditorDelegate=_shaderDebuggerSessionSubEditorDelegate;
@property(retain, nonatomic) GPUShaderDebuggerRegion *shaderDebuggerRegion; // @synthesize shaderDebuggerRegion=_shaderDebuggerRegion;
- (void).cxx_destruct;
- (BOOL)takeFocus;
- (BOOL)_switchPostTessellationVertexThreadInRegion:(id)arg1 forSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_switchKernelThreadInRegion:(id)arg1 forSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_switchFragmentThreadInRegion:(id)arg1 forSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_switchVertexThreadInRegion:(id)arg1 forSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)switchThreadForShaderDebuggerSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GPUShaderDebuggerSession *shaderDebuggerSession;
@property(readonly, nonatomic) unsigned int supportedShaderType;
- (void)debugShaderAtRegionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) GPUTraceShaderItem *shaderItem;
- (id)displayableItem;

@end

