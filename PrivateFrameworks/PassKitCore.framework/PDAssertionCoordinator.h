/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDAssertionRequestDelegate.h>
#import <libobjc.A.dylib/PDAssertionCoordinatorExportedInterface.h>

@protocol OS_dispatch_queue, PDAssertionCoordinatorDelegate;
@class NSMutableDictionary, NSObject, PKEntitlementWhitelist, NSMutableArray, NSString;

@interface PDAssertionCoordinator : PDXPCService <PDAssertionRequestDelegate, PDAssertionCoordinatorExportedInterface> {

	NSMutableDictionary* _assertionsByType;
	NSObject*<OS_dispatch_queue> _coordinatorSerialQueue;
	PKEntitlementWhitelist* _whitelist;
	long long _suppressionPermissionState;
	NSMutableArray* _pendingAssertionRequests;
	BOOL _isForegroundApplication;
	id<PDAssertionCoordinatorDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic,__weak) id<PDAssertionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isForegroundApplication;                                    //@synthesize isForegroundApplication=_isForegroundApplication - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suppressionApplicationRegistry;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 shouldInvalidateWhenBackgrounded:(BOOL)arg3 ;
-(void)cancelPendingAssertionRequests;
-(void)_processPendingAssertionRequests;
-(void)_showAlertForContactlessInterfaceSuppression;
-(void)invalidateAssertionsForBackgroundApplicationState;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)invalidateAllAssertions;
-(void)_cancelPendingAssertionRequest:(id)arg1 ;
-(void)assertionRequestDidTimeout:(id)arg1 ;
-(void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 isValid:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
-(void)_acquireAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)assertionsOfType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<PDAssertionCoordinatorDelegate>)arg1 ;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_addRequestForAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setIsForegroundApplication:(BOOL)arg1 ;
-(id<PDAssertionCoordinatorDelegate>)delegate;
-(void)_acquireContactlessInterfaceSuppressionAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)isForegroundApplication;
-(void)processPendingAssertionRequests;
@end
