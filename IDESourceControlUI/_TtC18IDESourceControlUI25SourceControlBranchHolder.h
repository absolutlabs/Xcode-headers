//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSourceControlRevisionLocation, DVTSourceControlWorkingCopy, NSImage, NSString;

@interface _TtC18IDESourceControlUI25SourceControlBranchHolder : NSObject
{
    // Error parsing type: , name: location
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: name
    // Error parsing type: , name: identifier
    // Error parsing type: , name: documentLocation
    // Error parsing type: , name: fileDataType
    // Error parsing type: , name: ideTypeIdentifier
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)pathCell_shouldDisplayChildren;
- (BOOL)isEqual:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
@property(nonatomic, readonly) NSString *navigableItem_subtitle;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) NSImage *navigableItem_image;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (BOOL)hasPersistentChildItems;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic, retain) DVTSourceControlRevisionLocation *location; // @synthesize location;

@end
