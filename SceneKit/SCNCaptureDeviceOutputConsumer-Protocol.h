//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/NSObject-Protocol.h>

@class AVCaptureDevice;

@protocol SCNCaptureDeviceOutputConsumer <NSObject>
@property(retain, nonatomic) AVCaptureDevice *captureDevice;
- (void)setPixelBuffer:(struct __CVBuffer *)arg1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

