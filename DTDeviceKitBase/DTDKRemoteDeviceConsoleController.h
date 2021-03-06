//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSString;
@protocol DTDKRemoteDeviceConsoleControllerDelegate, DTDKRemoteDeviceToken, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface DTDKRemoteDeviceConsoleController : NSObject
{
    struct _AMDServiceConnection *_serviceRef;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_socketQueue;
    NSObject<OS_dispatch_source> *_consoleSource;
    _Bool _isInvalidating;
    struct DTDKCircularBuffer *_circularBuffer;
    DVTDispatchLock *_bufferLock;
    NSObject<OS_dispatch_semaphore> *_sourceCancelledSemaphore;
    id <DTDKRemoteDeviceConsoleControllerDelegate> _delegate;
    id <DTDKRemoteDeviceToken> _token;
}

+ (id)consoleStringWithData:(id)arg1 startingAtOffset:(unsigned long long)arg2;
+ (id)controllerForDevice:(id)arg1;
@property __weak id <DTDKRemoteDeviceToken> token; // @synthesize token=_token;
@property(retain) id <DTDKRemoteDeviceConsoleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *consoleString;
- (void)clear;
- (void)reload;
- (void)stop;
- (void)invalidate;
- (void)dealloc;

@end

