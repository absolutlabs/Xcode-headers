//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL;
@protocol DNTDisplayTreeIndexItem;

@protocol DNTDisplayTreeIndexDeserializationDelegate
- (id <DNTDisplayTreeIndexItem>)entityWithURL:(NSURL *)arg1 isGroup:(BOOL)arg2 rawLanguage:(int)arg3 name:(NSString *)arg4 kind:(long long)arg5;
- (id <DNTDisplayTreeIndexItem>)groupMarkerWithParent:(id <DNTDisplayTreeIndexItem>)arg1 name:(NSString *)arg2;
- (id <DNTDisplayTreeIndexItem>)collectionWithRawLanguageValue:(int)arg1;
- (id <DNTDisplayTreeIndexItem>)rootIndexItem;
@end

