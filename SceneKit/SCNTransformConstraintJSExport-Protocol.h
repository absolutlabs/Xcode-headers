//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@protocol SCNTransformConstraintJSExport <JSExport>
+ (id)orientationConstraintInWorldSpace:(BOOL)arg1 withBlock:(struct SCNVector4 (^)(SCNNode *, struct SCNVector4))arg2;
+ (id)positionConstraintInWorldSpace:(BOOL)arg1 withBlock:(struct SCNVector3 (^)(SCNNode *, struct SCNVector3))arg2;
+ (id)transformConstraintInWorldSpace:(BOOL)arg1 withBlock:(struct CATransform3D (^)(SCNNode *, struct CATransform3D))arg2;
@end
