//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class DVTDocumentLocation, IDEActivityLogSection, NSArray;

@protocol IDEBuildResultsOutlineDelegate <NSObject>
- (IDEActivityLogSection *)activityLogSection;
- (void)showAllMessages:(id)arg1;
- (void)doubleClickDocumentLocation:(DVTDocumentLocation *)arg1;
- (void)processNewSelectedIndexPaths:(NSArray *)arg1;
@property(nonatomic, readonly) IDEActivityLogSection *lastFindResultSection;
@property(nonatomic, readonly) struct _NSRange lastFindResultRange;
@property(nonatomic, readonly) BOOL lastFindResult;
@end
