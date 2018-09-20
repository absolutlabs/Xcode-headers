//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <IDEModelFoundation/CDMIdentification-Protocol.h>
#import <IDEModelFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDEMappingModelDocument, NSArray, NSDictionary, NSImage, NSNull, NSNumber, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface XDDevPropertyMapping : NSManagedObject <CDMIdentification, IDEKeyDrivenNavigableItemRepresentedObject>
{
    BOOL _isObservingSourceName;
    IDEMappingModelDocument *document;
    NSNumber *uniqueID;
}

+ (id)keyPathsForValuesAffectingUserInfoDictionary;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (void)setPropertyMappingTriggerNotifications;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID;
@property(retain) IDEMappingModelDocument *document; // @synthesize document;
- (void).cxx_destruct;
- (BOOL)hasDuplicateName;
- (BOOL)isInDestinationEntity;
- (BOOL)hasValidName;
- (id)mappingStatusIcon;
- (id)possibleNames;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (BOOL)validateValueExpressionAsString:(id *)arg1 error:(id *)arg2;
- (void)setValueExpressionAsString:(id)arg1;
- (id)valueExpressionAsString;
- (void)setEntityMapping:(id)arg1;
- (id)entityMapping;
- (id)shortPropertyType;
- (Class)propertyClassType;
- (void)setUserInfo:(id)arg1;
@property(copy) NSDictionary *userInfoDictionary;
- (id)userInfo;
- (void)setUserInfoData:(id)arg1;
- (id)userInfoData;
- (void)setValueExpressionData:(id)arg1;
- (id)valueExpressionData;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (void)setValueExpression:(id)arg1;
- (id)valueExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
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

@end
