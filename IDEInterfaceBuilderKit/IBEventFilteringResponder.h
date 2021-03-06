//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@interface IBEventFilteringResponder : NSResponder
{
    unsigned long long _allowedEventsMask;
}

@property unsigned long long allowedEventsMask; // @synthesize allowedEventsMask=_allowedEventsMask;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

