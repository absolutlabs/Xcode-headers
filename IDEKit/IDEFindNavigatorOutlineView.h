//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAbstractFindNavigatorOutlineView.h>

#import <IDEKit/DVTEmptyContentPlaceholderContainer-Protocol.h>

@class NSFont, NSString;

@interface IDEFindNavigatorOutlineView : IDEAbstractFindNavigatorOutlineView <DVTEmptyContentPlaceholderContainer>
{
    BOOL _processingMouseEvent;
    int _emptyContentStringStyle;
    NSString *_emptyContentString;
    NSString *_emptyContentSubtitle;
    NSFont *_emptyContentFont;
}

@property(readonly) BOOL processingMouseEvent; // @synthesize processingMouseEvent=_processingMouseEvent;
@property(copy, nonatomic) NSFont *emptyContentFont; // @synthesize emptyContentFont=_emptyContentFont;
@property(nonatomic) int emptyContentStringStyle; // @synthesize emptyContentStringStyle=_emptyContentStringStyle;
@property(copy, nonatomic) NSString *emptyContentSubtitle; // @synthesize emptyContentSubtitle=_emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)contextMenu_copy:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)dataSourceSupportsWritingToPasteboard;
- (void)mouseDown:(id)arg1;
- (void)viewWillDraw;

// Remaining properties
@property(nonatomic) BOOL followsFontAndColorTheme;

@end

