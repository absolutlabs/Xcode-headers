//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEProvisioningRepairStep : NSObject
{
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)executeWithContext:(id)arg1 error:(id *)arg2;
- (BOOL)handleExecutionWithContext:(id)arg1 ledgerEntry:(id)arg2 error:(id *)arg3;
- (BOOL)preflightWithContext:(id)arg1 error:(id *)arg2;
- (BOOL)preflight;
- (id)activityDescription;
- (id)stepDescription;

@end

