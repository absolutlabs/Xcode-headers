//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTBorderedView, NSColor, NSGradient, NSString;

@interface IDEGaugeStackedBarDetailsLabelViewController : DVTViewController
{
    DVTBorderedView *_colorView;
    NSColor *_color;
    NSGradient *_gradient;
    NSString *_value;
}

@property(copy) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)viewDidLoad;

// Remaining properties
@property(copy) NSString *title; // @dynamic title;

@end

