//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDELogStoreManageable-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTDocumentLocation, DVTFilePath, IDEActivityLogSectionRecorder, IDETypeIdentifier, NSArray, NSData, NSMapTable, NSMutableArray, NSMutableString, NSString, NSURL;

@interface IDEActivityLogSection : NSObject <NSCopying, IDELogStoreManageable>
{
    IDEActivityLogSectionRecorder *_recorder;
    IDETypeIdentifier *_domainType;
    NSString *_title;
    double _timeStartedRecording;
    double _timeStoppedRecording;
    NSMutableArray *_subsections;
    NSMutableString *_text;
    NSMutableArray *_messages;
    id _representedObject;
    NSString *_subtitle;
    DVTDocumentLocation *_location;
    NSString *_signature;
    NSString *_commandDetailDesc;
    unsigned short _totalTestFailureCount;
    unsigned short _totalErrorCount;
    unsigned short _totalWarningCount;
    unsigned short _totalAnalyzerWarningCount;
    unsigned short _totalAnalyzerResultCount;
    unsigned short _sectionType;
    unsigned short _sectionAuthority;
    unsigned short _resultCode;
    BOOL _wasCancelled;
    BOOL _isQuiet;
    BOOL _wasFetchedFromCache;
    BOOL _hasAddedIssueMessage;
    NSString *_uniqueIdentifier;
    NSString *_localizedResultString;
    struct os_unfair_lock_s _lock;
    NSMapTable *_customDataObjectsByClass;
    BOOL _hideTimingInformation;
    BOOL _collectMetrics;
    DVTFilePath *_filePath;
    NSData *_xcbuildSignature;
    NSString *_overrideMetricsPath;
}

+ (id)sectionWithContentsOfFile:(id)arg1 error:(id *)arg2;
+ (id)sectionByDeserializingData:(id)arg1 error:(id *)arg2;
+ (unsigned long long)serializationFormatCompatibilityVersion;
+ (unsigned long long)serializationFormatVersion;
+ (id)makeInstanceWithContentsOfFile:(id)arg1 error:(id *)arg2;
+ (id)UUIDWithURL:(id)arg1;
+ (id)URLWithUUID:(id)arg1;
+ (id)defaultMainLogDomainType;
+ (id)defaultLogSectionDomainType;
+ (Class)logRecorderClass;
+ (void)initialize;
@property(copy) NSString *overrideMetricsPath; // @synthesize overrideMetricsPath=_overrideMetricsPath;
@property BOOL collectMetrics; // @synthesize collectMetrics=_collectMetrics;
@property BOOL hideTimingInformation; // @synthesize hideTimingInformation=_hideTimingInformation;
@property(copy) NSData *xcbuildSignature; // @synthesize xcbuildSignature=_xcbuildSignature;
@property(readonly, copy) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *localizedResultString; // @synthesize localizedResultString=_localizedResultString;
@property BOOL hasAddedIssueMessage; // @synthesize hasAddedIssueMessage=_hasAddedIssueMessage;
@property BOOL wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;
@property(readonly) IDETypeIdentifier *domainType; // @synthesize domainType=_domainType;
@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property unsigned short sectionAuthority; // @synthesize sectionAuthority=_sectionAuthority;
- (void).cxx_destruct;
- (id)indexPathForMessageOrSection:(id)arg1;
- (id)indexPathForMessageOrSection:(id)arg1 messageOrSectionEqualityTest:(CDUnknownBlockType)arg2;
- (id)messageOrSectionAtIndexPath:(id)arg1;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;
- (id)serializedData;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserverUsingBlock:(CDUnknownBlockType)arg1;
- (id)enumerateMessagesUsingBlock:(CDUnknownBlockType)arg1;
- (id)enumerateSubsectionsRecursivelyUsingPreorderBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSubsectionsRecursivelyUsingPreorderBlock:(CDUnknownBlockType)arg1 returningFilteredSections:(id)arg2;
- (id)customDataObjectForClass:(Class)arg1;
- (void)registerCustomDataObject:(id)arg1 forClass:(Class)arg2;
@property(readonly, copy) DVTFilePath *coverageArchiveFilePath;
@property(readonly, copy) DVTFilePath *coverageReportFilePath;
@property(readonly) BOOL hasCoverageData;
@property(readonly, copy) DVTFilePath *testableSummariesPlistFilePath;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *defaultFileName;
@property(readonly) IDEActivityLogSection *auxiliaryLogSection;
@property(readonly) IDEActivityLogSection *logSection;
@property(readonly) NSURL *logSectionURL;
- (id)emittedOutputText;
- (void)logRecorder:(id)arg1 setTitle:(id)arg2;
- (void)logRecorder:(id)arg1 setCommandDetailDescription:(id)arg2;
@property(readonly) NSString *commandDetailDescription;
@property(readonly) DVTDocumentLocation *location;
- (void)logRecorder:(id)arg1 setWasFetchedFromCache:(BOOL)arg2;
- (void)logRecorder:(id)arg1 setIsQuiet:(BOOL)arg2;
@property(readonly) BOOL isQuiet;
- (void)logRecorder:(id)arg1 adjustMessageCountsWithTestFailureDelta:(long long)arg2 errorCountDelta:(long long)arg3 warningCountDelta:(long long)arg4 analyzerWarningDelta:(long long)arg5 analyzerResultDelta:(long long)arg6;
@property(readonly) unsigned long long totalNumberOfAnalyzerResults;
@property(readonly) unsigned long long totalNumberOfAnalyzerWarnings;
@property(readonly) unsigned long long totalNumberOfWarnings;
@property(readonly) unsigned long long totalNumberOfErrors;
@property(readonly) unsigned long long totalNumberOfTestFailures;
@property(readonly, copy) NSString *description;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (void)checkMessageCounts;
@property(readonly) IDEActivityLogSectionRecorder *recorder;
@property(readonly) BOOL isRecording;
- (void)logRecorder:(id)arg1 setWasCancelled:(BOOL)arg2;
@property(readonly) long long resultCode;
@property(readonly) BOOL wasCancelled;
- (void)logRecorder:(id)arg1 addMessage:(id)arg2;
@property(readonly) NSArray *messages;
- (void)logRecorder:(id)arg1 appendText:(id)arg2;
- (void)setAdditionalDescription:(id)arg1;
@property(readonly, copy) NSString *subtitle;
@property(readonly) NSString *text;
- (void)logRecorder:(id)arg1 addSubsection:(id)arg2;
@property(readonly, copy) NSArray *subsections;
@property(readonly) double timeStoppedRecording;
@property(readonly) double timeStartedRecording;
@property(copy) NSString *signature;
@property(readonly, copy) NSString *title;
@property(readonly) id representedObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly) long long sectionType;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (id)initWithSectionType:(long long)arg1 domainType:(id)arg2 title:(id)arg3;
- (id)initCommandInvocationWithDomainType:(id)arg1 title:(id)arg2 detailDescription:(id)arg3 filePath:(id)arg4;
- (id)initCommandInvocationWithDomainType:(id)arg1 title:(id)arg2 detailDescription:(id)arg3 location:(id)arg4;
- (id)initMajorGroupWithDomainType:(id)arg1 title:(id)arg2 representedObject:(id)arg3 subtitle:(id)arg4;
- (id)initMainLogWithDomainType:(id)arg1 title:(id)arg2;
- (id)initWithSectionType:(long long)arg1 domainType:(id)arg2 title:(id)arg3 location:(id)arg4;
- (id)initWithSectionType:(long long)arg1 domainType:(id)arg2 title:(id)arg3 subtitle:(id)arg4 location:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

