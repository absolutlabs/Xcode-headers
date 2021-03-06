//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GPUFilteringCoordinatorDelegate, OS_dispatch_queue;

@interface GPUFilteringCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_filteringQueue;
    id <GPUFilteringCoordinatorDelegate> _delegate;
    // Error parsing type: AQ, name: _filteringCount
    unsigned long long _currentFilteringCount;
    BOOL _isFiltering;
}

- (void).cxx_destruct;
- (BOOL)filterSync:(id)arg1;
- (id)filterAsync:(id)arg1;
- (BOOL)_filterWithPredicate:(id)arg1;
- (void)_didBeginFiltering;
- (void)_willBeginFiltering;
- (id)initWithDelegate:(id)arg1;

@end

