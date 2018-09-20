//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/CDMIdentification-Protocol.h>
#import <IDEModelFoundation/CDMXMLCoding-Protocol.h>
#import <IDEModelFoundation/DVTInvalidation-Protocol.h>
#import <IDEModelFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class CDMEntity, CDMModel, CDMProperty, DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, NSArray, NSImage, NSMutableArray, NSNull, NSNumber, NSPredicate, NSString, NSURL, NSUndoManager, _TtC13DVTFoundation9DVTSymbol;

@interface CDMFetchIndex : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, CDMIdentification, CDMXMLCoding, DVTInvalidation>
{
    NSNumber *_uniqueID;
    NSMutableArray *_fetchIndexElements;
    NSString *_name;
    NSPredicate *_partialIndexPredicate;
    unsigned long long _elementType;
    CDMModel *_model;
    CDMEntity *_entity;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingInspectedElementType;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(retain) CDMEntity *entity; // @synthesize entity=_entity;
@property(retain) CDMModel *model; // @synthesize model=_model;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (void)generateBackwardsCompatibilityErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
@property(readonly, copy) NSArray *representedEntityCompoundIndex;
@property(readonly) CDMProperty *representedIndexedProperty;
- (void)moveFetchIndexElementAtIndex:(unsigned long long)arg1 toIndex:(long long)arg2;
- (void)removeFetchIndexElement:(id)arg1;
- (void)addFetchIndexElement:(id)arg1;
- (id)fetchIndexElementWithUniqueID:(id)arg1;
@property unsigned long long elementType; // @synthesize elementType=_elementType;
@property(copy) NSPredicate *partialIndexPredicate; // @synthesize partialIndexPredicate=_partialIndexPredicate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)encodeXMLElement;
- (void)awakeAfterXMLDecoding;
- (id)initWithXMLElement:(id)arg1 owner:(id)arg2 error:(id *)arg3;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 belongingToModel:(id)arg2;
- (id)init;
- (id)initInModel:(id)arg1;
@property(readonly) NSUndoManager *undoManager;
- (void)_registerUndoBlockForFoundFetchIndex:(CDUnknownBlockType)arg1;
@property unsigned long long inspectedElementType;
@property(readonly, copy) NSArray *availableElementTypeValues;
@property(readonly, copy) NSArray *availableElementTypeNames;
@property(readonly, nonatomic) NSString *navigableItem_name;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(copy) NSArray *fetchIndexElements; // @dynamic fetchIndexElements;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableArray *mutableFetchIndexElements; // @dynamic mutableFetchIndexElements;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
