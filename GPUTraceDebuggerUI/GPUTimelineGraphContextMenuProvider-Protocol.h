//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTraceDebuggerUI/NSObject-Protocol.h>

@class NSMenu;

@protocol GPUTimelineGraphContextMenuProvider <NSObject>
- (NSMenu *)contextMenuForPlane:(const struct GPUTimelineGraphReferencePlaneCell *)arg1;
- (NSMenu *)contextMenuForItem:(const struct GPUTimelineGraphReferencePlaneCell *)arg1 atIndex:(unsigned long long)arg2;
@end
