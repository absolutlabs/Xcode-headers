//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface DVTMarkdownLine : NSObject
{
    NSMutableArray *tokens;
    unsigned long long lineNumber;
    struct _NSRange range;
}

- (void).cxx_destruct;
- (BOOL)isEqualToLine:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) unsigned long long lineNumber;
@property(readonly, nonatomic) struct _NSRange range;
- (void)appendToken:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1 lineNumber:(unsigned long long)arg2;

@end
