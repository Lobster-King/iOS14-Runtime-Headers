/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber, NSString;

@interface AMSSubscriptionEntitlement : NSObject {

	BOOL _autoRenewEnabled;
	BOOL _familySubscription;
	BOOL _freeTrialEligible;
	BOOL _purchaser;
	BOOL _carrierRequiresVerification;
	BOOL _carrierStatusUnknown;
	BOOL _carrierUnlinked;
	unsigned _source;
	unsigned _status;
	NSDate* _expiration;
	NSNumber* _inAppAdamId;
	NSString* _inAppVersion;
	NSString* _offerId;
	unsigned long long _period;
	long long _carrierErrorCode;
	NSString* _carrierOperatorName;
	NSString* _carrierPhoneNumber;
	NSString* _carrierSessionId;

}

@property (assign,nonatomic) BOOL autoRenewEnabled;                         //@synthesize autoRenewEnabled=_autoRenewEnabled - In the implementation block
@property (nonatomic,retain) NSDate * expiration;                           //@synthesize expiration=_expiration - In the implementation block
@property (assign,nonatomic) BOOL familySubscription;                       //@synthesize familySubscription=_familySubscription - In the implementation block
@property (assign,nonatomic) BOOL freeTrialEligible;                        //@synthesize freeTrialEligible=_freeTrialEligible - In the implementation block
@property (nonatomic,retain) NSNumber * inAppAdamId;                        //@synthesize inAppAdamId=_inAppAdamId - In the implementation block
@property (nonatomic,retain) NSString * inAppVersion;                       //@synthesize inAppVersion=_inAppVersion - In the implementation block
@property (nonatomic,retain) NSString * offerId;                            //@synthesize offerId=_offerId - In the implementation block
@property (assign,nonatomic) unsigned long long period;                     //@synthesize period=_period - In the implementation block
@property (assign,nonatomic) BOOL purchaser;                                //@synthesize purchaser=_purchaser - In the implementation block
@property (assign,nonatomic) unsigned source;                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned status;                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long carrierErrorCode;                    //@synthesize carrierErrorCode=_carrierErrorCode - In the implementation block
@property (nonatomic,retain) NSString * carrierOperatorName;                //@synthesize carrierOperatorName=_carrierOperatorName - In the implementation block
@property (nonatomic,retain) NSString * carrierPhoneNumber;                 //@synthesize carrierPhoneNumber=_carrierPhoneNumber - In the implementation block
@property (nonatomic,retain) NSString * carrierSessionId;                   //@synthesize carrierSessionId=_carrierSessionId - In the implementation block
@property (assign,nonatomic) BOOL carrierRequiresVerification;              //@synthesize carrierRequiresVerification=_carrierRequiresVerification - In the implementation block
@property (assign,nonatomic) BOOL carrierStatusUnknown;                     //@synthesize carrierStatusUnknown=_carrierStatusUnknown - In the implementation block
@property (assign,nonatomic) BOOL carrierUnlinked;                          //@synthesize carrierUnlinked=_carrierUnlinked - In the implementation block
-(unsigned long long)period;
-(id)exportObject;
-(NSString *)offerId;
-(void)setStatus:(unsigned)arg1 ;
-(void)setSource:(unsigned)arg1 ;
-(unsigned)status;
-(id)init;
-(BOOL)purchaser;
-(NSString *)inAppVersion;
-(NSDate *)expiration;
-(BOOL)autoRenewEnabled;
-(NSString *)carrierOperatorName;
-(NSString *)carrierPhoneNumber;
-(BOOL)freeTrialEligible;
-(long long)carrierErrorCode;
-(BOOL)familySubscription;
-(BOOL)carrierRequiresVerification;
-(NSString *)carrierSessionId;
-(BOOL)carrierStatusUnknown;
-(void)setExpiration:(NSDate *)arg1 ;
-(BOOL)carrierUnlinked;
-(void)setAutoRenewEnabled:(BOOL)arg1 ;
-(void)setFamilySubscription:(BOOL)arg1 ;
-(void)setInAppAdamId:(NSNumber *)arg1 ;
-(void)setFreeTrialEligible:(BOOL)arg1 ;
-(void)setInAppVersion:(NSString *)arg1 ;
-(void)setCarrierErrorCode:(long long)arg1 ;
-(void)setCarrierSessionId:(NSString *)arg1 ;
-(void)setCarrierOperatorName:(NSString *)arg1 ;
-(void)setCarrierPhoneNumber:(NSString *)arg1 ;
-(void)setCarrierRequiresVerification:(BOOL)arg1 ;
-(void)setCarrierStatusUnknown:(BOOL)arg1 ;
-(void)setCarrierUnlinked:(BOOL)arg1 ;
-(unsigned)source;
-(void)setPurchaser:(BOOL)arg1 ;
-(void)setPeriod:(unsigned long long)arg1 ;
-(NSNumber *)inAppAdamId;
-(void)setOfferId:(NSString *)arg1 ;
@end

