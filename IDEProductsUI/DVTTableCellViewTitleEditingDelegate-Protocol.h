//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEProductsUI/NSObject-Protocol.h>

@class DVTTableCellView;

@protocol DVTTableCellViewTitleEditingDelegate <NSObject>
- (void)titleDidChangeForTableCellView:(DVTTableCellView *)arg1;
- (struct _NSRange)initialSelectionRangeForTableCellView:(DVTTableCellView *)arg1 usingProposedRange:(struct _NSRange)arg2;
@end
