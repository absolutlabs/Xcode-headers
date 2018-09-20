//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString;

@interface IBAbstractViewControllerEditorPlaceholderView : NSView
{
    BOOL _showingDropHighlight;
    double _backgroundOpacity;
    unsigned long long _shadowEdgeMask;
    NSString *_title;
    NSString *_subtitle;
    NSString *_explanatoryText;
    struct CGRect _placeholderAlignmentRect;
}

@property(nonatomic, getter=isShowingDropHighlight) BOOL showingDropHighlight; // @synthesize showingDropHighlight=_showingDropHighlight;
@property(copy, nonatomic) NSString *explanatoryText; // @synthesize explanatoryText=_explanatoryText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long shadowEdgeMask; // @synthesize shadowEdgeMask=_shadowEdgeMask;
@property double backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
@property(nonatomic) struct CGRect placeholderAlignmentRect; // @synthesize placeholderAlignmentRect=_placeholderAlignmentRect;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end
