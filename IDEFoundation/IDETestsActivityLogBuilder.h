//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestRunSessionEvents-Protocol.h>

@class IDEActivityLogSection, IDEActivityLogUnitTestSectionRecorder, NSMapTable, NSString;
@protocol IDETestTargetRunner, IDETestsActivityLogBuilderDelegate;

@interface IDETestsActivityLogBuilder : NSObject <IDETestRunSessionEvents>
{
    BOOL _aBundleDidNotFinishSuccessfully;
    BOOL _testsFinishedSuccessfully;
    IDEActivityLogSection *_activityLogSection;
    id <IDETestsActivityLogBuilderDelegate> _delegate;
    NSMapTable *_stateForWorker;
    IDEActivityLogUnitTestSectionRecorder *_currentTestableRecorder;
    id <IDETestTargetRunner> _currentTargetRunner;
}

@property(retain) id <IDETestTargetRunner> currentTargetRunner; // @synthesize currentTargetRunner=_currentTargetRunner;
@property(retain) IDEActivityLogUnitTestSectionRecorder *currentTestableRecorder; // @synthesize currentTestableRecorder=_currentTestableRecorder;
@property(retain) NSMapTable *stateForWorker; // @synthesize stateForWorker=_stateForWorker;
@property __weak id <IDETestsActivityLogBuilderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property BOOL testsFinishedSuccessfully; // @synthesize testsFinishedSuccessfully=_testsFinishedSuccessfully;
- (void).cxx_destruct;
- (void)worker:(id)arg1 didFinishTest:(id)arg2 withTestResult:(id)arg3 rawOutput:(id)arg4;
- (void)worker:(id)arg1 didFailTest:(id)arg2 withTestResultMessage:(id)arg3 rawOutput:(id)arg4;
- (void)worker:(id)arg1 test:(id)arg2 didFinishActivity:(id)arg3;
- (void)worker:(id)arg1 test:(id)arg2 willStartActivity:(id)arg3;
- (void)worker:(id)arg1 test:(id)arg2 didMeasurePerformanceMetric:(id)arg3 rawOutput:(id)arg4;
- (void)worker:(id)arg1 testDidOutput:(id)arg2;
- (void)worker:(id)arg1 didStartTest:(id)arg2 withRawOutput:(id)arg3;
- (void)worker:(id)arg1 testSuiteDidFinish:(unsigned long long)arg2 withFailures:(unsigned long long)arg3 unexpected:(unsigned long long)arg4 testDuration:(double)arg5 totalDuration:(double)arg6 rawOutput:(id)arg7;
- (void)worker:(id)arg1 testSuite:(id)arg2 willFinishAt:(id)arg3 rawOutput:(id)arg4;
- (void)worker:(id)arg1 testSuite:(id)arg2 didStartAt:(id)arg3 rawOutput:(id)arg4;
- (void)testRunSessionDidFinish:(id)arg1 withCancellation:(BOOL)arg2;
- (void)worker:(id)arg1 willFinishPrematurelyWithError:(id)arg2;
- (void)worker:(id)arg1 willFinishWithSuccess:(BOOL)arg2 withError:(id)arg3;
- (void)worker:(id)arg1 didLaunchWithDiagnosticLogPath:(id)arg2;
- (void)testTargetRunner:(id)arg1 didEndWithCancellation:(BOOL)arg2;
- (void)testTargetRunnerDidStart:(id)arg1;
- (id)initWithActivityLogSection:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
