//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNNode;

@protocol SCNLookAtConstraintJSExport <JSExport>
+ (id)lookAtConstraintWithTarget:(SCNNode *)arg1;
@property(nonatomic) BOOL gimbalLockEnabled;
@property(nonatomic) struct SCNVector3 upVector;
@property(nonatomic) struct SCNVector3 localFront;
@property(nonatomic) struct SCNVector3 targetOffset;
@property(retain, nonatomic) SCNNode *target;
@end

