//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSTableView, NSView;

@interface IBNSViewLongListInspectorLayoutView : DVTLayoutView_ML
{
    NSView *_headerView;
    NSTableView *_tableView;
}

@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
- (BOOL)isFlipped;
- (void)layoutBottomUp;
- (void)layoutTopDown;

@end

