//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XCSDesignDocument : NSObject
{
    NSDictionary *_JSON;
}

+ (id)designDocumentsInDirectory:(id)arg1;
@property(readonly) NSDictionary *JSON; // @synthesize JSON=_JSON;
- (void).cxx_destruct;
- (id)designDocumentWithRevision:(id)arg1;
@property(readonly) NSString *anyViewName;
@property(readonly) NSString *JSONString;
@property(readonly) NSString *name;
- (id)initWithJSON:(id)arg1;
- (id)initWithContentsOfDirectory:(id)arg1;

@end
