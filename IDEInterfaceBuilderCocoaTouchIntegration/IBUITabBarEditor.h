//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBViewEditor.h>

@interface IBUITabBarEditor : IBViewEditor
{
}

+ (Class)ibDropTargetResolverClass;
- (id)tabBarItemForEvent:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (id)captureImagesAndProcessGeometryOfItems:(id)arg1;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)draggedImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (id)draggedImageStateForTabBarItems:(id)arg1 withName:(id)arg2;
- (id)editedTabBar;

@end
