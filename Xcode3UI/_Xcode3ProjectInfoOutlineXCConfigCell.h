//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTPopUpButtonCell.h>

@class NSImage;

@interface _Xcode3ProjectInfoOutlineXCConfigCell : DVTPopUpButtonCell
{
    NSImage *_image;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_drawIndicatorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)_computeTitleRectForAttributedTitleAndImageRect:(struct CGRect)arg1 inFrame:(struct CGRect)arg2;
- (struct CGRect)_computeImageRectInFrame:(struct CGRect)arg1;
- (id)initTextCell:(id)arg1 pullsDown:(BOOL)arg2;
- (id)image;
- (void)setImage:(id)arg1;

@end

