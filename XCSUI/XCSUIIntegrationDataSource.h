//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCSUIIntegrationDataSource : NSObject
{
}

+ (id)sharedDataSource;
- (void)codeCoverageForIntegration:(id)arg1 service:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)testHierarchyForIntegration:(id)arg1 service:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)integrationForBotID:(id)arg1 integrationID:(id)arg2 service:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end
