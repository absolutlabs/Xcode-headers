//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapDataMemo.h>

@class NSArray, NSURL;

@interface DTDTraceTapMemo : DTTapDataMemo
{
    NSURL *_fileURL;
    long long _firstFilePosition;
    NSArray *_fragments;
}

@property(retain, nonatomic) NSArray *fragments; // @synthesize fragments=_fragments;
@property(nonatomic) long long firstFilePosition; // @synthesize firstFilePosition=_firstFilePosition;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;

@end

