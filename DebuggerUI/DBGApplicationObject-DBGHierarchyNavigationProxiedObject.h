//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGApplicationObject.h>

#import <DebuggerUI/DBGHierarchyNavigationProxiedObject-Protocol.h>
#import <DebuggerUI/DBGHierarchyNavigationRoot-Protocol.h>

@class NSString;

@interface DBGApplicationObject (DBGHierarchyNavigationProxiedObject) <DBGHierarchyNavigationRoot, DBGHierarchyNavigationProxiedObject>
- (Class)proxyHierarchyItemClass;
- (id)topLevelProxiedObjectForHierarchyNavigationCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

