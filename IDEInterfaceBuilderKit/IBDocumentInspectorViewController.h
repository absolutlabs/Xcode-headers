//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

@class DVTDelayedInvocation, DVTNotificationToken, IBMutableIdentityDictionary, NSArray, NSString;

@interface IBDocumentInspectorViewController : IDEInspectorViewController
{
    DVTNotificationToken *_documentUpdatedDependenciesNotificationToken;
    BOOL _isInstalled;
    IBMutableIdentityDictionary *_observingTokensByDocument;
    DVTDelayedInvocation *_usesAutolayoutStateInvocation;
    DVTDelayedInvocation *_targetMenusInvocation;
    BOOL _developmentEnabled;
    BOOL _deploymentEnabled;
    NSArray *_deploymentMenuItems;
    NSArray *_developmentMenuItems;
    NSString *_deploymentSummary;
    NSString *_developmentSummary;
    long long _usesAutolayoutState;
    long long _useConfigurationsState;
    long long _useSafeAreaLayoutGuidesState;
}

+ (BOOL)canInspectFileReferenceNavigableItems:(id)arg1;
+ (BOOL)matchesFileReference:(id)arg1;
+ (id)documentPlatform;
@property BOOL deploymentEnabled; // @synthesize deploymentEnabled=_deploymentEnabled;
@property BOOL developmentEnabled; // @synthesize developmentEnabled=_developmentEnabled;
@property(nonatomic) long long useSafeAreaLayoutGuidesState; // @synthesize useSafeAreaLayoutGuidesState=_useSafeAreaLayoutGuidesState;
@property(nonatomic) long long useConfigurationsState; // @synthesize useConfigurationsState=_useConfigurationsState;
@property(nonatomic) long long usesAutolayoutState; // @synthesize usesAutolayoutState=_usesAutolayoutState;
@property(copy) NSString *developmentSummary; // @synthesize developmentSummary=_developmentSummary;
@property(copy) NSString *deploymentSummary; // @synthesize deploymentSummary=_deploymentSummary;
@property(copy) NSArray *developmentMenuItems; // @synthesize developmentMenuItems=_developmentMenuItems;
@property(copy) NSArray *deploymentMenuItems; // @synthesize deploymentMenuItems=_deploymentMenuItems;
- (void).cxx_destruct;
- (void)setContent:(id)arg1;
- (void)startObservingDocuments:(id)arg1;
- (void)stopObservingDocuments:(id)arg1;
- (void)updateUsesAutolayoutAndConfigurationsState;
- (void)refreshTargetMenus;
- (id)menuItemsForDocumentDependencies:(id)arg1 andDocuments:(id)arg2 type:(id)arg3 summary:(id *)arg4;
- (id)menuItemForDefaultVersionOfDependency:(id)arg1 andDocuments:(id)arg2;
- (BOOL)isValidVersion:(long long)arg1 forDocumentDependency:(id)arg2 documents:(id)arg3 andType:(id)arg4;
- (id)versionItemWithTitle:(id)arg1 version:(id)arg2 andDependency:(id)arg3;
- (id)categoryHeaderItemWithTitle:(id)arg1;
- (BOOL)shouldShowLaunchScreenCheckbox;
- (void)disableConfigurationsAndAutolayout:(BOOL)arg1 forDocuments:(id)arg2;
- (void)enableAutolayoutAndConfigurations:(BOOL)arg1 andSafeAreas:(BOOL)arg2 forDocuments:(id)arg3;
- (void)finishDisablingConfigurationsAndAutolayout:(BOOL)arg1 forDocuments:(id)arg2 withAlert:(id)arg3;
- (void)finishEnablingAutolayoutAndConfigurations:(BOOL)arg1 andSafeAreas:(BOOL)arg2 arbitrate:(BOOL)arg3 forDocuments:(id)arg4;
- (id)alertAccessoryViewForDisablingConfigurations;
- (id)informativeTextForDisablingConfigurations;
- (id)informativeTextForEnablingConfigurations;
- (id)userLabelForConfigurations;
- (id)explicitVersionForUpgradingDocumentDependencyToEnableAutolayout:(id)arg1;
- (BOOL)documentNeedsToUpgradeDevelopmentTargetToEnableConfigurations:(id)arg1;
- (BOOL)documentNeedsToUpgradeDependencyToEnableAutolayout:(id)arg1;
- (id)upgradeTargetsForDocuments:(id)arg1;
- (id)autolayoutDependencyExtensionParameterForDocument:(id)arg1 matchingVersion:(long long)arg2;
- (BOOL)supportsSafeAreaLayoutGuides;
- (void)setUseSafeAreaLayoutGuidesStateForUIOnly:(long long)arg1;
- (void)setUseConfigurationsStateForUIOnly:(long long)arg1;
- (void)setUsesAutolayoutStateForUIOnly:(long long)arg1;
- (void)resetLocalizationLocking:(id)arg1;
- (void)takeDocumentDependency:(id)arg1;
- (void)applyDependencyValue:(id)arg1 toDependency:(id)arg2 forDocuments:(id)arg3;
- (void)didApplyDependencyValue:(id)arg1 toDependency:(id)arg2 forDocument:(id)arg3;
- (void)documentUpdatedDependencies:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

