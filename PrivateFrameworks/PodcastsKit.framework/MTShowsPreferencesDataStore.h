/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PodcastsKit/PodcastsKit-Structs.h>
@interface MTShowsPreferencesDataStore : NSObject

@property (assign,nonatomic) long long sortOrder; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sortDescriptorsForSortType:(long long)arg1 ;
-(long long)sortOrder;
-(id)sortDescriptors;
-(void)setSortOrder:(long long)arg1 ;
-(long long)_sortTypeForString:(id)arg1 ;
-(id)_stringForSortType:(long long)arg1 ;
@end
