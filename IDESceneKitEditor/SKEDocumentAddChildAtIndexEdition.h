//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@class SCNNode;

@interface SKEDocumentAddChildAtIndexEdition : SKEDocumentEdition
{
    SCNNode *_parentNode;
    SCNNode *_childNode;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 parentNode:(id)arg2 childNode:(id)arg3 index:(unsigned long long)arg4;

@end
