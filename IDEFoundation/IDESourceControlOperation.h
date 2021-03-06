//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class DVTObservingToken, IDESourceControlRequest, NSArray, NSString;

@interface IDESourceControlOperation : DVTOperation
{
    NSArray *_result;
    IDESourceControlRequest *_request;
    NSString *_rawInput;
    NSString *_rawStandardOutput;
    NSString *_rawErrorOutput;
    unsigned int _scmPowerAssertion;
    DVTObservingToken *_isFinishedToken;
    BOOL _waitToParseData;
    BOOL _allowsSleep;
    BOOL _userInitiated;
}

@property BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
@property BOOL allowsSleep; // @synthesize allowsSleep=_allowsSleep;
@property BOOL waitToParseData; // @synthesize waitToParseData=_waitToParseData;
@property(readonly) IDESourceControlRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(retain) NSArray *result; // @synthesize result=_result;
- (void)cancel;
@property(retain) NSString *rawErrorOutput; // @synthesize rawErrorOutput=_rawErrorOutput;
@property(retain) NSString *rawStandardOutput; // @synthesize rawStandardOutput=_rawStandardOutput;
@property(retain) NSString *rawInput; // @synthesize rawInput=_rawInput;
- (void)dealloc;
- (void)main;
- (id)initWithRequest:(id)arg1;

@end

