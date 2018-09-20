//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTDaemonRequest-Protocol.h>

@class NSString;
@protocol OS_dispatch_semaphore;

@interface XCTDaemonBarrierRequest : NSObject <XCTDaemonRequest>
{
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
    NSObject<OS_dispatch_semaphore> *_dsem;
}

+ (id)minimumProtocolVersion;
@property(readonly) NSObject<OS_dispatch_semaphore> *dsem; // @synthesize dsem=_dsem;
@property(readonly, copy) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(readonly) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)handleConnectionFailure:(id)arg1;
- (void)finish;
- (void)executeWithDaemonProxyProvider:(id)arg1;
- (id)initWithTimeout:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
