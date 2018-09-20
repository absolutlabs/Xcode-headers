//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKNoiseSource.h>

@interface GKVoronoiNoiseSource : GKNoiseSource
{
    BOOL _distanceEnabled;
    int _seed;
    double _frequency;
    double _displacement;
}

+ (id)voronoiNoiseWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(BOOL)arg3 seed:(int)arg4;
@property(nonatomic) int seed; // @synthesize seed=_seed;
@property(nonatomic, getter=isDistanceEnabled) BOOL distanceEnabled; // @synthesize distanceEnabled=_distanceEnabled;
@property(nonatomic) double displacement; // @synthesize displacement=_displacement;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (id)initWithFrequency:(double)arg1 displacement:(double)arg2 distanceEnabled:(BOOL)arg3 seed:(int)arg4;
- (id)init;

@end
