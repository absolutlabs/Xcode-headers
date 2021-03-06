//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEMigrationContext, NSArray, NSMutableArray, NSString;
@protocol IDEBlueprint;

@interface IDEMigrationTarget : NSObject
{
    IDEMigrationContext *_migrationContext;
    id <IDEBlueprint> _blueprint;
    NSMutableArray *_buildFiles;
    id _iconImage;
    NSString *_title;
}

@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSArray *buildFiles; // @synthesize buildFiles=_buildFiles;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(readonly) IDEMigrationContext *migrationContext; // @synthesize migrationContext=_migrationContext;
- (void).cxx_destruct;
@property(readonly) BOOL shouldMigrate;
@property(readonly) BOOL canMigrate;
@property(readonly) BOOL buildsWithClang;
@property(readonly) BOOL buildsValidArchtectures;
@property(readonly, copy) NSString *warningMessage;
- (id)latestSDK;
- (void)updateBuildSettings;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBlueprint:(id)arg1 migrationContext:(id)arg2;

@end

