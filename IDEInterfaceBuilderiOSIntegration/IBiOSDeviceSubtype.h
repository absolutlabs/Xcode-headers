//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBCocoaTouchDeviceSubtype.h>

@class IBiOSDeviceIconDescription;

@interface IBiOSDeviceSubtype : IBCocoaTouchDeviceSubtype
{
    IBiOSDeviceIconDescription *_iconDescription;
}

@property(readonly, nonatomic) IBiOSDeviceIconDescription *iconDescription; // @synthesize iconDescription=_iconDescription;
- (void).cxx_destruct;
- (BOOL)isEqualToDeviceSubtype:(id)arg1;
- (id)iconGenerationInstanceForAdaptation:(id)arg1;
- (id)initWithExtension:(id)arg1 idiom:(id)arg2;

@end

