//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerMTLSupport/GPUInvestigatorReportProvider-Protocol.h>

@class DVTStackBacktrace, GPUReportEditor, NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLInvestigatorReportProvider : NSObject <GPUInvestigatorReportProvider>
{
    GPUReportEditor *_reportEditor;
}

- (void).cxx_destruct;
- (void)resetReportEditorStateThatDependsOnTheInvestigatorCase;
- (id)findingStatisticsKeyToResourceTypeMap;
- (id)createProgramCentricTreeForGroupedFindings:(id)arg1 investigatorFinding:(id)arg2;
- (id)localizedStringWithKey:(id)arg1 andComment:(id)arg2;
- (void)showResource:(id)arg1;
- (void)updateDisplayedFindingsWithMCSInfo:(id)arg1;
- (void)updateReportWithAdditionalInfo;
- (void)addFindingToReport:(id)arg1;
- (void)updateReportWithCaseData:(int)arg1;
- (void)primitiveInvalidate;
- (id)initWithReportEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

