//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class IDETest;

@interface IDELogTestsViewDocumentLocation : DVTDocumentLocation
{
    IDETest *_test;
}

@property(readonly) IDETest *test; // @synthesize test=_test;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 test:(id)arg3;

@end
