//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@interface NSMenu (IBMenuAdditions)
+ (id)ib_menuWithDelegate:(id)arg1;
+ (id)ib_menuWithItemGroups:(id)arg1;
+ (id)ib_menuWithItems:(id)arg1;
- (void)ib_addItemWithTitle:(id)arg1 representedObject:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)ib_addItemWithTitle:(id)arg1 representedObject:(id)arg2;
- (void)ib_scaleMenuItemImagesToSize:(struct CGSize)arg1;
- (void)ib_setMenuItems:(id)arg1;
- (void)ib_addMenuItems:(id)arg1;
- (id)firstEnabledItemWithNonNilRepresentedObject;
- (id)itemWithRepresentedObject:(id)arg1;
- (void)insertItemsWithTitles:(id)arg1 andRepresentedObjects:(id)arg2 atIndex:(long long)arg3;
- (void)removeAllMenuItems;
@end

