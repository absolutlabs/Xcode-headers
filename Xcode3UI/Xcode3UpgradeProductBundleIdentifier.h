//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3UpgradeTargetTask.h>

@class NSArray, NSString;

@interface Xcode3UpgradeProductBundleIdentifier : Xcode3UpgradeTargetTask
{
    NSArray *_configurations;
    NSString *_bundleIdentifierSettingValueToUse;
    BOOL _setPerConfigurationBuildSetting;
}

+ (id)analyzeInContext:(id)arg1;
- (void).cxx_destruct;
- (BOOL)upgrade;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 configurations:(id)arg3 setPerConfigurationBuildSetting:(BOOL)arg4 bundleIdentifierSettingValueToUse:(id)arg5 context:(id)arg6;

@end

