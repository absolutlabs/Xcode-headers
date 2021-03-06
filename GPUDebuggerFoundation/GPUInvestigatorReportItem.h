//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

#import <GPUDebuggerFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface GPUInvestigatorReportItem : GPUTraceOutlineItem <DVTInvalidation>
{
    GPUTraceOutlineItem *_currentAutomaticItem;
    NSString *_reportUUID;
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *reportUUID; // @synthesize reportUUID=_reportUUID;
@property(retain, nonatomic) GPUTraceOutlineItem *currentAutomaticItem; // @synthesize currentAutomaticItem=_currentAutomaticItem;
- (void).cxx_destruct;
- (id)archive;
@property(readonly) unsigned long long hash;
- (void)setParent:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithController:(id)arg1 parent:(id)arg2 identifier:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

