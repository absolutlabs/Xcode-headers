//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@interface XRVMRegionAnnotation : NSObject <NSSecureCoding>
{
    unsigned long long _baseAddress;
    int *_pageMap;
    unsigned int _vpages;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (int)dispositionForPage:(unsigned long long)arg1;
- (id)initSamplingRegion:(id)arg1 inTask:(unsigned int)arg2 updateRegionStatistics:(BOOL)arg3;

@end
