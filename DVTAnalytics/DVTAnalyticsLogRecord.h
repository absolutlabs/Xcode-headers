//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol DVTAnalyticsLogProtocol;

@interface DVTAnalyticsLogRecord : NSObject
{
    NSString *_analyticsLogIdentifier;
    id <DVTAnalyticsLogProtocol> _locatedAnalyticsLog;
    NSError *_locationError;
}

@property(readonly) NSError *locationError; // @synthesize locationError=_locationError;
@property(readonly) id <DVTAnalyticsLogProtocol> locatedAnalyticsLog; // @synthesize locatedAnalyticsLog=_locatedAnalyticsLog;
@property(readonly) NSString *analyticsLogIdentifier; // @synthesize analyticsLogIdentifier=_analyticsLogIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAnalyticsLogIdentifier:(id)arg1 locatedAnalyticsLog:(id)arg2 locationError:(id)arg3;

@end

