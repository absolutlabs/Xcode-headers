//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEFlightChecking-Protocol.h>

@class DVTStackBacktrace, IDEAppIDFeatureCoordinator, NSError, NSString;

@interface IDEAppIDAbstractFlightCheck : NSObject <IDEFlightChecking>
{
    BOOL _hidden;
    BOOL _failed;
    IDEAppIDFeatureCoordinator *_coordinator;
    NSError *_resolutionError;
}

+ (id)keyPathsForValuesAffectingAutomaticallyResolvable;
+ (id)keyPathsForValuesAffectingRequiresAccountAndTeamSelection;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)initialize;
@property(retain, nonatomic) NSError *resolutionError; // @synthesize resolutionError=_resolutionError;
@property(nonatomic) BOOL failed; // @synthesize failed=_failed;
@property(retain, nonatomic) IDEAppIDFeatureCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly) BOOL hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *resolvingTitle;
@property(readonly, copy, nonatomic) NSString *pastTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)validate;
- (void)unresolveWithContext:(id)arg1;
- (void)resolveWithContext:(id)arg1;
- (void)revert;
@property(readonly, nonatomic, getter=isAutomaticallyResolvable) BOOL automaticallyResolvable;
@property(readonly, nonatomic, getter=isLongRunning) BOOL longRunning;
@property(readonly, nonatomic) BOOL requiresAccountAndTeamSelection;
@property(readonly, nonatomic) int status;
- (void)_updateState;
- (id)expectedFeaturesWithError:(id *)arg1;
- (void)_setUpObservations;
- (id)initWithAppIDFeatureCoordinator:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

