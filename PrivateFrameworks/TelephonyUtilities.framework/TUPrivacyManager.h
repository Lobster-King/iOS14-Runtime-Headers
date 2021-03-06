/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TUPrivacyManager : NSObject

@property (nonatomic,copy,readonly) NSArray * privacyRules; 
+(id)sharedPrivacyManager;
-(void)addRule:(id)arg1 ;
-(void)removeRule:(id)arg1 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forPhoneNumber:(id)arg2 ;
-(BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1 ;
-(void)dealloc;
-(BOOL)isIncomingCommunicationBlockedForBusinessID:(id)arg1 ;
-(id)init;
-(void)_handleBlockListChanged:(id)arg1 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forBusinessID:(id)arg2 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(id)allBlacklistRules;
-(NSArray *)privacyRules;
-(BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)arg1 ;
@end

