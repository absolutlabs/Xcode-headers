//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNMTLResourceBinding.h>

__attribute__((visibility("hidden")))
@interface SCNMTLSemanticResourceBinding : SCNMTLResourceBinding
{
    struct {
        CDUnknownBlockType _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_semantics;
    long long semanticsCount;
    long long bufferSize;
}

@property(nonatomic) long long bufferSize; // @synthesize bufferSize;
@property(nonatomic) long long semanticsCount; // @synthesize semanticsCount;
- (void)dealloc;

@end
