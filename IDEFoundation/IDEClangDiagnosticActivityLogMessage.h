//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDiagnosticActivityLogMessage.h>

@interface IDEClangDiagnosticActivityLogMessage : IDEDiagnosticActivityLogMessage
{
}

+ (void)initialize;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 workingDirectory:(id)arg4 documentURL:(id)arg5;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 workingDirectory:(id)arg4;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3 documentURL:(id)arg4;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 documentURL:(id)arg3;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2 pathMap:(id)arg3;
- (id)initWithDiagnostic:(void *)arg1 timestamp:(double)arg2;

@end

