//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSButton;
@protocol IBICStartSlicingButtonDelegate;

@interface IBICStartSlicingButton : NSView
{
    NSButton *_startSlicingButton;
    NSButton *_sliceVerticallyButton;
    NSButton *_sliceHorizontallyButton;
    NSButton *_sliceHorizontallyAndVerticallyButton;
    NSArray *_choiceButtons;
    NSArray *_choiceButtonWidthConstraints;
    NSArray *_choiceButtonHeightConstraints;
    id <IBICStartSlicingButtonDelegate> _delegate;
}

@property __weak id <IBICStartSlicingButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)userChoseResizingMode:(id)arg1;
- (void)userPressedStartSlicing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)buttonWithImageName:(id)arg1 title:(id)arg2 tag:(long long)arg3;

@end

