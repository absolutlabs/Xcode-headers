//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDeviceLocator.h>

@class NSMutableArray, SimDeviceSet;

@interface DVTiPhoneSimulatorLocator : DVTDeviceLocator
{
    _Bool _locating;
    NSMutableArray *_deviceSets;
    NSMutableArray *_notificationTokens;
}

+ (id)coreSimulatorQueue;
+ (id)deviceLocator;
+ (id)logAspect;
- (void).cxx_destruct;
- (void)_startLocatingDevicesInDeviceSet:(id)arg1;
- (void)unpairDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pairCompanionDevice:(id)arg1 withGizmoDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3 allowAliases:(BOOL)arg4;
- (BOOL)validateDeviceSpecifierOptions:(id)arg1 genericOnly:(BOOL)arg2 allowMultipleMatches:(BOOL)arg3 error:(id *)arg4;
- (id)deviceType;
- (id)knownDeviceAtDeviceLocation:(id)arg1;
- (id)platforms;
- (id)deviceLocationScheme;
- (void)stopLocating;
- (id)deviceSetForDevice:(id)arg1;
- (id)deviceSetForSimDevice:(id)arg1;
- (id)deviceForSimDevice:(id)arg1;
- (void)startLocating;
@property(readonly) SimDeviceSet *defaultDeviceSet;
- (id)init;

@end
