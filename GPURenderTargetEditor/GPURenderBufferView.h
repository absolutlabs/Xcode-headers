//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <GPURenderTargetEditor/DYOpenGLViewDelegate-Protocol.h>
#import <GPURenderTargetEditor/GPUTextureScrollViewDelegate-Protocol.h>

@class DYOpenGLView, GPURenderJob, GPUTextureScrollView, NSClickGestureRecognizer, NSDictionary, NSPressGestureRecognizer, NSString;
@protocol DYResource, GPURenderBufferViewStateCoordinationProtocol;

@interface GPURenderBufferView : NSView <GPUTextureScrollViewDelegate, DYOpenGLViewDelegate>
{
    DYOpenGLView *_renderView;
    GPUTextureScrollView *_scrollView;
    double _maxMagnification;
    BOOL _explicitUserScroll;
    NSDictionary *_nextState;
    NSPressGestureRecognizer *_loupeLongPressGestureRecognizer;
    NSClickGestureRecognizer *_loupeDeepClickGestureRecognizer;
    NSClickGestureRecognizer *_loupeThirdButtonGestureRecognizer;
    BOOL _flipAboutX;
    BOOL _flipAboutY;
    BOOL _disableResizeFit;
    id <DYResource> _resource;
    GPURenderJob *_renderJob;
    NSString *_title;
    id <GPURenderBufferViewStateCoordinationProtocol> _coordinator;
    struct CGSize _titleSize;
    struct CGRect _focusRect;
}

@property(nonatomic) BOOL explicitUserScroll; // @synthesize explicitUserScroll=_explicitUserScroll;
@property(nonatomic) BOOL disableResizeFit; // @synthesize disableResizeFit=_disableResizeFit;
@property(nonatomic) struct CGRect focusRect; // @synthesize focusRect=_focusRect;
@property(nonatomic) BOOL flipAboutY; // @synthesize flipAboutY=_flipAboutY;
@property(nonatomic) BOOL flipAboutX; // @synthesize flipAboutX=_flipAboutX;
@property(nonatomic) __weak id <GPURenderBufferViewStateCoordinationProtocol> coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) GPURenderJob *renderJob; // @synthesize renderJob=_renderJob;
@property(retain, nonatomic) id <DYResource> resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (void)dumpImage:(id)arg1 asRaw:(BOOL)arg2;
- (unsigned long long)_renderJobOverlayOptions;
- (BOOL)_refreshScrollViewWithStateUpdate:(BOOL)arg1;
- (void)focusOnImageRect:(struct CGRect)arg1;
- (struct CGRect)imageRectScreen;
- (void)synchronizeWithView:(id)arg1;
- (void)draw;
- (void)openGLViewDidLoadImage:(id)arg1;
- (void)scrollViewDidScrollOrMagnify:(id)arg1;
- (BOOL)isPixelInRenderMaskAtPosition:(struct CGPoint)arg1;
- (void)hideLoupe;
- (void)showLoupeAtPosition:(struct CGPoint)arg1 makeFirstResponder:(BOOL)arg2;
- (void)_updateLoupe;
- (void)_loupeViewGesture:(id)arg1;
@property(nonatomic) struct CGPoint loupePosition;
@property(readonly, nonatomic) BOOL isLoupeVisible;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setScaleToFitWithUserInitiated:(BOOL)arg1;
@property(nonatomic) double scale;
@property(readonly, nonatomic) BOOL resourceFlipped;
@property(readonly, nonatomic) double maximumScale;
@property(readonly, nonatomic) double minimumScale;
@property(retain, nonatomic) NSDictionary *state;
@property(readonly, nonatomic) struct CGRect visibleResourceRect;
@property(readonly, nonatomic) struct CGSize resourceSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_GPURenderBufferViewInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

