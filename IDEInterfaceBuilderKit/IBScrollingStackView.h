//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStackView_ML.h>

@class NSArray, NSView;

@interface IBScrollingStackView : DVTStackView_ML
{
    NSArray *_views;
    NSView *_firstVisible;
    long long _maxVisibleViews;
}

- (void).cxx_destruct;
- (void)replaceView:(id)arg1 withView:(id)arg2;
- (void)layoutTopDown;
- (BOOL)canScrollDown;
- (BOOL)canScrollUp;
- (void)scrollTo:(long long)arg1;
- (long long)indexOfFirstVisibleView;
- (struct _NSRange)visibleRange;
- (long long)numberOfViews;
- (long long)maxVisibleViews;
- (void)setMaxVisibleViews:(long long)arg1;

@end

