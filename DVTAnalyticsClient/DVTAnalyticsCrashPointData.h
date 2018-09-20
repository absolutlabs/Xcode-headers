//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsData.h>

@class DVTAnalyticsCrashPointIdentifier, NSString;

@interface DVTAnalyticsCrashPointData : DVTAnalyticsData
{
    NSString *_rootVersion;
    NSString *_rootBuild;
    DVTAnalyticsCrashPointIdentifier *_crashPointIdentifier;
    NSString *_adamId;
    NSString *_appVersion;
    NSString *_appBuild;
    NSString *_bundleId;
    NSString *_crashPointId;
}

@property(retain) NSString *crashPointId; // @synthesize crashPointId=_crashPointId;
@property(retain) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *adamId; // @synthesize adamId=_adamId;
- (void).cxx_destruct;
@property(copy) NSString *rootBuild; // @synthesize rootBuild=_rootBuild;
@property(copy) NSString *rootVersion; // @synthesize rootVersion=_rootVersion;
@property(readonly) DVTAnalyticsCrashPointIdentifier *crashPointIdentifier; // @synthesize crashPointIdentifier=_crashPointIdentifier;

@end
