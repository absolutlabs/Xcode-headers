//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface SCNGeometryElement : NSObject <NSSecureCoding>
{
    // Error parsing type: ^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}II^{__C3DMeshElement}CCC{?=c^{__CFData}I^I{?=qq}CB}fff^v^{__C3DMeshSource}[2]^{?}I}, name: _meshElement
    NSData *_elementData;
    long long _primitiveType;
    long long _primitiveCount;
    struct _NSRange _primitiveRange;
    long long _indicesChannelCount;
    BOOL _interleavedIndicesChannels;
    long long _bytesPerIndex;
    float _pointSize;
    float _minimumPointScreenSpaceRadius;
    float _maximumPointScreenSpaceRadius;
}

+ (id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4;
+ (id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6;
+     // Error parsing type: @24@0:8^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}II^{__C3DMeshElement}CCC{?=c^{__CFData}I^I{?=qq}CB}fff^v^{__C3DMeshSource}[2]^{?}I}16, name: geometryElementWithMeshElementRef:
+ (id)geometryElementWithMDLSubmesh:(id)arg1;
- (double)_computeACMR;
- (void)_optimizeTriangleIndices;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
-     // Error parsing type: ^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}II^{__C3DMeshElement}CCC{?=c^{__CFData}I^I{?=qq}CB}fff^v^{__C3DMeshSource}[2]^{?}I}16@0:8, name: meshElement
@property(readonly, nonatomic) long long bytesPerIndex;
@property(nonatomic) double maximumPointScreenSpaceRadius;
@property(nonatomic) double minimumPointScreenSpaceRadius;
@property(nonatomic) double pointSize;
@property(nonatomic) struct _NSRange primitiveRange;
- (const void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (BOOL)hasInterleavedIndicesChannels;
- (long long)indicesChannelCount;
@property(readonly, nonatomic) long long primitiveCount;
@property(readonly, nonatomic) long long primitiveType;
- (unsigned long long)indexCount;
- (void)_printData;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 indicesChannelCount:(long long)arg4 interleavedIndicesChannels:(BOOL)arg5 bytesPerIndex:(long long)arg6;
- (id)description;
- (void)dealloc;
- (id)init;
-     // Error parsing type: @24@0:8^{__C3DMeshElement={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}II^{__C3DMeshElement}CCC{?=c^{__CFData}I^I{?=qq}CB}fff^v^{__C3DMeshSource}[2]^{?}I}16, name: initWithMeshElement:

@end
