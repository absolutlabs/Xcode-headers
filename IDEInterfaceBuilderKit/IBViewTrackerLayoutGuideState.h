//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBLayoutManager, NSSet;

@interface IBViewTrackerLayoutGuideState : NSObject
{
    IBLayoutManager *_layoutManager;
    NSSet *_layoutGuideMatches;
    struct CGRect _layoutFrame;
}

@property(retain, nonatomic) NSSet *layoutGuideMatches; // @synthesize layoutGuideMatches=_layoutGuideMatches;
@property(retain, nonatomic) IBLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
- (void).cxx_destruct;

@end
