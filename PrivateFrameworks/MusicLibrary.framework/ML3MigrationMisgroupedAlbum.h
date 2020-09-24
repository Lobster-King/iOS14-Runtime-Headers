/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface ML3MigrationMisgroupedAlbum : NSObject {

	NSMutableArray* _misgroupedTracks;
	long long _albumPID;
	long long _albumArtistPID;

}

@property (nonatomic,readonly) long long albumPID;                      //@synthesize albumPID=_albumPID - In the implementation block
@property (nonatomic,readonly) long long albumArtistPID;                //@synthesize albumArtistPID=_albumArtistPID - In the implementation block
@property (nonatomic,readonly) NSArray * misgroupedTracks; 
-(long long)albumPID;
-(id)initWithAlbumPID:(long long)arg1 albumArtistPID:(long long)arg2 ;
-(void)addMisgroupedTrack:(id)arg1 ;
-(NSArray *)misgroupedTracks;
-(long long)albumArtistPID;
@end
