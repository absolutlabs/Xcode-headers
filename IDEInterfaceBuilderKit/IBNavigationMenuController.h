//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class DVTStackBacktrace, IBAbstractDocumentEditor, IBCancellationToken, NSString;

@interface IBNavigationMenuController : NSObject <NSMenuDelegate, DVTInvalidation>
{
    IBAbstractDocumentEditor *_documentEditor;
    IBCancellationToken *_rolloverToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)navigationMenuItemWasClicked:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (id)menuForObjects:(id)arg1;
- (id)menuItemForObject:(id)arg1;
- (id)menuItemAttributedTitleForObject:(id)arg1 highlighted:(BOOL)arg2;
- (id)document;
- (id)documentEditor;
- (void)primitiveInvalidate;
- (id)initWithDocumentEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
