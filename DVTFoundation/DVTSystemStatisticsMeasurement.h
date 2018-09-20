//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTSystemStatisticsMeasurement : NSObject
{
    double _wallClockTime;
    long long _numberOfVMPageins;
    long long _numberOfVMPageouts;
}

+ (id)systemStatisticsMeasurement;
@property long long numberOfVMPageouts; // @synthesize numberOfVMPageouts=_numberOfVMPageouts;
@property long long numberOfVMPageins; // @synthesize numberOfVMPageins=_numberOfVMPageins;
@property double wallClockTime; // @synthesize wallClockTime=_wallClockTime;
- (id)systemStatisticsMeasurementByMakingRelativeToMeasurement:(id)arg1;
- (long long)compare:(id)arg1;
- (id)init;
- (id)initWithWallClockTime:(double)arg1 numberOfVMPageins:(long long)arg2 numberOfVMPageouts:(long long)arg3;

@end
