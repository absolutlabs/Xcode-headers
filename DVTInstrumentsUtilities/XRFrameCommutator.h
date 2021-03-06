//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRFrameCommutator-Protocol.h>

@class NSString, NSThread, XRFrameRing;

@interface XRFrameCommutator : NSObject <XRFrameCommutator>
{
    unsigned char _state;
    XRFrameRing *_ring;
    NSThread *_thread;
    struct _opaque_pthread_cond_t _cond;
    struct _opaque_pthread_mutex_t _mutex;
}

+ (void)initialize;
+ (id)loggingHandleForSignposts;
- (void).cxx_destruct;
- (void)_thread:(id)arg1;
- (void)wakeUp;
- (void)_transitionToStopped;
- (void)stop;
- (void)start;
- (void)setRing:(id)arg1;
@property(nonatomic) long long qualityOfServiceClass;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

