//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage, NSString;

@interface GPUBadgedText : NSObject
{
    int _badge;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int badge; // @synthesize badge=_badge;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSColor *backgroundColor;
@property(readonly, nonatomic) NSImage *image;
- (id)initWithText:(id)arg1 badgeType:(int)arg2;

@end
