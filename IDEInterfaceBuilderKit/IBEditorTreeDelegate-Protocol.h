//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBEditorCanvasFrame, IBEditorCanvasFrameController, IBEditorTree, NSObject;

@protocol IBEditorTreeDelegate <NSObject>
- (void)editorTree:(IBEditorTree *)arg1 closeFrameController:(IBEditorCanvasFrameController *)arg2;
- (void)editorTree:(IBEditorTree *)arg1 addCanvasFrame:(IBEditorCanvasFrame *)arg2;
- (IBEditorCanvasFrameController *)editorTree:(IBEditorTree *)arg1 instantiateFrameControllerForObject:(NSObject *)arg2;
- (void)editorTreeDidChange:(IBEditorTree *)arg1 dueToOpeningEditorForObject:(NSObject *)arg2;
- (void)editorTreeWillChange:(IBEditorTree *)arg1 dueToOpeningEditorForObject:(NSObject *)arg2;
- (void)editorTreeMightChange:(IBEditorTree *)arg1 dueToOpeningEditorForObject:(NSObject *)arg2;
@end
