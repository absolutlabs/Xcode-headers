//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTDaemonControl/XCTConfigurableCallbackQueue-Protocol.h>
#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>

@protocol XCTDaemonSessionDelegate;

@protocol XCTDaemonSession <XCTConfigurableCallbackQueue, XCTConfigurableDebugLogger>
@property __weak id <XCTDaemonSessionDelegate> delegate;
- (void)invalidate;
@end

