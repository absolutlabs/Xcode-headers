//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSMutableDictionary;

@interface IDEITunesSoftwareServiceApplicationDescriptionCache : NSObject
{
    DVTDispatchLock *_cacheLock;
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (void)cacheITunesApplicationDescriptions:(id)arg1;
- (id)cachedITunesApplicationDescriptionForDescription:(id)arg1;
- (id)_cacheKeyForITunesApplicationDescription:(id)arg1;
- (id)_cacheKeyForApplicationDescription:(id)arg1;
- (id)init;

@end

