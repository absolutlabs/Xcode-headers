//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3UpgradeTargetTask.h>

@class NSString;

@interface Xcode3UpgradeEmbeddedContentContainsSwift : Xcode3UpgradeTargetTask
{
    NSString *_configurationName;
    NSString *_value;
}

+ (id)analyzeInContext:(id)arg1;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
- (void).cxx_destruct;
- (BOOL)upgrade;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 context:(id)arg3 configurationName:(id)arg4 value:(id)arg5;

@end
