//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class HFByteArray;

@interface HFByteArrayProxiedData : NSData
{
    NSData *serializedData;
    HFByteArray *byteArray;
    unsigned long long length;
}

- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const void *)bytes;
- (id)_getRetainedBacking;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithByteArray:(id)arg1;

@end
