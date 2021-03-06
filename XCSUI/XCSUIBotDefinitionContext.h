//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/XCSUIDevicesContextDelegate-Protocol.h>

@class DVTObservingToken, DVTSourceControlWorkspaceBlueprint, IDEScheme, IDEWorkspace, IDEWorkspaceTabController, NSArray, NSDictionary, NSError, NSMapTable, NSSet, NSString, NSURL, XCSArchiveExportOptions, XCSBot, XCSDeviceSpecification, XCSProvisioningConfiguration, XCSToolchain, XCSUIDevicesContext, XCSUIService;

@interface XCSUIBotDefinitionContext : NSObject <XCSUIDevicesContextDelegate>
{
    XCSBot *_bot;
    id _deviceObserverToken;
    DVTObservingToken *_serviceReachabilityToken;
    BOOL _disableWorkspaceSpecificSettings;
    BOOL _disableSourceControlSettings;
    BOOL _hasValidLocalSCMBlueprint;
    BOOL _preserveExistingServerBlueprint;
    BOOL _performsAnalyzeAction;
    BOOL _performsTestAction;
    BOOL _performsArchiveAction;
    BOOL _runOnlyDisabledTests;
    BOOL _exportsProductFromArchive;
    BOOL _createsThinnedApps;
    BOOL _performsUpgradeIntegration;
    BOOL _hasSufficientSCMInfoToCreateBot;
    BOOL _creationComplete;
    BOOL _needsCommitAndPushUponCompletion;
    BOOL _shareOrCommitScheme;
    BOOL _supportsRunningOnlyDisabledTests;
    BOOL _useParallelDeviceTesting;
    BOOL _shouldSaveArchiveExportOptions;
    BOOL _redefineBot;
    BOOL _consultSchemeForConfiguration;
    IDEWorkspaceTabController *_workspaceTabController;
    NSString *_botName;
    NSString *_defaultBotName;
    XCSUIService *_uiService;
    DVTSourceControlWorkspaceBlueprint *_localSCMWorkspaceBlueprint;
    DVTSourceControlWorkspaceBlueprint *_updatedBotSCMWorkspaceBlueprint;
    DVTSourceControlWorkspaceBlueprint *_existingSCMWorkspaceBlueprint;
    NSMapTable *_workingCopiesToRemoteRepositories;
    NSURL *_sshKeyFolderURL;
    NSString *_existingBotID;
    IDEScheme *_scheme;
    NSString *_schemeName;
    unsigned long long _buildsFromCleanSchedule;
    NSString *_buildConfiguration;
    unsigned long long _codeCoveragePreference;
    NSArray *_testLocalizations;
    XCSUIDevicesContext *_devicesContext;
    CDUnknownBlockType _platformsChangedHandler;
    CDUnknownBlockType _devicesChangedHandler;
    CDUnknownBlockType _toolchainsChangedHandler;
    long long _initialRepositoryAuthenticationStatus;
    long long _preflightRepositoryAuthenticationStatus;
    NSSet *_preflightIgnoredRepositoryIdentifiers;
    NSArray *_triggers;
    unsigned long long _scheduleType;
    unsigned long long _periodicScheduleInterval;
    long long _weeklyScheduleDay;
    unsigned long long _hourOfIntegration;
    unsigned long long _minutesAfterHourToIntegrate;
    NSError *_createEditBotError;
    NSArray *_createEditBotValidationErrors;
    long long _rememberAuthenticationChoice;
    CDUnknownBlockType _blueprintLoadedCallback;
    NSArray *_botRepositories;
    long long _schemeValidity;
    long long _schemeRecoveryType;
    NSDictionary *_buildEnvironmentVariables;
    NSArray *_additionalBuildArguments;
    long long _accountReachability;
    NSString *_hostname;
    XCSProvisioningConfiguration *_provisioningConfiguration;
    XCSArchiveExportOptions *_archiveExportOptions;
    DVTSourceControlWorkspaceBlueprint *_localSCMWorkspaceBlueprintOriginal;
}

