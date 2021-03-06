//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoggingSupportHost/OSActivityEvent.h>

@interface OSActivityCreateEvent : OSActivityEvent
{
    unsigned long long _creatorActivityID;
    unsigned long long _creatorProcessUniqueID;
    unsigned long long _senderProgramCounter;
}

@property(readonly, nonatomic) unsigned long long senderProgramCounter; // @synthesize senderProgramCounter=_senderProgramCounter;
@property(readonly, nonatomic) unsigned long long creatorProcessUniqueID; // @synthesize creatorProcessUniqueID=_creatorProcessUniqueID;
@property(readonly, nonatomic) unsigned long long creatorActivityID; // @synthesize creatorActivityID=_creatorActivityID;
- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

