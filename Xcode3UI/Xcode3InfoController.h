//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol IDEBlueprint;

@interface Xcode3InfoController : NSObject
{
    id <IDEBlueprint> _blueprint;
}

@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
- (void).cxx_destruct;
- (id)initWithBlueprint:(id)arg1;

// Remaining properties
@property(copy) NSDictionary *infoDictionary; // @dynamic infoDictionary;
@property(readonly) NSArray *slices; // @dynamic slices;

@end

