//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerMTLSupport/GPUProgramPerformanceReportProvider-Protocol.h>

@class GPUReportEditor;

__attribute__((visibility("hidden")))
@interface GPUMTLProgramPerformanceReportProvider : NSObject <GPUProgramPerformanceReportProvider>
{
    GPUReportEditor *_reportEditor;
}

- (void).cxx_destruct;
- (id)generateProgramPerformanceTree;
- (id)programPerformanceTotalItem;
- (id)initWithReportEditor:(id)arg1;

@end

