//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDECoverageReportMeterBar, NSTextField;

@interface IDECoverageReportProgressBarTableCellView : NSTableCellView
{
    IDECoverageReportMeterBar *_meterBar;
    NSTextField *_progressField;
}

@property(retain, nonatomic) NSTextField *progressField; // @synthesize progressField=_progressField;
@property(retain, nonatomic) IDECoverageReportMeterBar *meterBar; // @synthesize meterBar=_meterBar;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
