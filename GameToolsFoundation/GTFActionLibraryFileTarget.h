//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameToolsFoundation/GTFActionLibraryTarget-Protocol.h>

@class GTFActionLibraryTargetThumbnail, NSString;
@protocol NSCopying;

@interface GTFActionLibraryFileTarget : NSObject <GTFActionLibraryTarget>
{
    GTFActionLibraryTargetThumbnail *_gtf_thumbnailImage;
    NSString *_name;
}

+ (id)fileTargetWithName:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) GTFActionLibraryTargetThumbnail *gtf_thumbnailImage; // @synthesize gtf_thumbnailImage=_gtf_thumbnailImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *gtf_name;
@property(readonly, nonatomic) id <NSCopying> gtf_uid;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

