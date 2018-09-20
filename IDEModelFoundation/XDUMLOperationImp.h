//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLNamespaceImp.h>

#import <IDEModelFoundation/XDUMLOperation-Protocol.h>

@class NSMutableArray, NSString;

@interface XDUMLOperationImp : XDUMLNamespaceImp <XDUMLOperation>
{
    BOOL _isStatic;
    BOOL _isLeaf;
    BOOL _isQuery;
    NSMutableArray *_parameters;
    NSMutableArray *_returnResults;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setOwnedParameters:(id)arg1;
- (void)setIsLeaf:(BOOL)arg1;
- (void)setIsQuery:(BOOL)arg1;
- (id)newReturnParameterWithType:(id)arg1;
- (id)newParameterWithName:(id)arg1;
- (BOOL)isLeaf;
- (id)redefinitionContext;
- (id)redefinedElement;
- (id)ownedMembers;
- (id)members;
- (void)setIsStatic:(BOOL)arg1;
- (BOOL)isStatic;
- (id)featuringClassifiers;
- (id)returnResult;
- (id)formalParameters;
- (id)parameters;
- (id)type;
- (id)redefinedOperations;
- (long long)upper;
- (long long)lower;
- (BOOL)isUnique;
- (BOOL)isQuery;
- (BOOL)isOrdered;
- (id)raisedExceptions;
- (id)ownedParameters;
- (id)ownerClass;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
