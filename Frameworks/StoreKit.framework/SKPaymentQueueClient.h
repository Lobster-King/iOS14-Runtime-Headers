/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKPaymentQueueClientDelegate;
@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {

	BOOL _allowsBootstrapCellularData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	long long _environmentType;
	BOOL _hidesConfirmationDialogs;
	BOOL _ignoresInAppPurchaseRestriction;
	NSString* _receiptDirectoryPath;
	BOOL _requiresAuthenticationForPayment;
	NSNumber* _storeExternalVersion;
	NSNumber* _storeItemIdentifier;
	NSString* _vendorIdentifier;
	id<SKPaymentQueueClientDelegate> _delegate;

}

@property (assign,nonatomic) BOOL allowsBootstrapCellularData;                              //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                        //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic,__weak) id<SKPaymentQueueClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long environmentType;                                     //@synthesize environmentType=_environmentType - In the implementation block
@property (assign,nonatomic) BOOL hidesConfirmationDialogs;                                 //@synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs - In the implementation block
@property (assign,nonatomic) BOOL ignoresInAppPurchaseRestriction;                          //@synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction - In the implementation block
@property (nonatomic,copy) NSString * receiptDirectoryPath;                                 //@synthesize receiptDirectoryPath=_receiptDirectoryPath - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthenticationForPayment;                         //@synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment - In the implementation block
@property (nonatomic,copy) NSNumber * storeExternalVersion;                                 //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;                                  //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                                     //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)bundleVersion;
-(id)copyXPCEncoding;
-(long long)environmentType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(BOOL)hidesConfirmationDialogs;
-(NSString *)receiptDirectoryPath;
-(NSNumber *)storeItemIdentifier;
-(void)setEnvironmentType:(long long)arg1 ;
-(id)plist;
-(void)setHidesConfirmationDialogs:(BOOL)arg1 ;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(void)setDelegate:(id<SKPaymentQueueClientDelegate>)arg1 ;
-(NSString *)vendorIdentifier;
-(BOOL)requiresAuthenticationForPayment;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(void)setStoreExternalVersion:(NSNumber *)arg1 ;
-(void)setReceiptDirectoryPath:(NSString *)arg1 ;
-(NSNumber *)storeExternalVersion;
-(id<SKPaymentQueueClientDelegate>)delegate;
-(BOOL)ignoresInAppPurchaseRestriction;
-(void)setIgnoresInAppPurchaseRestriction:(BOOL)arg1 ;
-(void)setRequiresAuthenticationForPayment:(BOOL)arg1 ;
-(BOOL)allowsBootstrapCellularData;
@end

