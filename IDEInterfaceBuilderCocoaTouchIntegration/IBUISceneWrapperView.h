//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIInstantiatedView-Protocol.h>

@class IBUIView, NSImage, NSNumber, NSString;

@interface IBUISceneWrapperView : NSView <IBUIInstantiatedView>
{
    NSNumber *_currentScaleFactor;
    IBUIView *_wrappedView;
    NSImage *_cachedImage;
}

@property(retain, nonatomic) NSImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(readonly, nonatomic) IBUIView *wrappedView; // @synthesize wrappedView=_wrappedView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)ibDidInstantiateView;
- (id)ibUnderlyingViewInstance;
- (id)initWithWrappedView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
