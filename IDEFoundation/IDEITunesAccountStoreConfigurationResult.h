//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, DVTITunesConnectConfigurationResponse;

@interface IDEITunesAccountStoreConfigurationResult : NSObject
{
    DVTDeveloperAccount *_account;
    DVTITunesConnectConfigurationResponse *_configurationResponse;
}

@property(readonly) DVTITunesConnectConfigurationResponse *configurationResponse; // @synthesize configurationResponse=_configurationResponse;
@property(readonly) DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithDeveloperAccount:(id)arg1 appStoreSubmissionConfiguration:(id)arg2;

@end

