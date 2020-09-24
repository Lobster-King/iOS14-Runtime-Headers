/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>
#import <libobjc.A.dylib/AMSMediaTokenServiceProtocol.h>

@protocol AMSBagProtocol, OS_dispatch_queue;
@class AMSURLSession, ACAccount, NSString, AMSProcessInfo, AMSMediaTokenServiceThrottler, NSObject, AMSMediaTokenServiceStore, AMSMediaToken;

@interface AMSMediaTokenService : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSMediaTokenServiceProtocol> {

	BOOL _enabled;
	BOOL _URLKnownToBeTrusted;
	AMSURLSession* _session;
	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSString* _clientIdentifier;
	AMSProcessInfo* _clientInfo;
	NSString* _clientVersion;
	AMSMediaTokenServiceThrottler* _throttler;
	NSObject*<OS_dispatch_queue> _tokenFetchQueue;
	AMSMediaTokenServiceStore* _tokenStore;
	double _refreshPercentage;
	double _refreshTime;

}

@property (nonatomic,retain) AMSMediaToken * cachedMediaToken; 
@property (nonatomic,readonly) AMSMediaTokenServiceThrottler * throttler;                 //@synthesize throttler=_throttler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> tokenFetchQueue;              //@synthesize tokenFetchQueue=_tokenFetchQueue - In the implementation block
@property (nonatomic,readonly) AMSMediaTokenServiceStore * tokenStore;                    //@synthesize tokenStore=_tokenStore - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double refreshPercentage;                                    //@synthesize refreshPercentage=_refreshPercentage - In the implementation block
@property (assign,nonatomic) double refreshTime;                                          //@synthesize refreshTime=_refreshTime - In the implementation block
@property (assign,nonatomic) BOOL URLKnownToBeTrusted;                                    //@synthesize URLKnownToBeTrusted=_URLKnownToBeTrusted - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                      //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                 //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup; 
@property (assign,nonatomic,__weak) AMSURLSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * clientVersion;                                  //@synthesize clientVersion=_clientVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfileVersion;
+(id)bagSubProfile;
+(id)bagKeySet;
+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3 ;
-(id<AMSBagProtocol>)bag;
-(id)_tokenRequestWithError:(id*)arg1 ;
-(NSString *)keychainAccessGroup;
-(double)refreshTime;
-(void)setCachedMediaToken:(AMSMediaToken *)arg1 ;
-(void)setRefreshTime:(double)arg1 ;
-(void)setSession:(AMSURLSession *)arg1 ;
-(AMSURLSession *)session;
-(BOOL)isEnabled;
-(double)refreshPercentage;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)clientVersion;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(ACAccount *)account;
-(AMSMediaToken *)cachedMediaToken;
-(void)_refreshMediaTokenIfNeeded:(id)arg1 ;
-(NSString *)clientIdentifier;
-(BOOL)_shouldRefreshMediaToken:(id)arg1 ;
-(void)setRefreshPercentage:(double)arg1 ;
-(void)setURLKnownToBeTrusted:(BOOL)arg1 ;
-(AMSMediaTokenServiceStore *)tokenStore;
-(AMSProcessInfo *)clientInfo;
-(BOOL)URLKnownToBeTrusted;
-(AMSMediaTokenServiceThrottler *)throttler;
-(id)initWithClientIdentifier:(id)arg1 bag:(id)arg2 ;
-(id)_fetchToken;
-(void)invalidateMediaToken;
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 bag:(id)arg3 ;
-(BOOL)_shouldReturnMediaToken:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)fetchMediaToken;
-(NSObject*<OS_dispatch_queue>)tokenFetchQueue;
-(id)_fetchBagProperties;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
@end
