//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC12DVTAnalytics27ProcessorUsagePointUserData : NSObject
{
    // Error parsing type: , name: name
    // Error parsing type: , name: comments
    // Error parsing type: , name: resolved
    // Error parsing type: , name: analyticsPointDefaultName
    // Error parsing type: , name: locallySymbolicatedAnalyticsPointDefaultName
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)initWithName:(id)arg1 analyticsPointDefaultName:(id)arg2 comments:(id)arg3 resolved:(BOOL)arg4;
@property(nonatomic, copy) NSString *locallySymbolicatedAnalyticsPointDefaultName; // @synthesize locallySymbolicatedAnalyticsPointDefaultName;
@property(nonatomic, copy) NSString *analyticsPointDefaultName; // @synthesize analyticsPointDefaultName;
@property(nonatomic) BOOL resolved; // @synthesize resolved;
@property(nonatomic, copy) NSString *comments; // @synthesize comments;
@property(nonatomic, copy) NSString *name; // @synthesize name;

@end

