//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBBasePreviewRecipe.h>

@class IBCocoaTouchDeviceSubtype, IBCocoaTouchIdiom, IBUISimulatedOrientationMetrics;

@interface IBCocoaTouchPreviewRecipe : IBBasePreviewRecipe
{
}

- (id)targetRuntime;
@property(readonly) IBUISimulatedOrientationMetrics *orientationMetrics;
- (id)screenMetrics;
- (id)idiom;
@property(readonly) IBCocoaTouchIdiom *cocoaTouchIdiom;
@property(readonly) IBCocoaTouchDeviceSubtype *deviceSubtype;
- (id)propertyListRepresentation;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithLanguage:(id)arg1 deviceConfiguration:(id)arg2;

@end
