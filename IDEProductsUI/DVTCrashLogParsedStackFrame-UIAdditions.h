//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalytics/DVTCrashLogParsedStackFrame.h>

@class NSArray;

@interface DVTCrashLogParsedStackFrame (UIAdditions)
@property(readonly, copy, nonatomic) NSArray *allFindHighlightRanges;
@property(retain, nonatomic) NSArray *imageTextFindMatchingSubranges; // @dynamic imageTextFindMatchingSubranges;
@property(retain, nonatomic) NSArray *frameTextFindMatchingSubranges; // @dynamic frameTextFindMatchingSubranges;
- (BOOL)ide_hasSymbolsWithAppName:(id)arg1 andBundleIdentifier:(id)arg2;
- (BOOL)ide_isCrashedFrameInCrashPoint:(id)arg1;
- (id)ide_presentableImageWithAppName:(id)arg1 andBundleIdentifier:(id)arg2 forCrashPoint:(id)arg3;
@end

