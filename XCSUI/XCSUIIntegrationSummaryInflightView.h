//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <XCSUI/XCSUIDataSourceSnapshotsObserver-Protocol.h>

@class XCSUIIntegrationSummaryInflightViewController;

@interface XCSUIIntegrationSummaryInflightView : NSView <XCSUIDataSourceSnapshotsObserver>
{
    XCSUIIntegrationSummaryInflightViewController *_viewController;
}

@property __weak XCSUIIntegrationSummaryInflightViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;

@end

