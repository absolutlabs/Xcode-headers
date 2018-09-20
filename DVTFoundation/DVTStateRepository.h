//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStateToken, NSMapTable, NSMutableDictionary, NSString;
@protocol DVTStateRepositoryDelegate;

@interface DVTStateRepository : NSObject
{
    NSString *_identifier;
    DVTStateRepository *_parentRepository;
    DVTStateToken *_parentToken;
    NSMutableDictionary *_currentState;
    NSMapTable *_tokenByIdentifierMapping;
    id <DVTStateRepositoryDelegate> _delegate;
}

+ (id)_primitiveReadStateFromData:(id)arg1;
+ (id)_primitiveStateDataForState:(id)arg1 identifier:(id)arg2 error:(id *)arg3;
+ (void)initialize;
@property(retain) id <DVTStateRepositoryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)readStateFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)writeStateToURL:(id)arg1 error:(id *)arg2;
- (id)readStateFromData:(id)arg1 error:(id *)arg2;
- (id)stateDataOrError:(id *)arg1;
- (void)_pullStateFromDictionary:(id)arg1;
- (void)clearCurrentState;
- (void)deleteStateFromParentRepository;
- (void)collectStateFromRegisteredObjects;
- (void)cloneCurrentStateDataFromRepository:(id)arg1;
- (id)currentState;
- (void)cloneStateForIdentifier:(id)arg1 toIdentifier:(id)arg2;
- (void)setStateIsClone:(BOOL)arg1 forIdentifier:(id)arg2;
- (id)_stateForIdentifier:(id)arg1;
- (void)_setState:(id)arg1 forIdentifier:(id)arg2;
- (void)tokenDidChangeState:(id)arg1;
- (void)updateCurrentStateFromDictionary:(id)arg1;
- (BOOL)pushStateToRepositoryAndReturnError:(id *)arg1;
- (void)_invalidateAllTokens;
- (void)_updateStateIfNeeded;
- (void)tokenWillInvalidate:(id)arg1;
- (id)identifierForRegisteredObject:(id)arg1;
- (void)unregisterObjectWithIdentifier:(id)arg1;
- (BOOL)registerObject:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
- (void)_registerChildRepository:(id)arg1 withIdentifier:(id)arg2;
- (id)_currentState;
- (id)_parentRepository;
- (id)_tokenMapping;
- (id)identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 inParentRepository:(id)arg2;
- (id)initWithIdentifier:(id)arg1 inParentStateToken:(id)arg2;

@end
