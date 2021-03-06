//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface IBUITableViewLayoutInfo : NSObject <NSCoding>
{
    NSArray *_sections;
    NSDictionary *_sectionFrames;
    NSDictionary *_headerFrames;
    NSDictionary *_footerFrames;
    NSDictionary *_cellFrames;
}

- (void).cxx_destruct;
- (id)frameForSection:(id)arg1;
- (id)footerFrameForSection:(id)arg1;
- (id)headerFrameForSection:(id)arg1;
- (id)frameForCell:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tableLayoutInfoByApplyingHeightDelta:(double)arg1 toCell:(id)arg2;
- (id)initWithSections:(id)arg1 sectionFrames:(id)arg2 headerFrames:(id)arg3 footerFrames:(id)arg4 cellFrames:(id)arg5;
- (id)initWithTableLayoutInfo:(id)arg1 andSections:(id)arg2;

@end

