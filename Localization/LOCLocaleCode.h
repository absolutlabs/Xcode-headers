//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface LOCLocaleCode : NSObject
{
    NSString *_isoLocaleCode;
    NSMutableDictionary *_localeDictionary;
}

@property(retain) NSMutableDictionary *localeDictionary; // @synthesize localeDictionary=_localeDictionary;
@property(retain) NSString *isoLocaleCode; // @synthesize isoLocaleCode=_isoLocaleCode;
- (void).cxx_destruct;
- (unsigned int)macOSEncoding;
- (BOOL)hasLprojVariants;
- (id)displayName;
- (id)conventionalLprojFolderName;
- (id)isoLprojFolderName;
- (id)conventionalLocaleName;
- (id)xmlLanguageCode;
- (id)initWithLocaleCode:(id)arg1 error:(id *)arg2;
- (id)initWithLocaleCode:(id)arg1 localeList:(id)arg2 error:(id *)arg3;

@end

