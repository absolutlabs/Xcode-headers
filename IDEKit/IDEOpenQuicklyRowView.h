//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class IDEOpenQuicklyRowViewIndentIndicatorView;

@interface IDEOpenQuicklyRowView : NSTableRowView
{
    IDEOpenQuicklyRowViewIndentIndicatorView *_indentIndicatorView;
    BOOL _drawIndent;
}

@property(nonatomic) BOOL drawIndent; // @synthesize drawIndent=_drawIndent;
- (void).cxx_destruct;
- (void)setEmphasized:(BOOL)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)layout;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

