//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/NSObject-Protocol.h>

@class NSArray, NSColor;
@protocol DTObjectGridGraphDataSource, DTObjectGridGraphDelegate, DTObjectGridNode, DTObjectGridReference;

@protocol DTObjectGridGraph <NSObject>
@property(readonly, nonatomic) id <DTObjectGridReference> selectedReference;
@property(readonly, nonatomic) id <DTObjectGridNode> selectedNode;
@property(retain) NSColor *canvasBackgroundColor;
@property(copy, nonatomic) NSArray *onScreenNodeIdentifiers;
@property(nonatomic) struct CGPoint cameraPosition;
@property(readonly, nonatomic) unsigned int pivotNodeIdentifier;
@property(nonatomic) struct CGSize gridCellSize;
@property(nonatomic) __weak id <DTObjectGridGraphDelegate> delegate;
@property(nonatomic) __weak id <DTObjectGridGraphDataSource> dataSource;
- (struct CGRect)frameForNode:(id <DTObjectGridNode>)arg1;
- (void)resetZoomLevel;
- (void)adjustCameraZoomLevelWithValue:(double)arg1;
- (void)deselectAll;
- (void)selectReferenceWithIdentifier:(unsigned int)arg1;
- (void)selectNodeWithIdentifier:(unsigned int)arg1;
- (void)setPivotNodeIdentifier:(unsigned int)arg1 maintainingCoordinates:(id <DTObjectGridNode>)arg2 initialGenerations:(BOOL)arg3;
- (void)setPivotNodeIdentifier:(unsigned int)arg1 maintainingCoordinates:(id <DTObjectGridNode>)arg2;
@end

