//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEActivityLogRecord, IDEEntityIdentifier, IDEFileReference, IDELogNavigatorGroupedSchemeItemsCache, IDEWorkspace, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDELogNavigatorItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    BOOL _showStatusImage;
    BOOL _updatingItems;
    BOOL _showSubtitle;
    IDEEntityIdentifier *_entityIdentifier;
    NSString *_name;
    NSImage *_image;
    NSArray *_items;
    DVTDocumentLocation *_documentLocation;
    DVTFileDataType *_fileDataType;
    IDEActivityLogRecord *_logRecord;
    IDEWorkspace *_workspace;
    CDUnknownBlockType _updateBlock;
    NSArray *_observationTokens;
    IDELogNavigatorGroupedSchemeItemsCache *_groupedSchemeItemsCache;
}

+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingNavigableItem_progressValue;
+ (id)keyPathsForValuesAffectingNavigableItem_contentDocumentLocation;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (void)initialize;
@property(retain, nonatomic) IDELogNavigatorGroupedSchemeItemsCache *groupedSchemeItemsCache; // @synthesize groupedSchemeItemsCache=_groupedSchemeItemsCache;
@property(retain, nonatomic) NSArray *observationTokens; // @synthesize observationTokens=_observationTokens;
@property(nonatomic) BOOL showSubtitle; // @synthesize showSubtitle=_showSubtitle;
@property(nonatomic) BOOL updatingItems; // @synthesize updatingItems=_updatingItems;
@property(copy) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(nonatomic) BOOL showStatusImage; // @synthesize showStatusImage=_showStatusImage;
@property(retain, nonatomic) IDEActivityLogRecord *logRecord; // @synthesize logRecord=_logRecord;
@property(retain, nonatomic) DVTFileDataType *fileDataType; // @synthesize fileDataType=_fileDataType;
@property(retain, nonatomic) DVTDocumentLocation *documentLocation; // @synthesize documentLocation=_documentLocation;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) IDEEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (BOOL)isEqualToIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly, nonatomic) long long navigableItem_progressValue; // @dynamic navigableItem_progressValue;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation; // @dynamic navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType; // @dynamic navigableItem_documentType;
@property(readonly, nonatomic) NSImage *navigableItem_image; // @dynamic navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name; // @dynamic navigableItem_name;
- (void)_updateItemsUsingSchemeLogRecords;
- (id)byTimeItemsForActivityLogRecord:(id)arg1;
- (id)_timelineLogItemForRecord:(id)arg1 showSubtitle:(BOOL)arg2;
- (BOOL)_shouldShowTimeline;
- (id)_buildLogItemForRecord:(id)arg1 logName:(id)arg2 icon:(id)arg3 showSubtitle:(BOOL)arg4;
- (id)_coverageReportItemForRecord:(id)arg1 showSubtitle:(BOOL)arg2;
- (id)_buildReportItemForRecord:(id)arg1 showSubtitle:(BOOL)arg2;
- (id)_testReportItemForRecord:(id)arg1 showSubtitle:(BOOL)arg2;
- (id)timelineFileDataType;
- (id)coverageLogFileDataType;
- (id)testLogFileDataType;
- (id)buildLogFileDataType;
- (void)update;
- (id)initWithName:(id)arg1 image:(id)arg2 workspace:(id)arg3 documentLocation:(id)arg4 fileDataType:(id)arg5 activityLogRecord:(id)arg6 activityLogUpdateBlock:(CDUnknownBlockType)arg7;
- (id)initWithEntityIdentifier:(id)arg1 workspace:(id)arg2;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
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

