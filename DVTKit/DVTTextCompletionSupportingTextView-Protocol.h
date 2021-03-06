//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTSourceCodeLanguage, DVTTextCompletionController, DVTTextCompletionDataSource, DVTTextCompletionSession, DVTTextDocumentLocation, NSCharacterSet, NSMutableDictionary, NSScrollView, NSString, NSUndoManager, NSWindow;
@protocol DVTTextCompletionItem;

@protocol DVTTextCompletionSupportingTextView <NSObject>
+ (BOOL)appSupportsActionMonitoring;
+ (NSCharacterSet *)identifierCharacters;
@property(readonly) NSScrollView *textCanvasScrollView;
@property(readonly, getter=isCurrentlyDoingNonUserEditing) BOOL currentlyDoingNonUserEditing;
@property struct _NSRange selectedTextRange;
@property(readonly) double autoCompletionDelay;
@property(readonly) BOOL shouldSuppressTextCompletion;
@property(readonly) NSWindow *window;
@property(readonly, copy) NSString *string;
@property(readonly) NSUndoManager *undoManager;
@property(readonly) DVTSourceCodeLanguage *language;
@property(readonly) DVTTextCompletionDataSource *completionsDataSource;
@property(readonly) DVTTextCompletionController *completionController;
- (struct _NSRange)textCompletionSession:(DVTTextCompletionSession *)arg1 replacementRangeForSuggestedRange:(struct _NSRange)arg2;
- (DVTTextDocumentLocation *)documentLocationForWordStartLocation:(unsigned long long)arg1;
- (NSMutableDictionary *)contextForCompletionStrategiesAtWordStartLocation:(unsigned long long)arg1;
- (void)textCompletionSession:(DVTTextCompletionSession *)arg1 didInsertCompletionItem:(id <DVTTextCompletionItem>)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)performTextCompletionReplacementInRange:(struct _NSRange)arg1 withString:(NSString *)arg2;
- (void)showFindIndicatorForRange:(struct _NSRange)arg1;
- (struct CGRect)frameContainingTextRange:(struct _NSRange)arg1;
- (struct CGRect)visibleTextRect;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (BOOL)shouldAutoCompleteAtLocation:(unsigned long long)arg1;
- (struct _NSRange)wordRangeAtLocation:(unsigned long long)arg1;
@end

