//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/Xcode3TargetEditorImageModel-Protocol.h>

@class DVTFilePath, NSString;

@interface Xcode3MacOSImageModel : NSObject <Xcode3TargetEditorImageModel>
{
    NSString *_scale;
    DVTFilePath *_imageFilePath;
    struct CGSize _imageSize;
}

@property(retain) DVTFilePath *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain) NSString *scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (id)minimumOSVersion;
- (id)orientation;
- (id)nameSuffix;
- (int)imageType;
- (id)device;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

