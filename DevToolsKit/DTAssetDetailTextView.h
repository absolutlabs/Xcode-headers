//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class DTFirstResponderDrawingStrategy;

@interface DTAssetDetailTextView : NSTextView
{
    DTFirstResponderDrawingStrategy *firstResponderDrawingStrategy;
    BOOL showsFirstResponder;
}

- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)showsFirstResponder;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
