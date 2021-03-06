//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControlMobileDevice/XCTTransportProvider-Protocol.h>

@class NSString, XCTMobileDevice;
@protocol XCTDebugLogDelegate, XCTRemoteHostDiagnosticReportsSynchronizing;

@interface XCTMobileDeviceTransportProvider : NSObject <XCTTransportProvider>
{
    id <XCTDebugLogDelegate> _logDelegate;
    NSString *_identifier;
    XCTMobileDevice *_mobileDevice;
}

@property(retain) XCTMobileDevice *mobileDevice; // @synthesize mobileDevice=_mobileDevice;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
@property(readonly) id <XCTRemoteHostDiagnosticReportsSynchronizing> remoteHostDiagnosticReportsSynchronizer;
- (void)invalidate;
- (void)makeTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMobileDeviceIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

