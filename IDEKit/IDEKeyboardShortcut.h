//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSString;

@interface IDEKeyboardShortcut : NSObject <NSCopying>
{
    IDEKeyboardShortcut *_nextKeyboardShortcut;
    id _cachedRawKeyboardShortcutOrNull;
    NSString *_keyEquivalent;
    unsigned long long _modifierMask;
}

+ (id)humanReadableNameForCommandKey;
+ (id)humanReadableNameForShiftKey;
+ (id)humanReadableNameForOptionKey;
+ (id)humanReadableNameForControlKey;
+ (id)humanReadableNameForKeyEquivalentCharacter:(unsigned short)arg1;
+ (id)translateKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2;
+ (id)emptyKeyboardShortcut;
+ (id)keyboardShortcutFromStringRepresentation:(id)arg1;
+ (id)_keyboardShortcutWithRawKeyEquivalent:(id)arg1 rawModifierMask:(unsigned long long)arg2;
+ (id)keyboardShortcutWithKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2;
@property(readonly) unsigned long long modifierMask; // @synthesize modifierMask=_modifierMask;
@property(readonly) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
- (void).cxx_destruct;
@property(copy) IDEKeyboardShortcut *nextKeyboardShortcut;
@property(readonly) NSString *stringRepresentation;
@property(readonly) NSString *humanReadableName;
@property(readonly) NSString *localizedDisplayName;
@property(readonly) NSString *displayName;
@property(readonly) NSString *localizedModifierMaskDisplayName;
@property(readonly) NSString *modifierMaskDisplayName;
@property(readonly) NSString *localizedKeyEquivalentDisplayName;
@property(readonly) NSString *keyEquivalentDisplayName;
@property(readonly, getter=isEmpty) BOOL empty;
@property(readonly) IDEKeyboardShortcut *rawKeyboardShortcut;
@property(readonly) unsigned long long rawModifierMask;
@property(readonly) NSString *rawKeyEquivalent;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKeyboardShortcut:(id)arg1;
- (id)_rawCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyEquivalent:(id)arg1 modifierMask:(unsigned long long)arg2;
- (id)initWithRawKeyEquivalent:(id)arg1 rawModifierMask:(unsigned long long)arg2;
- (id)attributedStringValue;
- (double)alignmentOffset;
- (void)_computeMetaKeyGlyphWidths;
- (double)_widthOfKeyEquivalentCharacter:(unsigned short)arg1 usingAttributes:(id)arg2;

@end

