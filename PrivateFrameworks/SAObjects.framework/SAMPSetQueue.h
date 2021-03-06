/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SAMPCollection, NSNumber;

@interface SAMPSetQueue : SADomainCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (assign,nonatomic) BOOL dryRun; 
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SAMPCollection * mediaItems; 
@property (nonatomic,copy) NSString * recommendationId; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableMusicAccount; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedUpNext; 
@property (assign,nonatomic) BOOL shouldReloadQueue; 
@property (assign,nonatomic) BOOL shouldShuffle; 
@property (nonatomic,copy) NSArray * sort; 
@property (nonatomic,copy) NSNumber * startPlaying; 
+(id)setQueueWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setQueue;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(NSArray *)sort;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(id)encodedClassName;
-(NSString *)assetInfo;
-(id)groupIdentifier;
-(NSString *)recommendationId;
-(void)setRecommendationId:(NSString *)arg1 ;
-(NSString *)sharedUserIdFromPlayableMusicAccount;
-(void)setSharedUserIdFromPlayableMusicAccount:(NSString *)arg1 ;
-(NSNumber *)startPlaying;
-(void)setDryRun:(BOOL)arg1 ;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(BOOL)requiresResponse;
-(void)setAssetInfo:(NSString *)arg1 ;
-(NSString *)requesterSharedUserId;
-(BOOL)shouldReloadQueue;
-(BOOL)mutatingCommand;
-(void)setSort:(NSArray *)arg1 ;
-(SAMPCollection *)mediaItems;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(void)setMediaItems:(SAMPCollection *)arg1 ;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedUpNext;
-(void)setShouldOverrideManuallyCuratedUpNext:(BOOL)arg1 ;
-(void)setShouldReloadQueue:(BOOL)arg1 ;
-(BOOL)shouldShuffle;
-(void)setShouldShuffle:(BOOL)arg1 ;
-(BOOL)dryRun;
@end

