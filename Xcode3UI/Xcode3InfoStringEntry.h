//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3InfoEntry.h>

@protocol Xcode3InfoEditorListContentProvider;

@interface Xcode3InfoStringEntry : Xcode3InfoEntry
{
    id <Xcode3InfoEditorListContentProvider> _contentProvider;
    int _controlType;
}

@property(readonly) id <Xcode3InfoEditorListContentProvider> listContentProvider; // @synthesize listContentProvider=_contentProvider;
- (void).cxx_destruct;
- (id)inspectorValue;
- (void)setInspectorValue:(id)arg1;
- (id)inspectorXML;
- (void)primitiveInvalidate;
- (id)initWithKey:(id)arg1 extension:(id)arg2 infoEditor:(id)arg3;

@end
