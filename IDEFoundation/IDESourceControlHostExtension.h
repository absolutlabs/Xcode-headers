//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEExtension.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface IDESourceControlHostExtension : IDEExtension
{
    NSMutableDictionary *_outstandingCommandInvocations;
    NSArray *_endpoints;
    NSDictionary *_endpointsByIdentifier;
}

+ (void)startLocatingSourceControlHostExtensions;
+ (void)_verifyBuiltInExtensionsFound;
+ (id)endpointForIdentifier:(id)arg1;
+ (id)endpointsForURL:(id)arg1;
+ (id)endpointForURL:(id)arg1;
+ (id)sortedSourceControlHostExtensions;
+ (id)knownOrderedExtensionIdentifiers;
+ (id)knownExtensionNameForIdentifier:(id)arg1;
+ (id)sourceControlHostExtensions;
+ (void)initialize;
@property(readonly, copy) NSDictionary *endpointsByIdentifier; // @synthesize endpointsByIdentifier=_endpointsByIdentifier;
@property(readonly, copy) NSArray *endpoints; // @synthesize endpoints=_endpoints;
- (void).cxx_destruct;
- (void)_logExtensionCall:(BOOL)arg1 selector:(SEL)arg2;
- (void)usernameFromURL:(id)arg1 endpointIdentifier:(id)arg2 url:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)listSSHKeys:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)repositoryMetadata:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 repository:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)uploadSSHKey:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 publicSSHKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)validateSSHKey:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 publicSSHKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)user:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)membership:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 options:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)searchRepositories:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 query:(id)arg4 pageCompletion:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)repositories:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 type:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createRepository:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 owner:(id)arg4 name:(id)arg5 description:(id)arg6 homepage:(id)arg7 private:(BOOL)arg8 completion:(CDUnknownBlockType)arg9;
- (void)unstar:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 repository:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)star:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 repository:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)avatar:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 email:(id)arg4 size:(unsigned int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)avatar:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 username:(id)arg4 size:(unsigned int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)loginHelpURL:(id)arg1 endpointIdentifier:(id)arg2 url:(id)arg3 username:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)webURLComponents:(id)arg1 endpointIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)webURL:(id)arg1 endpointIdentifier:(id)arg2 repositoryURL:(id)arg3 tag:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)webURL:(id)arg1 endpointIdentifier:(id)arg2 repositoryURL:(id)arg3 branch:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)webURL:(id)arg1 endpointIdentifier:(id)arg2 repositoryURL:(id)arg3 sha:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)webURL:(id)arg1 endpointIdentifier:(id)arg2 repositoryURL:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestPersonalAccessToken:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 twoFactorCode:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestAuthCode:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)validateCredentials:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)capabilities:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)displayName:(id)arg1;
- (void)cancelOperationWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)finishRestart:(CDUnknownBlockType)arg1;
- (BOOL)finishStop:(CDUnknownBlockType)arg1;
- (BOOL)finishStart:(CDUnknownBlockType)arg1;
- (void)_instantiateProperEndpointDefinitions:(id)arg1;
- (id)description;
- (id)initWithExtension:(id)arg1;
- (id)extensionServiceInterface;
- (id)extensionBootstrapClassName;

@end

