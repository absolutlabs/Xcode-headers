//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTComparisonScrollCoordinator.h>

#import <IDESourceCodeComparisonEditor/SourceEditorComparisonScrollViewDelegate-Protocol.h>

@class NSString;

@interface DVTComparisonScrollCoordinator (SourceEditorComparisoScrollViewComparisonDelegate) <SourceEditorComparisonScrollViewDelegate>
- (void)reflectScrolledClipView:(id)arg1;
- (void)sourceEditorScrollView:(id)arg1 scroller:(id)arg2 didSetOverlayScrollerTrackAlpha:(double)arg3;
- (void)sourceEditorScrollView:(id)arg1 scroller:(id)arg2 didSetOverlayScrollerKnobAlpha:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
