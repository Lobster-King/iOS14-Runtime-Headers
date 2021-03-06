/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MCAccountUtilities : NSObject {

	NSObject*<OS_dispatch_queue> _signInQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> signInQueue;              //@synthesize signInQueue=_signInQueue - In the implementation block
+(id)accountDataclassesForBundleID:(id)arg1 ;
+(id)appStoreAccountIdentifierForPersona:(id)arg1 ;
+(BOOL)hasManagedAccountOfDataclasses:(id)arg1 ;
-(void)setSignInQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_signIniCloudAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id*)arg4 ;
-(BOOL)_signIniTunesAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id*)arg4 ;
-(void)signInAccountsWithTypes:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 baseViewController:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)signInQueue;
@end

