//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEDebuggerExpression : NSObject
{
    NSString *_expressionString;
    NSString *_result;
}

@property(copy) NSString *result; // @synthesize result=_result;
@property(copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
- (void).cxx_destruct;
- (void)resetResult;
- (BOOL)hasBeenEvaluated;
- (id)initWithExpressionString:(id)arg1;

@end
