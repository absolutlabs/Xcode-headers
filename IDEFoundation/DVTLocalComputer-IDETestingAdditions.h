//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTLocalComputer.h>

@interface DVTLocalComputer (IDETestingAdditions)
+ (BOOL)isTargetBootstrapInjectionSupportedOnVersion:(id)arg1 buildVersion:(id)arg2 internal:(BOOL)arg3 overrideValue:(id)arg4;
- (id)connectionServicesFrameworkPath;
- (id)internalSystemTestBundleInjectionLibraryPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (id)internalSystemTestingToolPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (id)testRunnerSessionForConfiguration:(id)arg1;
- (id)testDaemonControlSession;
- (BOOL)requiresLocalTCCPermissionForUITesting;
- (BOOL)usesTestDaemonForUIRecording;
- (id)bridgedProcessAutomationFrameworkPath;
- (id)automationFrameworkPath;
- (id)targetBootstrapInjectionPath;
- (BOOL)supportsTargetBootstrapInjection;
- (BOOL)supportsTestDaemonControlSession;
- (BOOL)supportsOverridingTestingToolPath;
@end

