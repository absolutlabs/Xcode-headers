//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEmbeddingPolicy.h>

@interface IBAbstractUIViewControllerEmbeddingPolicy : IBEmbeddingPolicy
{
}

- (void)performEmbedWithObjects:(id)arg1 inDocumentEditor:(id)arg2;
- (void)performEmbedWithObjects:(id)arg1 inStoryboardDocumentEditor:(id)arg2;
- (id)embedObjects:(id)arg1 fromDocument:(id)arg2 context:(id)arg3;
- (BOOL)canEmbedObjects:(id)arg1 fromDocument:(id)arg2;
- (id)embedViewControllers:(id)arg1 fromStoryboardDocument:(id)arg2 context:(id)arg3;
- (BOOL)canEmbedViewControllers:(id)arg1 fromStoryboardDocument:(id)arg2;
- (id)viewControllersForObjects:(id)arg1 fromStoryboardDocument:(id)arg2;

@end