+ (BOOL)eventIsReturnKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDeviceSpecification;
+ (BOOL)workspace:(id)arg1 matchesBlueprintInBot:(id)arg2;
+ (id)keyPathsForValuesAffectingSchemeSupportsArchiveAction;
+ (id)keyPathsForValuesAffectingPerformsArchiveAction;
+ (id)keyPathsForValuesAffectingSchemeSupportsTestAction;
+ (id)keyPathsForValuesAffectingPerformsTestAction;
+ (id)keyPathsForValuesAffectingSchemeSupportsAnalyzeAction;
+ (id)keyPathsForValuesAffectingPerformsAnalyzeAction;
+ (id)keyPathsForValuesAffectingCanContinueInDevicePicker;
+ (id)keyPathsForValuesAffectingShouldSkipDevicePicker;
+ (id)keyPathsForValuesAffectingDefaultBotName;
+ (id)keyPathsForValuesAffectingHasSufficientSCMInfoToCreateBot;
+ (id)sourceControlLogAspect;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *localSCMWorkspaceBlueprintOriginal; // @synthesize localSCMWorkspaceBlueprintOriginal=_localSCMWorkspaceBlueprintOriginal;
@property(nonatomic) BOOL consultSchemeForConfiguration; // @synthesize consultSchemeForConfiguration=_consultSchemeForConfiguration;
@property(nonatomic) BOOL redefineBot; // @synthesize redefineBot=_redefineBot;
@property(nonatomic) BOOL shouldSaveArchiveExportOptions; // @synthesize shouldSaveArchiveExportOptions=_shouldSaveArchiveExportOptions;
@property(retain, nonatomic) XCSArchiveExportOptions *archiveExportOptions; // @synthesize archiveExportOptions=_archiveExportOptions;
@property(retain, nonatomic) XCSProvisioningConfiguration *provisioningConfiguration; // @synthesize provisioningConfiguration=_provisioningConfiguration;
@property(nonatomic) BOOL useParallelDeviceTesting; // @synthesize useParallelDeviceTesting=_useParallelDeviceTesting;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) BOOL supportsRunningOnlyDisabledTests; // @synthesize supportsRunningOnlyDisabledTests=_supportsRunningOnlyDisabledTests;
@property(nonatomic) long long accountReachability; // @synthesize accountReachability=_accountReachability;
@property(retain, nonatomic) NSArray *additionalBuildArguments; // @synthesize additionalBuildArguments=_additionalBuildArguments;
@property(retain, nonatomic) NSDictionary *buildEnvironmentVariables; // @synthesize buildEnvironmentVariables=_buildEnvironmentVariables;
@property(nonatomic) long long schemeRecoveryType; // @synthesize schemeRecoveryType=_schemeRecoveryType;
@property(nonatomic) long long schemeValidity; // @synthesize schemeValidity=_schemeValidity;
@property(readonly, copy, nonatomic) NSArray *botRepositories; // @synthesize botRepositories=_botRepositories;
@property(copy, nonatomic) CDUnknownBlockType blueprintLoadedCallback; // @synthesize blueprintLoadedCallback=_blueprintLoadedCallback;
@property(nonatomic) long long rememberAuthenticationChoice; // @synthesize rememberAuthenticationChoice=_rememberAuthenticationChoice;
@property(nonatomic) BOOL shareOrCommitScheme; // @synthesize shareOrCommitScheme=_shareOrCommitScheme;
@property(nonatomic) BOOL needsCommitAndPushUponCompletion; // @synthesize needsCommitAndPushUponCompletion=_needsCommitAndPushUponCompletion;
@property(nonatomic) BOOL creationComplete; // @synthesize creationComplete=_creationComplete;
@property(retain, nonatomic) NSArray *createEditBotValidationErrors; // @synthesize createEditBotValidationErrors=_createEditBotValidationErrors;
@property(retain, nonatomic) NSError *createEditBotError; // @synthesize createEditBotError=_createEditBotError;
@property(nonatomic) BOOL hasSufficientSCMInfoToCreateBot; // @synthesize hasSufficientSCMInfoToCreateBot=_hasSufficientSCMInfoToCreateBot;
@property(nonatomic) unsigned long long minutesAfterHourToIntegrate; // @synthesize minutesAfterHourToIntegrate=_minutesAfterHourToIntegrate;
@property(nonatomic) unsigned long long hourOfIntegration; // @synthesize hourOfIntegration=_hourOfIntegration;
@property(nonatomic) long long weeklyScheduleDay; // @synthesize weeklyScheduleDay=_weeklyScheduleDay;
@property(nonatomic) unsigned long long periodicScheduleInterval; // @synthesize periodicScheduleInterval=_periodicScheduleInterval;
@property(nonatomic) unsigned long long scheduleType; // @synthesize scheduleType=_scheduleType;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSSet *preflightIgnoredRepositoryIdentifiers; // @synthesize preflightIgnoredRepositoryIdentifiers=_preflightIgnoredRepositoryIdentifiers;
@property(nonatomic) long long preflightRepositoryAuthenticationStatus; // @synthesize preflightRepositoryAuthenticationStatus=_preflightRepositoryAuthenticationStatus;
@property(nonatomic) long long initialRepositoryAuthenticationStatus; // @synthesize initialRepositoryAuthenticationStatus=_initialRepositoryAuthenticationStatus;
@property(copy, nonatomic) CDUnknownBlockType toolchainsChangedHandler; // @synthesize toolchainsChangedHandler=_toolchainsChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType devicesChangedHandler; // @synthesize devicesChangedHandler=_devicesChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType platformsChangedHandler; // @synthesize platformsChangedHandler=_platformsChangedHandler;
@property(retain, nonatomic) XCSUIDevicesContext *devicesContext; // @synthesize devicesContext=_devicesContext;
@property(nonatomic) BOOL performsUpgradeIntegration; // @synthesize performsUpgradeIntegration=_performsUpgradeIntegration;
@property(nonatomic) BOOL createsThinnedApps; // @synthesize createsThinnedApps=_createsThinnedApps;
@property(nonatomic) BOOL exportsProductFromArchive; // @synthesize exportsProductFromArchive=_exportsProductFromArchive;
@property(nonatomic) BOOL runOnlyDisabledTests; // @synthesize runOnlyDisabledTests=_runOnlyDisabledTests;
@property(retain, nonatomic) NSArray *testLocalizations; // @synthesize testLocalizations=_testLocalizations;
@property(nonatomic) unsigned long long codeCoveragePreference; // @synthesize codeCoveragePreference=_codeCoveragePreference;
@property(nonatomic) BOOL performsArchiveAction; // @synthesize performsArchiveAction=_performsArchiveAction;
@property(nonatomic) BOOL performsTestAction; // @synthesize performsTestAction=_performsTestAction;
@property(nonatomic) BOOL performsAnalyzeAction; // @synthesize performsAnalyzeAction=_performsAnalyzeAction;
@property(retain, nonatomic) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(nonatomic) unsigned long long buildsFromCleanSchedule; // @synthesize buildsFromCleanSchedule=_buildsFromCleanSchedule;
@property(retain, nonatomic) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *existingBotID; // @synthesize existingBotID=_existingBotID;
@property(retain, nonatomic) NSURL *sshKeyFolderURL; // @synthesize sshKeyFolderURL=_sshKeyFolderURL;
@property(retain, nonatomic) NSMapTable *workingCopiesToRemoteRepositories; // @synthesize workingCopiesToRemoteRepositories=_workingCopiesToRemoteRepositories;
@property(nonatomic) BOOL preserveExistingServerBlueprint; // @synthesize preserveExistingServerBlueprint=_preserveExistingServerBlueprint;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *existingSCMWorkspaceBlueprint; // @synthesize existingSCMWorkspaceBlueprint=_existingSCMWorkspaceBlueprint;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *updatedBotSCMWorkspaceBlueprint; // @synthesize updatedBotSCMWorkspaceBlueprint=_updatedBotSCMWorkspaceBlueprint;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *localSCMWorkspaceBlueprint; // @synthesize localSCMWorkspaceBlueprint=_localSCMWorkspaceBlueprint;
@property(nonatomic) BOOL hasValidLocalSCMBlueprint; // @synthesize hasValidLocalSCMBlueprint=_hasValidLocalSCMBlueprint;
@property(nonatomic) BOOL disableSourceControlSettings; // @synthesize disableSourceControlSettings=_disableSourceControlSettings;
@property(nonatomic) BOOL disableWorkspaceSpecificSettings; // @synthesize disableWorkspaceSpecificSettings=_disableWorkspaceSpecificSettings;
@property(retain, nonatomic) XCSUIService *uiService; // @synthesize uiService=_uiService;
@property(copy, nonatomic) NSString *defaultBotName; // @synthesize defaultBotName=_defaultBotName;
@property(copy, nonatomic) NSString *botName; // @synthesize botName=_botName;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void).cxx_destruct;
- (BOOL)isSchemeValid;
- (void)fixSchemeProblem;
- (BOOL)devicesContext:(id)arg1 isPairedProxyDeviceRequiredForScheme:(id)arg2;
- (BOOL)devicesContext:(id)arg1 isAppThinningSupportedByRunDestination:(id)arg2;
- (id)devicesContext:(id)arg1 architectureForRunDestination:(id)arg2;
- (id)devicesContext:(id)arg1 platformIdentifierForRunDestination:(id)arg2;
- (id)devicesContext:(id)arg1 runDestinationsForScheme:(id)arg2;
- (void)devicesContext:(id)arg1 didUpdateToolchains:(id)arg2;
- (void)devicesContext:(id)arg1 didUpdateDevices:(id)arg2;
- (void)devicesContext:(id)arg1 didUpdatePlatforms:(id)arg2;
- (void)devicesContext:(id)arg1 toolchainsForCurrentService:(CDUnknownBlockType)arg2;
- (void)devicesContext:(id)arg1 devicesForCurrentService:(CDUnknownBlockType)arg2;
- (void)devicesContext:(id)arg1 platformsForCurrentService:(CDUnknownBlockType)arg2;
- (void)devicesContext:(id)arg1 didEndListeningToService:(id)arg2;
- (void)devicesContext:(id)arg1 willBeginListeningToService:(id)arg2;
@property(retain, nonatomic) XCSToolchain *overrideToolchain;
@property(readonly, nonatomic) XCSDeviceSpecification *deviceSpecification;
- (void)_loadServerHostnameForService:(id)arg1;
- (void)redefineSCMBlueprintsFromLocalBlueprint;
@property(readonly, copy, nonatomic) NSArray *additionalValidationRepositories;
@property(readonly, copy, nonatomic) NSArray *allRepositoriesInLocalBlueprint;
@property(readonly, copy, nonatomic) NSArray *repositoriesInBotBlueprintAndInWorkspace;
@property(readonly, copy, nonatomic) NSArray *repositoriesInBotBlueprintButNotInWorkspace;
@property(readonly, copy, nonatomic) NSArray *repositoriesInWorkspaceButNotInBotBlueprint;
@property(retain, nonatomic) XCSBot *bot;
@property(readonly, nonatomic) BOOL schemeSupportsArchiveAction;
@property(readonly, nonatomic) BOOL schemeSupportsTestAction;
@property(readonly, nonatomic) BOOL schemeSupportsAnalyzeAction;
@property(readonly, nonatomic) NSArray *availableOverrideToolchainsForScheme;
@property(readonly, nonatomic) NSArray *supportedBuildConfigurationsForScheme;
@property(readonly, nonatomic) BOOL canContinueInDevicePicker;
@property(readonly, nonatomic) BOOL shouldSkipDevicePicker;
@property(readonly, nonatomic) BOOL schemeSupportsAppThinning;
@property(readonly, nonatomic) IDEWorkspace *workspace;
- (id)initWithBot:(id)arg1 workspaceTabController:(id)arg2 editingMode:(long long)arg3 disableWorkspaceSpecificSettings:(BOOL)arg4 blueprintLoadedCallback:(CDUnknownBlockType)arg5;
- (id)initWithWorkspaceTabController:(id)arg1 selectedService:(id)arg2 editingMode:(long long)arg3 redefineBot:(id)arg4 blueprintLoadedCallback:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

