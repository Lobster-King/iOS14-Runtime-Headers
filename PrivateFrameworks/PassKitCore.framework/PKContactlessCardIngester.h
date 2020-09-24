/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFRemoteAdminEventListener.h>

@protocol PKContactlessCardIngesterDelegate, OS_dispatch_queue;
@class NSString, PKPaymentProvisioningMethodMetadata, NSNumberFormatter, NSObject;

@interface PKContactlessCardIngester : NSObject <NFRemoteAdminEventListener> {

	BOOL _listening;
	NSString* _pushTopic;
	PKPaymentProvisioningMethodMetadata* _readerModeProvisioningMetadata;
	NSNumberFormatter* _currencyNumberFormatter;
	id<PKContactlessCardIngesterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _contactlessCardIngesterQueue;
	/*^block*/id _cardSessionTokenCompletionHandler;
	/*^block*/id _disableCardCompletionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(id)debugDescriptionForStatus:(unsigned long long)arg1 ;
-(void)invalidate;
-(void)_cancelCardIngestion;
-(void)_stopListeningToRemoteAdminEvents;
-(void)_startListeningToRemoteAdminEventsIfRequired;
-(void)_ingestCardWithCompletion:(/*^block*/id)arg1 ;
-(void)_ingestCardWithCardSessionToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2 ;
-(id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2 ;
-(void)ingestCardWithSuccessHandler:(/*^block*/id)arg1 ;
-(void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(/*^block*/id)arg2 ;
-(void)readerModeCardSessionToken:(id)arg1 ;
-(void)readerModeCardIngestionStatus:(unsigned long long)arg1 ;
@end
