//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <DebuggerUI/DVTCompletingTextViewDelegate-Protocol.h>
#import <DebuggerUI/DVTFindBarFindable-Protocol.h>
#import <DebuggerUI/DVTTextFindable-Protocol.h>

@class DVTObservingToken, IDEConsoleTextView, NSString;

@interface DBGConsoleLogEditor : IDEEditor <DVTTextFindable, DVTFindBarFindable, DVTCompletingTextViewDelegate>
{
    IDEConsoleTextView *_textView;
    DVTObservingToken *_consoleLogItemsObserverToken;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(readonly) IDEConsoleTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)setupTextViewContextMenuWithMenu:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)_handleConsoleItemsChanged:(id)arg1;
- (void)_documentDidUpdate;
- (void)primitiveInvalidate;
- (BOOL)canBecomeMainViewController;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end
