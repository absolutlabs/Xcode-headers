//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/IDECommandHandler-Protocol.h>
#import <IDESourceControlUI/IDECommandHandlerVendor-Protocol.h>

@interface _TtC18IDESourceControlUI32SourceControlDebugCommandHandler : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    // Error parsing type: , name: stashEnabled
    // Error parsing type: , name: trainyardEnabled
    // Error parsing type: , name: rebaseEnabled
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
- (CDUnknownBlockType).cxx_destruct;
- (void)showConflictResolutionWindow:(id)arg1;
- (void)switchEnabledRebase:(id)arg1;
- (void)switchEnabledTrainyard:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)init;

@end

