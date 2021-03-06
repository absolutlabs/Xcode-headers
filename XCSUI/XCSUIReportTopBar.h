//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <XCSUI/XCSUIDataSourceSnapshotsObserver-Protocol.h>

@class NSButton, XCSBot, XCSIntegration;

@interface XCSUIReportTopBar : DVTViewController <XCSUIDataSourceSnapshotsObserver>
{
    id _eventMonitor;
    XCSIntegration *_integration;
    XCSBot *_bot;
    NSButton *_idButton;
    NSButton *_editBotButton;
    NSButton *_integrateButton;
}

@property __weak NSButton *integrateButton; // @synthesize integrateButton=_integrateButton;
@property __weak NSButton *editBotButton; // @synthesize editBotButton=_editBotButton;
@property __weak NSButton *idButton; // @synthesize idButton=_idButton;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (id)workspaceTabController;
- (void)editButton:(id)arg1;
- (void)redefineButton:(id)arg1;
- (void)cleanAndIntegrate:(id)arg1;
- (void)integrate:(id)arg1;
- (id)contextBotForOperations;
- (void)copyIntegrationID:(id)arg1;
- (void)toggleID:(id)arg1;
- (void)_updateHeaderButtons;
- (id)botTitleString;
- (id)integrationTitleString;
- (void)refreshUI;
- (void)layoutTopButtons;
- (void)dataSource:(id)arg1 aclUpdateForService:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadView;

@end

