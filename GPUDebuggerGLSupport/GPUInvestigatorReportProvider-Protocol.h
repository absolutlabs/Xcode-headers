//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerGLSupport/DVTInvalidation-Protocol.h>

@class DYInvestigatorFinding, GPUInvestigatorReportResource, GPUReportEditor, GPUTreeNode, NSArray, NSDictionary, NSString;

@protocol GPUInvestigatorReportProvider <DVTInvalidation>
- (void)resetReportEditorStateThatDependsOnTheInvestigatorCase;
- (NSDictionary *)findingStatisticsKeyToResourceTypeMap;
- (GPUTreeNode *)createProgramCentricTreeForGroupedFindings:(NSArray *)arg1 investigatorFinding:(DYInvestigatorFinding *)arg2;
- (NSString *)localizedStringWithKey:(NSString *)arg1 andComment:(NSString *)arg2;
- (void)showResource:(GPUInvestigatorReportResource *)arg1;
- (void)updateDisplayedFindingsWithMCSInfo:(DYInvestigatorFinding *)arg1;
- (void)updateReportWithAdditionalInfo;
- (void)addFindingToReport:(DYInvestigatorFinding *)arg1;
- (void)updateReportWithCaseData:(int)arg1;
- (id)initWithReportEditor:(GPUReportEditor *)arg1;
@end

