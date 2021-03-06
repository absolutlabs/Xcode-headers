//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBCIFilterEffectsInspector.h>

@class DVTBindingToken, DVTBorderedView, DVTObservingToken, DVTStackView_ML, DVTTableView, IDEControlGroup, IDEInspectorContentView, NSArrayController, NSIndexSet, NSView;

@interface IBToManyCIFilterEffectsInspector : IBCIFilterEffectsInspector
{
    IDEInspectorContentView *_inspectedFilterView;
    DVTObservingToken *_filtersArrayControllerSelectionIndexesObservingToken;
    DVTBindingToken *_filtersArraySelectedIndexBindingToken;
    DVTBindingToken *_filtersArrayContentBindingToken;
    DVTObservingToken *_filtersObservingToken;
    NSIndexSet *_lastKnownIndexes;
    BOOL _canEditSelectedFilter;
    NSArrayController *_filtersArrayController;
    NSView *_filterListContainerView;
    DVTTableView *_filtersTableView;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    DVTStackView_ML *_stackView;
}

@property(retain) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(retain) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(retain) DVTTableView *filtersTableView; // @synthesize filtersTableView=_filtersTableView;
@property(retain) NSView *filterListContainerView; // @synthesize filterListContainerView=_filterListContainerView;
@property(retain) NSArrayController *filtersArrayController; // @synthesize filtersArrayController=_filtersArrayController;
@property BOOL canEditSelectedFilter; // @synthesize canEditSelectedFilter=_canEditSelectedFilter;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)removeSelectedFilters:(id)arg1;
- (void)addNewFilter:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)setupFilterInspectorViewAfterLoading;
- (void)setupFiltersTableViewAfterLoading;
- (void)setupControlBarAfterLoading;
- (id)localDragPasteboardType;
- (void)updateCanEditSelectedFilter;
- (id)filterChoices;
- (id)excludedFilterNamesForFilterChoices;
- (id)excludedCategoriesForFilterChoices;
- (void)setContent:(id)arg1;
- (void)updateTableViewContentString;
- (id)filters;
- (id)defaultFilterName;
- (id)inspectedFilterIndexesKeyPath;
- (id)inspectedFilterNameKeyPath;
- (id)noFiltersDisplayString;
- (id)bindableFiltersKeyPath;
- (void)primitiveInvalidate;

@end

