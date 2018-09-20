//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class DVTPlistModel, DVTPlistSelection;

@interface DVTPlistDocumentLocation : DVTDocumentLocation
{
    DVTPlistModel *_model;
    DVTPlistSelection *_selection;
    BOOL _pointsBackwards;
}

@property BOOL pointsBackwards; // @synthesize pointsBackwards=_pointsBackwards;
@property(readonly) DVTPlistModel *model; // @synthesize model=_model;
@property(readonly) DVTPlistSelection *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 model:(id)arg3 selection:(id)arg4;

@end
