//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/IDECommandHandler-Protocol.h>
#import <DebuggerUI/IDECommandHandlerVendor-Protocol.h>

@class DBGTimerGroup, NSString;

@interface DBGDebugMenuController : NSObject <IDECommandHandler, IDECommandHandlerVendor>
{
    DBGTimerGroup *_startTimerGroup;
    DBGTimerGroup *_endTimerGroup;
    int _userSetShouldSupressStopDialog;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (void).cxx_destruct;
- (id)_dylibPathFromPlugins;
- (void)viewDebugXcodeWindow:(id)arg1;
- (void)debugSessionStressTest:(id)arg1;
- (void)scheduleRunCommandsInTabController:(id)arg1 sender:(id)arg2;
- (void)cancelScheduledRunCommands;
- (void)willScheduleRunCommands;
- (BOOL)shouldCancelScheduledRunCommands;
- (id)tabControllerForCurrentWorkspaceDocument;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
