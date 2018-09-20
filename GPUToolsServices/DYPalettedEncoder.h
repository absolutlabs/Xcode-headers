//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYEncoder.h>

@interface DYPalettedEncoder : DYEncoder
{
}

- (id)_convertTexels4Bit:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 palette:(id)arg4;
- (id)_convertTexels8Bit:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 palette:(id)arg4;
- (id)_convertPaletteRGBA8:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertPaletteRGB8:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertPaletteRGB5A1:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertPaletteRGBA4:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertPaletteRGB565:(id)arg1 numEntries:(unsigned int)arg2;
- (id)decode:(id)arg1 format:(unsigned int)arg2 level:(unsigned int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 bytesPerRow:(unsigned int)arg6 options:(id)arg7;
- (id)encode:(id)arg1 level:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 options:(id)arg5 errorCode:(int *)arg6;
- (BOOL)supportsFormat:(unsigned int)arg1;

@end
