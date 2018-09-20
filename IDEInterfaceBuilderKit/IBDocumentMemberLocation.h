//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

#import <IDEInterfaceBuilderKit/IDEIssueCoalescingDocumentLocationIdentifiable-Protocol.h>

@class IBAttributeSearchLocation, IBMemberID;
@protocol NSCopying;

@interface IBDocumentMemberLocation : DVTDocumentLocation <IDEIssueCoalescingDocumentLocationIdentifiable>
{
    IBMemberID *_memberIdentifier;
    IBAttributeSearchLocation *_attributeSearchLocation;
}

@property(readonly, copy) IBAttributeSearchLocation *attributeSearchLocation; // @synthesize attributeSearchLocation=_attributeSearchLocation;
@property(readonly, copy) IBMemberID *memberIdentifier; // @synthesize memberIdentifier=_memberIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSCopying> issueCoalescingIdentifier;
- (id)description;
- (BOOL)ibDocumentMemberLocationAttributesAreEqualForDocumentLocation:(id)arg1;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (id)copyWithURL:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 memberIdentifier:(id)arg3 attributeSearchLocation:(id)arg4;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 memberIdentifier:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) id <NSCopying> issueCoalescingGroupIdentifier; // @dynamic issueCoalescingGroupIdentifier;

@end
