//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEContainer.h>

@interface IDEFolder : IDEContainer
{
    struct os_unfair_lock_s _generationLock;
    int _superclassActivity;
    unsigned long long _updateOperationGeneration;
    BOOL _didSetSuperclassActivity;
    unsigned long long _readingCount;
}

+ (BOOL)supportsMultipleInstancesPerFilePath;
+ (BOOL)_observeContainerDataFilePathsForChanges;
+ (BOOL)_THREAD_shouldAddFileWithName:(id)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (id)containerTypeDisplayName;
+ (id)containerFileDataType;
+ (BOOL)foldersShouldSortFirst;
+ (void)initialize;
- (id)sortedSubitemsForSubitems:(id)arg1;
- (void)_sortSubitems;
- (void)_respondToFileChangeOnDiskWithFilePath:(id)arg1;
- (void)_filePathDidChange:(id)arg1;
- (void)_decrementReadingCount;
- (void)_incrementReadingCount;
@property(readonly, nonatomic) BOOL isReading;
- (void)setActivity:(int)arg1;
- (id)_THREAD_fileNamesAtFilePath:(id)arg1;
- (id)newFileReferenceForChildFilePath:(id)arg1;
- (void)_addSubcontainer:(id)arg1;
- (void)_updateSubitemsWithFileNames:(id)arg1;
- (void)_addFileReferenceNamed:(id)arg1;
- (id)_itemBaseFilePathForFilePath:(id)arg1;
- (id)createRootGroup;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)openQuickly_shouldIncludeInResults;

@end
