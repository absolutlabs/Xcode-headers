//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSBundle, NSButton, NSPopUpButton, NSStackView, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI15PermissionsPane : DVTViewController
{
    // Error parsing type: , name: stackView
    // Error parsing type: , name: createAndViewBotsView
    // Error parsing type: , name: createdAndViewedByPopUp
    // Error parsing type: , name: viewOnlyPopUp
    // Error parsing type: , name: viewOnlyViews
    // Error parsing type: , name: alsoAllowCheckBox
    // Error parsing type: , name: adminRightsView
    // Error parsing type: , name: prefPane
    // Error parsing type: , name: createdByPicker
    // Error parsing type: , name: viewOnlyPicker
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)alsoAllowViewingBy:(id)arg1;
- (void)allowViewOnly:(id)arg1;
- (void)createdAndViewedBy:(id)arg1;
- (void)alsoAllowViewOnly:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSBundle *nibBundle;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak NSTextField *adminRightsView; // @synthesize adminRightsView;
@property(nonatomic) __weak NSButton *alsoAllowCheckBox; // @synthesize alsoAllowCheckBox;
@property(nonatomic) __weak NSView *viewOnlyViews; // @synthesize viewOnlyViews;
@property(nonatomic) __weak NSPopUpButton *viewOnlyPopUp; // @synthesize viewOnlyPopUp;
@property(nonatomic) __weak NSPopUpButton *createdAndViewedByPopUp; // @synthesize createdAndViewedByPopUp;
@property(nonatomic) __weak NSView *createAndViewBotsView; // @synthesize createAndViewBotsView;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;

@end

