//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTSourceControlWorkingCopy, NSString, NSTextField;
@protocol IDEOperationViewDelegate;

@interface _TtC18IDESourceControlUI23NewBranchViewController : DVTViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: revisionLocation
    // Error parsing type: , name: operation
    // Error parsing type: , name: newBranchField
    // Error parsing type: , name: branchField
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)tearDownAction;
- (void)primaryAction;
- (void)willBeginSheet;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, copy) id context;
@property(nonatomic) __weak NSTextField *branchField; // @synthesize branchField;
@property(nonatomic, retain) NSTextField *newBranchField; // @synthesize newBranchField;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic) __weak id <IDEOperationViewDelegate> delegate; // @synthesize delegate;

@end
