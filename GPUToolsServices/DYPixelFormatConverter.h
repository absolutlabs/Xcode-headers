//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYPixelFormatConverter : NSObject
{
}

+ (unsigned int)getGenericFormatForGLInternalFormat:(unsigned int)arg1;
+ (unsigned int)getGenericFormatForGLFormat:(unsigned int)arg1 type:(unsigned int)arg2 format:(unsigned int)arg3;
+ (void)getGLFormatForGenericFormat:(unsigned int)arg1 glInternalFormatOut:(unsigned int *)arg2 glFormatOut:(unsigned int *)arg3 glTypeOut:(unsigned int *)arg4;
+ (void)_initDictionaries;
+ (void)initialize;

@end

