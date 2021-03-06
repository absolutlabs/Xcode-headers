//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/XCTTestSchedulerWorker-Protocol.h>

@class IDETestTargetRunner, NSString;
@protocol IDETestRunner;

@interface IDETestWorkerProxy : NSObject <XCTTestSchedulerWorker>
{
    id <IDETestRunner> _worker;
    IDETestTargetRunner *_testTargetRunner;
    unsigned long long _state;
}

@property unsigned long long state; // @synthesize state=_state;
@property __weak IDETestTargetRunner *testTargetRunner; // @synthesize testTargetRunner=_testTargetRunner;
@property(readonly) id <IDETestRunner> worker; // @synthesize worker=_worker;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)logMessage:(id)arg1;
- (void)executeTestIdentifiers:(id)arg1 skippingTestIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)shutdown;
- (id)initWithWorker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

