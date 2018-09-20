//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/IDELocalizationController-Protocol.h>

@class DVTStackBacktrace, IDELocalizationExportAction, IDELocalizationExporter, NSArrayController, NSString;

@interface IDELocalizationExportController : DVTViewController <IDELocalizationController>
{
    BOOL _includeNonLocalizedResources;
    BOOL _complete;
    IDELocalizationExportAction *_action;
    NSArrayController *_targetLanguagesController;
    NSString *_exportFileType;
    IDELocalizationExporter *_worker;
}

+ (id)keyPathsForValuesAffectingCanIncludeNonLocalizedResources;
+ (void)initialize;
@property BOOL complete; // @synthesize complete=_complete;
@property(retain) IDELocalizationExporter *worker; // @synthesize worker=_worker;
@property BOOL includeNonLocalizedResources; // @synthesize includeNonLocalizedResources=_includeNonLocalizedResources;
@property(copy) NSString *exportFileType; // @synthesize exportFileType=_exportFileType;
@property(retain) NSArrayController *targetLanguagesController; // @synthesize targetLanguagesController=_targetLanguagesController;
@property(retain, nonatomic) IDELocalizationExportAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (void)startLocalizationOperationForWorkspace:(id)arg1 buildParameters:(id)arg2;
@property(readonly) BOOL canIncludeNonLocalizedResources;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)_configuredSavePanel;
- (void)restoreUserChoices;
- (void)saveUserChoices;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
