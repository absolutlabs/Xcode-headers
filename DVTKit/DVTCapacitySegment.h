//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSString;

@interface DVTCapacitySegment : NSObject
{
    double _value;
    NSColor *_color;
    NSString *_label;
}

@property(copy) NSString *label; // @synthesize label=_label;
@property(retain) NSColor *color; // @synthesize color=_color;
@property double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithValue:(double)arg1 color:(id)arg2 label:(id)arg3;

@end

