//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCBuildSupport/NSObject-Protocol.h>

@class IDEPIFGUID;
@protocol IDEPIFSerializer;

@protocol IDEPIFGenerating <NSObject>
@property(readonly) IDEPIFGUID *PIFGUID;
- (id)pifRepresentation:(id <IDEPIFSerializer>)arg1;
@end
