//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEGaugeDocumentLocation.h>

@class NSString;

@interface GPUTraceGaugeDocumentLocation : IDEGaugeDocumentLocation
{
    NSString *_outlineItemUUID;
    NSString *_associatedProcessUUID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
@property(copy, nonatomic) NSString *outlineItemUUID; // @synthesize outlineItemUUID=_outlineItemUUID;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
