//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface DYVMBuffer : NSMutableData
{
    struct VMBuffer *_vmBuffer;
}

@property(readonly, nonatomic) struct VMBuffer *vmBuffer; // @synthesize vmBuffer=_vmBuffer;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithVMBuffer:(struct VMBuffer *)arg1;

@end
