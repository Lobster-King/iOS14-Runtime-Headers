/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCPaymentTransactionManagerDelegate.h>
#import <libobjc.A.dylib/FCPurchaseManagerType.h>

@protocol FCPurchaseManagerDelegate, FCPurchaseFlowOverrideProviderType, FCPaymentTransactionManager, FCPurchaseIntegrityChecker, FCPurchaseReceiptProvider, FCBundleSubscriptionManagerType, FCCoreConfigurationManager;
@class FCKeyValueStore, FCPurchaseController, NSMutableDictionary, NSString;

@interface FCPurchaseManager : NSObject <FCAppActivityObserving, FCPaymentTransactionManagerDelegate, FCPurchaseManagerType> {

	id<FCPurchaseManagerDelegate> _delegate;
	id<FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider;
	FCKeyValueStore* _localStore;
	id<FCPaymentTransactionManager> _paymentTransactionManager;
	id<FCPurchaseIntegrityChecker> _purchaseIntegrityChecker;
	id<FCPurchaseReceiptProvider> _purchaseReceiptProvider;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
	FCPurchaseController* _purchaseController;
	NSMutableDictionary* _ongoingPurchaseEntriesByProductID;
	id<FCCoreConfigurationManager> _configurationManager;
	NSString* _lastSignedInItunesAccountDSID;

}

@property (nonatomic,retain) FCKeyValueStore * localStore;                                                     //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,readonly) id<FCPaymentTransactionManager> paymentTransactionManager;                      //@synthesize paymentTransactionManager=_paymentTransactionManager - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseIntegrityChecker> purchaseIntegrityChecker;                        //@synthesize purchaseIntegrityChecker=_purchaseIntegrityChecker - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseReceiptProvider> purchaseReceiptProvider;                          //@synthesize purchaseReceiptProvider=_purchaseReceiptProvider - In the implementation block
@property (nonatomic,readonly) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;                  //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
@property (nonatomic,readonly) FCPurchaseController * purchaseController;                                      //@synthesize purchaseController=_purchaseController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ongoingPurchaseEntriesByProductID;                          //@synthesize ongoingPurchaseEntriesByProductID=_ongoingPurchaseEntriesByProductID - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;                              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,copy) NSString * lastSignedInItunesAccountDSID;                                           //@synthesize lastSignedInItunesAccountDSID=_lastSignedInItunesAccountDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FCPurchaseManagerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FCPurchaseFlowOverrideProviderType> purchaseFlowOverrideProvider; 
-(FCKeyValueStore *)localStore;
-(void)activityObservingApplicationDidEnterBackground;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 ;
-(id<FCPurchaseReceiptProvider>)purchaseReceiptProvider;
-(id)initWithCloudContext:(id)arg1 purchaseIntegrityChecker:(id)arg2 purchaseReceiptProvider:(id)arg3 paymentTransactionManager:(id)arg4 bundleSubscriptionManager:(id)arg5 keyValueStoreOption:(unsigned long long)arg6 ;
-(void)saveToDisk;
-(BOOL)isPurchaseTimeElapsedWithEntry:(id)arg1 ;
-(void)_purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4 ;
-(id<FCPaymentTransactionManager>)paymentTransactionManager;
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2 ;
-(void)loadLocalCachesFromStore;
-(id)ongoingPurchaseEntryForProductID:(id)arg1 ;
-(void)cleanupStaleOngoingPurchaseEntries;
-(void)setPurchaseFlowOverrideProvider:(id<FCPurchaseFlowOverrideProviderType>)arg1 ;
-(void)setOngoingPurchaseEntriesByProductID:(NSMutableDictionary *)arg1 ;
-(FCPurchaseController *)purchaseController;
-(void)removeOngoingPurchaseEntryForProductID:(id)arg1 ;
-(void)startBundlePurchaseWithPurchase:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)ongoingPurchaseEntriesByProductID;
-(id)init;
-(BOOL)anyOngoingPurchases;
-(void)transactionFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ;
-(void)simulateFailurePurchaseWithProductID:(id)arg1 transactionState:(long long)arg2 error:(id)arg3 ;
-(void)setDelegate:(id<FCPurchaseManagerDelegate>)arg1 ;
-(void)performEntitlementWithTagID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<FCPurchaseIntegrityChecker>)purchaseIntegrityChecker;
-(id<FCCoreConfigurationManager>)configurationManager;
-(id<FCPurchaseFlowOverrideProviderType>)purchaseFlowOverrideProvider;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(void)finishPurchaseTransactionWithProductID:(id)arg1 ;
-(id)_ongoingPurchaseEntryIDForProductID:(id)arg1 ;
-(id<FCPurchaseManagerDelegate>)delegate;
-(NSString *)lastSignedInItunesAccountDSID;
-(void)simulateSuccessfulPurchaseWithProductID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 ;
-(void)setLastSignedInItunesAccountDSID:(NSString *)arg1 ;
-(void)transactionPurchasedWithProductID:(id)arg1 ;
-(BOOL)signInDetected;
-(BOOL)isPurchaseOngoingForTagID:(id)arg1 ;
-(void)clearAllOngoingPurchaseEntries;
-(void)startPurchaseWithTagID:(id)arg1 purchase:(id)arg2 webAccessOptIn:(BOOL)arg3 error:(id*)arg4 ;
-(void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(BOOL)arg7 payment:(id)arg8 error:(id*)arg9 ;
@end

