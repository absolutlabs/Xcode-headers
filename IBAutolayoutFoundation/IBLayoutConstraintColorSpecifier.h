//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

@interface IBLayoutConstraintColorSpecifier : NSObject
{
    NSColor *_constraintColor;
    NSColor *_conflictingConstraintsColor;
    NSColor *_misplacedConstraintsColor;
    NSColor *_ambiguousConstraintsColor;
    NSColor *_placeholderConstraintsColor;
}

@property(readonly, nonatomic) NSColor *placeholderConstraintsColor; // @synthesize placeholderConstraintsColor=_placeholderConstraintsColor;
@property(readonly, nonatomic) NSColor *ambiguousConstraintsColor; // @synthesize ambiguousConstraintsColor=_ambiguousConstraintsColor;
@property(readonly, nonatomic) NSColor *misplacedConstraintsColor; // @synthesize misplacedConstraintsColor=_misplacedConstraintsColor;
@property(readonly, nonatomic) NSColor *conflictingConstraintsColor; // @synthesize conflictingConstraintsColor=_conflictingConstraintsColor;
@property(readonly, nonatomic) NSColor *constraintColor; // @synthesize constraintColor=_constraintColor;
- (void).cxx_destruct;
- (id)initWithTheme:(id)arg1;

@end

