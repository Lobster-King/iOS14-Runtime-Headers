/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableDictionary;

@interface FMFSessionDataManager : NSObject {

	NSSet* _followers;
	NSSet* _following;
	NSSet* _locations;
	NSSet* _fences;
	NSMutableDictionary* _locationsCache;

}

@property (nonatomic,retain) NSMutableDictionary * locationsCache;              //@synthesize locationsCache=_locationsCache - In the implementation block
@property (nonatomic,retain) NSSet * followers;                                 //@synthesize followers=_followers - In the implementation block
@property (nonatomic,retain) NSSet * following;                                 //@synthesize following=_following - In the implementation block
@property (nonatomic,retain) NSSet * locations;                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSSet * fences;                                    //@synthesize fences=_fences - In the implementation block
+(id)sharedInstance;
-(void)abPreferencesDidChange;
-(void)abDidChange;
-(id)locationForHandle:(id)arg1 ;
-(id)followingForHandle:(id)arg1 ;
-(void)setFences:(NSSet *)arg1 ;
-(NSMutableDictionary *)locationsCache;
-(void)setFollowers:(NSSet *)arg1 ;
-(id)followerForHandle:(id)arg1 ;
-(void)setLocations:(NSSet *)arg1 ;
-(NSSet *)locations;
-(NSSet *)followers;
-(id)favoritesOrdered;
-(id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2 ;
-(NSSet *)following;
-(void)setFollowing:(NSSet *)arg1 ;
-(NSSet *)fences;
-(void)setLocationsCache:(NSMutableDictionary *)arg1 ;
@end

