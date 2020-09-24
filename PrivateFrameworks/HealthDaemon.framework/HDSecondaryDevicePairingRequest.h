/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HKDaemonTransaction, HKSecondaryPairedDeviceConfiguration, HDTinkerProfile, NSString;

@interface HDSecondaryDevicePairingRequest : NSObject {

	os_unfair_lock_s _lock;
	double _startTime;
	HKDaemonTransaction* _transaction;
	HKSecondaryPairedDeviceConfiguration* _configuration;
	/*^block*/id _completion;
	long long _stage;
	HDTinkerProfile* _profile;
	NSString* _guardianAccountIdentifier;

}

@property (nonatomic,readonly) double startTime;                                                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) HKDaemonTransaction * transaction;                                 //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) HKSecondaryPairedDeviceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) long long stage;                                                     //@synthesize stage=_stage - In the implementation block
@property (nonatomic,retain) HDTinkerProfile * profile;                                           //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * guardianAccountIdentifier;                                  //@synthesize guardianAccountIdentifier=_guardianAccountIdentifier - In the implementation block
-(void)setProfile:(HDTinkerProfile *)arg1 ;
-(HDTinkerProfile *)profile;
-(void)dealloc;
-(HKDaemonTransaction *)transaction;
-(double)startTime;
-(id)completion;
-(void)setStage:(long long)arg1 ;
-(long long)stage;
-(void)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(HKSecondaryPairedDeviceConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setGuardianAccountIdentifier:(NSString *)arg1 ;
-(id)codablePairingRequest;
-(NSString *)guardianAccountIdentifier;
@end
