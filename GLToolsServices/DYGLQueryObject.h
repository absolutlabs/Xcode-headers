//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLToolsServices/DYGLResourceObject.h>

@interface DYGLQueryObject : DYGLResourceObject
{
    BOOL _isActive;
    unsigned int _result;
}

@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) unsigned int result; // @synthesize result=_result;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;

@end
