//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFindResult, NSNumber;

@interface IDEFindResultDisplayRecord : NSObject
{
    BOOL _competedChildrenFault;
    BOOL _expandedWhileFitlered;
    BOOL _expandedWhileUnfitlered;
    NSNumber *_rowHeight;
    DVTFindResult *_replaceState;
}

@property(retain) DVTFindResult *replaceState; // @synthesize replaceState=_replaceState;
@property(retain) NSNumber *rowHeight; // @synthesize rowHeight=_rowHeight;
@property BOOL expandedWhileUnfitlered; // @synthesize expandedWhileUnfitlered=_expandedWhileUnfitlered;
@property BOOL expandedWhileFitlered; // @synthesize expandedWhileFitlered=_expandedWhileFitlered;
@property BOOL competedChildrenFault; // @synthesize competedChildrenFault=_competedChildrenFault;
- (void).cxx_destruct;
- (BOOL)wasExpandedWhileFilterIsActive:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1 filterIsActive:(BOOL)arg2;
- (id)description;

@end
