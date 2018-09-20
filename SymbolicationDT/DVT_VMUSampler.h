//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVT_VMUProcessDescription, NSConditionLock, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface DVT_VMUSampler : NSObject
{
    unsigned long long _options;
    int _pid;
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    BOOL _recordThreadStates;
    BOOL _sampling;
    unsigned int _numberOfCopiedBacktraces;
    NSString *_processName;
    DVT_VMUProcessDescription *_processDescription;
    struct _CSTypeRef _symbolicator;
    unsigned int _suspensionToken;
    struct sampling_context_t *_samplingContext;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int *_previousThreadList;
    unsigned int _mainThread;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    BOOL _stacksFixed;
    id _delegate;
    double _timeSpentSampling;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
    NSMutableDictionary *_threadPortToNameMap;
    NSMutableDictionary *_dispatchQueueSerialNumToNameMap;
}

+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(BOOL)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)writeOutput:(id)arg1 append:(BOOL)arg2;
- (id)outputString;
- (id)stopSamplingAndReturnCallNode;
- (void)forceStop;
- (void)stopSampling;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (void)preloadSymbols;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long *)arg2;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(char *)arg2 returnedThreadId:(unsigned long long *)arg3;
- (id)threadNameForThread:(unsigned int)arg1;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long *)arg2 returnedDispatchQueueSerialNum:(unsigned long long *)arg3;
- (unsigned int)mainThread;
- (void)flushData;
- (unsigned int)sampleCount;
- (id)samples;
- (int)pid;
- (struct _CSTypeRef)symbolicator;
- (void)setRecordThreadStates:(BOOL)arg1;
- (unsigned int)sampleLimit;
- (void)setSampleLimit:(unsigned int)arg1;
- (double)timeLimit;
- (void)setTimeLimit:(double)arg1;
- (double)samplingInterval;
- (void)setSamplingInterval:(double)arg1;
- (BOOL)waitUntilDone;
- (BOOL)stop;
- (BOOL)start;
- (id)sampleThread:(unsigned int)arg1;
- (id)sampleAllThreadsOnce;
- (id)sampleAllThreadsOnceWithFramePointers:(BOOL)arg1;
- (void)_runSamplingThread;
- (void)_fixupStacks:(id)arg1;
- (unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4 recordFramePointers:(BOOL)arg5 clearMemoryCache:(BOOL)arg6;
- (void)_checkDispatchThreadLimits;
- (void)initializeSamplingContextWithOptions:(int)arg1;
- (void)_makeTimeshare;
- (void)_makeHighPriority;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithPID:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned long long)arg3;
- (id)initWithPID:(int)arg1 task:(unsigned int)arg2 processName:(id)arg3 is64Bit:(BOOL)arg4 options:(unsigned long long)arg5;

@end
