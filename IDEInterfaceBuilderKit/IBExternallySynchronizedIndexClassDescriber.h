//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIndex, NSMutableDictionary;

@interface IBExternallySynchronizedIndexClassDescriber : NSObject
{
    NSMutableDictionary *_cachedClassSymbols;
    NSMutableDictionary *_cachedSubclassNames;
    NSMutableDictionary *_cachedRelationshipSymbols;
    NSMutableDictionary *_cachedRelationshipTypes;
    IDEIndex *_index;
}

@property(retain) IDEIndex *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)relationSymbolsInClassNamed:(id)arg1 ofRelationshipType:(long long)arg2;
- (id)relationSymbolsInIndexClassSymbol:(id)arg1 ofRelationshipType:(long long)arg2;
- (id)typeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 forClassNamed:(id)arg3;
- (id)subclassNamesOfClassNamed:(id)arg1;
- (id)firstClassSymbolForClassNamed:(id)arg1;
- (id)firstDocumentLocationForClassNamed:(id)arg1;
- (id)firstDocumentLocationForRelaltion:(id)arg1 ofType:(long long)arg2;
- (void)clearCaches;
- (id)init;

@end

