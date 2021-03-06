//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import <IDESceneKitEditor/NSCollectionViewElement-Protocol.h>

@class NSBox, NSImageView, NSString, NSTextField;

@interface SKEMaterialPickerItem : NSCollectionViewItem <NSCollectionViewElement>
{
    NSBox *_boxView;
    NSImageView *_imageView;
    NSTextField *_label;
    BOOL _shouldPrefetch;
    BOOL _prefetching;
    BOOL _loaded;
    int _dataSourceTimestamp;
}

- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)setSelected:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)prefetch;
- (void)cancelPrefetch;
- (void)prepareForReuse;
- (void)updateViewWithImage:(id)arg1;
- (void)viewDidLoad;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

