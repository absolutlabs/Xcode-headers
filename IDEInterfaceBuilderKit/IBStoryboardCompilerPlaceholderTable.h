//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IBStoryboardCompilerPlaceholderTable : NSObject
{
    id _owningObject;
    NSString *_relationship;
    NSDictionary *_referencedObjectsByReferenceIDs;
    NSDictionary *_context;
}

@property(readonly) NSDictionary *context; // @synthesize context=_context;
@property(readonly) NSDictionary *referencedObjectsByReferenceIDs; // @synthesize referencedObjectsByReferenceIDs=_referencedObjectsByReferenceIDs;
@property(readonly) NSString *relationship; // @synthesize relationship=_relationship;
@property(readonly) id owningObject; // @synthesize owningObject=_owningObject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOwningObject:(id)arg1 relationship:(id)arg2 referencedObjectsByReferenceIDs:(id)arg3 context:(id)arg4;

@end
