//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBObjectContainer, NSDictionary, NSKeyedArchiver, NSKeyedUnarchiver;

@protocol IBObjectContainerArchivingDelegate <NSObject>
- (void)objectContainerClass:(Class)arg1 didCreateObjectContainerWithCoder:(NSKeyedUnarchiver *)arg2;
- (void)objectContainerClass:(Class)arg1 willCreateObjectContainerWithCoder:(NSKeyedUnarchiver *)arg2;
- (void)objectContainer:(IBObjectContainer *)arg1 didCreateDataRepresentationWithCoder:(NSKeyedArchiver *)arg2 context:(NSDictionary *)arg3;
- (void)objectContainer:(IBObjectContainer *)arg1 willCreateDataRepresentationWithCoder:(NSKeyedArchiver *)arg2 context:(NSDictionary *)arg3;
@end

