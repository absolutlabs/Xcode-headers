//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYContinuation : NSObject
{
    struct dispatch_queue_s *queue;
    CDUnknownBlockType block;
    _Bool cancelled;
}

- (void)dispatch;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

