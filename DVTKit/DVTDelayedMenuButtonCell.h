//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSColor, NSImage, NSMenu, NSMenuItem;
@protocol DVTDelayedMenuButtonDelegate;

@interface DVTDelayedMenuButtonCell : NSButtonCell
{
    NSMenuItem *_currentMenuItem;
    NSMenu *_trampolineMenu;
    NSImage *_rolloverActiveImage;
    NSImage *_rolloverPressedImage;
    BOOL _ignoredAction;
    BOOL _senderOfButtonActionIsButton;
    BOOL _delegateRespondsToWillSetCurrentMenuItem;
    BOOL _delegateRespondsToUpdatedMenu;
    BOOL _buttonWantsMenuHidden;
    BOOL _showMenuImmediatleyWhenButtonPressed;
    BOOL _lockImageToLeftEdge;
    BOOL _suppressMenuIndicator;
    BOOL _useNSButtonImageDrawing;
    id <DVTDelayedMenuButtonDelegate> _delegate;
    NSImage *_activeImage;
    NSImage *_disabledImage;
    NSImage *_pressedImage;
    NSColor *_arrowColor;
    NSImage *_arrowImage;
    struct CGPoint _menuIndicatorInset;
}

@property BOOL useNSButtonImageDrawing; // @synthesize useNSButtonImageDrawing=_useNSButtonImageDrawing;
@property struct CGPoint menuIndicatorInset; // @synthesize menuIndicatorInset=_menuIndicatorInset;
@property(copy, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) NSColor *arrowColor; // @synthesize arrowColor=_arrowColor;
@property BOOL suppressMenuIndicator; // @synthesize suppressMenuIndicator=_suppressMenuIndicator;
@property BOOL lockImageToLeftEdge; // @synthesize lockImageToLeftEdge=_lockImageToLeftEdge;
@property BOOL showMenuImmediatleyWhenButtonPressed; // @synthesize showMenuImmediatleyWhenButtonPressed=_showMenuImmediatleyWhenButtonPressed;
@property(nonatomic) BOOL buttonWantsMenuHidden; // @synthesize buttonWantsMenuHidden=_buttonWantsMenuHidden;
@property BOOL senderOfButtonActionIsButton; // @synthesize senderOfButtonActionIsButton=_senderOfButtonActionIsButton;
@property(copy, nonatomic) NSImage *pressedImage; // @synthesize pressedImage=_pressedImage;
@property(copy, nonatomic) NSImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(copy, nonatomic) NSImage *activeImage; // @synthesize activeImage=_activeImage;
@property(nonatomic) __weak id <DVTDelayedMenuButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (void)_updateAlternateImage;
- (void)_updateImage;
- (id)_rolloverPressedImage;
- (id)_rolloverActiveImage;
- (void)_drawDropdownUsingFullImageRect:(struct CGRect)arg1;
- (void)_drawImage:(id)arg1 centeredInRect:(struct CGRect)arg2;
- (id)_rolloverImageForImage:(id)arg1 size:(struct CGSize)arg2;
- (void)_validateTrampolineMenu:(id)arg1;
- (id)target;
- (SEL)action;
@property(copy) NSMenuItem *currentMenuItem;
- (void)setMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)dvt_validateItem:(id)arg1;
- (void)copyAttributesFromMenuItem:(id)arg1 toMenuItem:(id)arg2;
- (void)trampolineMenuFired:(id)arg1;
- (void)performAction:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)awakeFromNib;
- (BOOL)_shouldShowMenu;
- (double)popUpDelay;

@end

