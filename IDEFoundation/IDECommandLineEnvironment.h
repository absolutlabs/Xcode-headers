//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEContainer, IDEMutableOverridingBuildProperties, IDERunDestination, IDEScheme, IDESchemeActionsInvocationRecord, IDEWorkspace, NSArray, NSDictionary, NSFileHandle, NSSet, NSString;
@protocol IDEBlueprintProvider;

@interface IDECommandLineEnvironment : NSObject
{
    NSArray *_arguments;
    NSDictionary *_environment;
    DVTFilePath *_workingDirectory;
    NSDictionary *_commandLineOptions;
    NSArray *_commandLineUnparsedArguments;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    IDEWorkspace *_workspace;
    IDEContainer<IDEBlueprintProvider> *_primaryBlueprintProvider;
    IDEScheme *_scheme;
    NSSet *_blueprints;
    IDEMutableOverridingBuildProperties *_buildProperties;
    NSString *_buildConfiguration;
    IDERunDestination *_runDestination;
    IDESchemeActionsInvocationRecord *_schemeActionsInvocationRecord;
}

@property(retain, nonatomic) IDESchemeActionsInvocationRecord *schemeActionsInvocationRecord; // @synthesize schemeActionsInvocationRecord=_schemeActionsInvocationRecord;
@property(retain, nonatomic) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(copy, nonatomic) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(retain, nonatomic) IDEMutableOverridingBuildProperties *buildProperties; // @synthesize buildProperties=_buildProperties;
@property(copy, nonatomic) NSSet *blueprints; // @synthesize blueprints=_blueprints;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) IDEContainer<IDEBlueprintProvider> *primaryBlueprintProvider; // @synthesize primaryBlueprintProvider=_primaryBlueprintProvider;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain, nonatomic) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain, nonatomic) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy, nonatomic) NSArray *commandLineUnparsedArguments; // @synthesize commandLineUnparsedArguments=_commandLineUnparsedArguments;
@property(copy, nonatomic) NSDictionary *commandLineOptions; // @synthesize commandLineOptions=_commandLineOptions;
@property(retain, nonatomic) DVTFilePath *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property(copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
- (void).cxx_destruct;

@end

