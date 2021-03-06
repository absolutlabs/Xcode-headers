//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEBatchFindSourceRuleEditorCriterion : NSObject
{
    NSString *_identifier;
    Class _fileSourceClass;
    id _value;
}

+ (id)uniqueSeparatorItem;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) Class fileSourceClass; // @synthesize fileSourceClass=_fileSourceClass;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBatchFindSourceRuleEditorCriterion:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isSeparatorItem;
- (id)initWithIdentifier:(id)arg1 fileSourceClass:(Class)arg2;
- (id)initWithIdentifier:(id)arg1 value:(id)arg2 fileSourceClass:(Class)arg3;

@end

