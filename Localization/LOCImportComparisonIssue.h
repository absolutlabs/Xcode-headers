//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LOCImportComparisonIssue : NSObject
{
    unsigned long long _category;
    NSString *_message;
    NSString *_importComparisonFile;
    NSString *_projectComparisonFile;
    struct _NSRange _importRange;
    struct _NSRange _projectRange;
}

@property(copy) NSString *projectComparisonFile; // @synthesize projectComparisonFile=_projectComparisonFile;
@property(copy) NSString *importComparisonFile; // @synthesize importComparisonFile=_importComparisonFile;
@property struct _NSRange projectRange; // @synthesize projectRange=_projectRange;
@property struct _NSRange importRange; // @synthesize importRange=_importRange;
@property(copy) NSString *message; // @synthesize message=_message;
@property unsigned long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)initWithCategory:(unsigned long long)arg1 message:(id)arg2 importRange:(struct _NSRange)arg3 projectRange:(struct _NSRange)arg4 importComparisonFile:(id)arg5 projectComparisonFile:(id)arg6;
- (id)initWithCategory:(unsigned long long)arg1 message:(id)arg2 importRange:(struct _NSRange)arg3 projectRange:(struct _NSRange)arg4;

@end

