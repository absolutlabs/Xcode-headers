//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEProductsUI/IDEProductSectionViewController.h>

#import <IDEProductsUI/DVTReplacementViewDelegate-Protocol.h>
#import <IDEProductsUI/DVTSplitViewDelegate-Protocol.h>

@class DVTObservingToken, DVTReplacementView, DVTSplitView, IDEAnalyticsPointDetailViewController, IDEAnalyticsPointOpenInProjectSheetController, IDEAnalyticsPointSourceListViewController, IDELaunchSession, IDEProductsEmptyContentViewController, NSString;

@interface IDEAnalyticsPointsViewController : IDEProductSectionViewController <DVTSplitViewDelegate, DVTReplacementViewDelegate>
{
    DVTSplitView *_splitView;
    IDEAnalyticsPointSourceListViewController *_sourceListViewController;
    IDEAnalyticsPointOpenInProjectSheetController *_openInProjectController;
    DVTReplacementView *_replacementView;
    DVTObservingToken *_analyticsPointObserver;
    DVTObservingToken *_analyticsLogObserver;
    DVTObservingToken *_analyticsPointSourceCollectionSelectionObserver;
    DVTObservingToken *_appStoreProductSourceBusyObserver;
    DVTObservingToken *_appStoreAnalyticsPointSourceBusyObserver;
    IDELaunchSession *_currentLaunchSession;
}

+ (id)debuggerPointFor:(id)arg1 workspace:(id)arg2 productVersion:(id)arg3 analyticsLog:(id)arg4 initialStackFrame:(id)arg5 error:(id *)arg6;
+ (BOOL)canShowContentForProduct:(id)arg1;
+ (id)keyPathsForValuesAffectingEmptyContentViewController;
+ (id)keyPathsForValuesAffectingDetailViewController;
+ (id)keyPathsForValuesAffectingBusy;
+ (long long)type;
+ (void)initialize;
@property(retain) IDELaunchSession *currentLaunchSession; // @synthesize currentLaunchSession=_currentLaunchSession;
@property(retain) DVTObservingToken *appStoreAnalyticsPointSourceBusyObserver; // @synthesize appStoreAnalyticsPointSourceBusyObserver=_appStoreAnalyticsPointSourceBusyObserver;
@property(retain) DVTObservingToken *appStoreProductSourceBusyObserver; // @synthesize appStoreProductSourceBusyObserver=_appStoreProductSourceBusyObserver;
@property(retain) DVTObservingToken *analyticsPointSourceCollectionSelectionObserver; // @synthesize analyticsPointSourceCollectionSelectionObserver=_analyticsPointSourceCollectionSelectionObserver;
@property(retain) DVTObservingToken *analyticsLogObserver; // @synthesize analyticsLogObserver=_analyticsLogObserver;
@property(retain) DVTObservingToken *analyticsPointObserver; // @synthesize analyticsPointObserver=_analyticsPointObserver;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) IDEAnalyticsPointOpenInProjectSheetController *openInProjectController; // @synthesize openInProjectController=_openInProjectController;
@property(retain) IDEAnalyticsPointSourceListViewController *sourceListViewController; // @synthesize sourceListViewController=_sourceListViewController;
@property __weak DVTSplitView *splitView; // @synthesize splitView=_splitView;
- (void).cxx_destruct;
- (void)_saveSourceListSplitPosition;
- (void)_restoreSourceListSplitPosition;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)splitViewDidEndLiveResize:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)_adjustAnalyticsPointAreaSplitViewWithOldSize:(struct CGSize)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)shouldShowNoSelection;
- (void)handleAction:(id)arg1 fromInspectable:(id)arg2;
- (void)productManager:(id)arg1 receivedErrors:(id)arg2 fromSource:(id)arg3;
- (void)refresh;
- (void)openProjectAtURL:(id)arg1 analyticsPoint:(id)arg2 logIndex:(unsigned long long)arg3 initialStackFrame:(id)arg4 productVersion:(id)arg5;
- (void)showOpenInProjectSheetWithCallback:(CDUnknownBlockType)arg1;
- (id)openLogInProjectDescription;
- (void)openCurrentAnalyticsPointInProjectWithInitialStackFrame:(id)arg1;
- (void)openCurrentAnalyticsPointInProject;
- (void)showSymbolInDebugNavigator:(id)arg1;
- (void)showAddAccount;
- (void)showAccountPreferences;
- (void)refreshProducts:(id)arg1;
- (void)_updateDetailViewContent;
- (id)unsupportedLogsDescription;
- (id)noLogsForProductVersionDescription;
- (id)noLogsForProductDescription;
- (id)eventTypeDescription;
- (id)noLogsDescription;
- (id)busyReasonForPointIsPlaceholder:(BOOL)arg1;
- (id)_emptyViewContextualMenu;
- (void)_updateCurrentInspectable;
- (void)_updateDetailView;
- (BOOL)_shouldShowDetailView;
- (void)_updateSourceListVisibility;
- (BOOL)empty;
@property(readonly) IDEProductsEmptyContentViewController *emptyContentViewController;
@property(readonly) IDEAnalyticsPointDetailViewController *detailViewController;
- (id)busyReason;
- (BOOL)busy;
- (void)viewDidLoad;
- (void)loadView;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

